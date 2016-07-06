/*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program that detects if a list is sorted or not, and if it is not sorted, sort it.
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void disp (int A[], int size)
{
for (int i=0;i<5;i++)
	{
		cout<< A[i]<< "  ";
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
		int index_with_smallest_number = find(A, 5, i);
		temp = A[i];
		A[i] = A[index_with_smallest_number];
		A[index_with_smallest_number]=temp;
	}
}
int main ()
{
	int A[5];
	for (int i=0;i<5;i++)
	{
		cin>> A[i];
	}

	cout <<endl;
	int B[5];
	for (int i=0;i<5;i++)
	{
		B[i] = A[i];
	}
	cout<< "Copied Array" << endl;
	disp(B,5);
	insertion_sort(A, 5); 
	int count =0;
for (int i=0; i<5;i++)
{
if (A[i] == B[i])
{
count++;
}
}

if (count == 5)
cout<< " \nArray is sorted"<<endl;
else 
{cout<<"\n\nSorted Array is: ";
 disp (A,5);
}
	system ("pause");
	return 0;
}
