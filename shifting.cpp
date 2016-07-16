/*
 ==============================================================================
 Name        : shifting.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Description : Shift bits of Array by 1 ahead (will require this logic for Insertion Sort)
 ==============================================================================
 */
 
#include <iostream>
using namespace std;

int main()
{
	int A[7]={55,3,7,12,99};

	cout<<"A[4]" <<A[4]<<endl;
	for(int i=4;i>=0;--i)
	{
		A[i+1]= A[i];
	}
	A[0]=0;

	cout<<"After Shifting ahead by 1"<<endl;
	for(int i=1; i<6; i++)
	{
		cout<<A[i]<<endl;
	}
	cout<<endl;
	cout<<"A[4]" <<A[4]<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
