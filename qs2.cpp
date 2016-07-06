/*
==============================================================================================================================
 Name        : qs2.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program that takes in 50 values and prints out the highest, the lowest, the average and
               then all 50 input values, one per line.
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void disp (int A[], int size)
{
for (int i=0;i<50;i++)
	{
		cout<< A[i] <<endl;
	}
}

int find (int array[], int size, int index)
{
int index_of_smallest_value = index;
for (int i = index + 1; i < size; i++)
{
if ( array[ i ] < array[ index_of_smallest_value ] )
{
index_of_smallest_value = i;
}
}
return index_of_smallest_value;
}

void insertion_sort(int A[], int size)
{
	for (int i=0; i<size; i++)
	{
		int temp;
		int index_with_smallest_number = find(A, 50, i);
		temp = A[i];
		A[i] = A[index_with_smallest_number];
		A[index_with_smallest_number]=temp;
	}
}

double average(int A[], int size)
{
	int sum=0;
	double avg=0.0;
	for (int i=0; i<size; i++)
	{
		sum=sum+A[i];
	}
	cout<<"Sum: "<<sum<<endl;
	return avg=(double)sum/(double)size;
}

int main ()
{
	int A[50];
	srand (time(NULL));
		for (int r= 0;r < 50; r++)
		{
			A[r] = (rand()%25)+1;
		}
	//disp(A,50);
	cout <<endl;
	insertion_sort(A, 50); 
	cout<<"************************"<<endl;
	cout<< "Lowest number: "<<A[0]<<endl;
	cout<< "Highest number: " <<A[49]<<endl;
	cout<< "Middle number: "<<A[24]<<endl;
	double result;
	result = average(A, 50);
	cout<< "Average of all the numbers: "<<result<<endl;
	cout<<"************************"<<endl;
	cout<<"The sorted List: "<<endl;
	disp (A,50);	
	system ("pause");
	return 0;
}
