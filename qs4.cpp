/*
 ==============================================================================================================================
 Name        : qs4.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a small tic-tac-toe program that allows two players to play tic-tac-toe competitively. Your
               program should check to see if either player has won, or if the board is filled completely (with
               the game ending in a tie). Bonus: can you make your program detect if the game cannot be won
               by either side before the entire grid is filled?
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef struct
{
	int i;
	int j;
} blahh;

blahh check(int c)
{
	blahh xy;
	switch (c)
	{

	case 1: xy.i = 0;xy.j=0;
	return xy;
	break;

	case 2: xy.i = 0;xy.j=1;
	return xy;
	break;
	
	case 3: xy.i = 0;xy.j=2;
	return xy;
	break;

	case 4: xy.i = 1;xy.j=0;
	return xy;
	break;

	case 5: xy.i = 1;xy.j=1;
	return xy;
	break;

	case 6: xy.i = 1;xy.j=2;
	return xy;
	break;

	case 7: xy.i = 2;xy.j=0;
	return xy;
	break;

	case 8: xy.i = 2;xy.j=1;
	return xy;
	break;

	case 9: xy.i = 2;xy.j=2;
	return xy;
	break;
}
}

bool Winner(char A[][3])
{
	if ((A[0][0]=='X'&&A[0][1]=='X'&&A[0][2]=='X')||\
		(A[1][0]=='X'&&A[1][1]=='X'&&A[1][2]=='X')||\
		(A[2][0]=='X'&&A[2][1]=='X'&&A[2][2]=='X')||\
		(A[3][0]=='X'&&A[3][1]=='X'&&A[3][2]=='X')||\
		(A[0][0]=='X'&&A[1][0]=='X'&&A[2][0]=='X')||\
		(A[0][1]=='X'&&A[1][1]=='X'&&A[2][1]=='X')||\
		(A[0][2]=='X'&&A[1][2]=='X'&&A[2][2]=='X')||\
		(A[0][0]=='X'&&A[1][1]=='X'&&A[2][2]=='X')||\
		(A[0][2]=='X'&&A[1][1]=='X'&&A[2][0]=='X')||\
		(A[0][0]=='O'&&A[0][1]=='O'&&A[0][2]=='O')||\
		(A[1][0]=='O'&&A[1][1]=='O'&&A[1][2]=='O')||\
		(A[2][0]=='O'&&A[2][1]=='O'&&A[2][2]=='O')||\
		(A[3][0]=='O'&&A[3][1]=='O'&&A[3][2]=='O')||\
		(A[0][0]=='O'&&A[1][0]=='O'&&A[2][0]=='O')||\
		(A[0][1]=='O'&&A[1][1]=='O'&&A[2][1]=='O')||\
		(A[0][2]=='O'&&A[1][2]=='O'&&A[2][2]=='O')||\
		(A[0][0]=='O'&&A[1][1]=='O'&&A[2][2]=='O')||\
		(A[0][2]=='O'&&A[1][1]=='O'&&A[2][0]=='O')) return true;
	else return false;

}

void disp (char A[][3])
{
for (int a=0; a<3; a++)
 {
	 for( int b=0; b<3; b++)
	 {
		cout<< " "<<A[a][b]<<" | ";
	 }
	 cout<<endl;
	 cout<<"---|----|----|"<<endl;
 }
}

bool check_square_blank(char A[][3], int i, int j)
{
	if (A[i][j] == ' ')
		return true;
	else return false;
}

int main()
{
	clock_t begin = clock();
	char A[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int c;
	bool Winner_decider = false;
	int a=1;
	bool check_empty=false;
	int count=0;
	int seed = time (NULL);
	srand (seed);
while (!Winner_decider)		
	{
		if (count==9)
		{
			cout<<"Its a tie"<<endl;
			break;
		};
		if (a)
		{	
			cout<< "Player 1"<<endl;
			cin>>c;
			blahh xy = check (c);
			check_empty = check_square_blank(A, xy.i, xy.j);
			if (check_empty)
			{
			A[xy.i][xy.j] = 'X';
			disp (A);
			count++;
			Winner_decider = Winner(A);
			if (Winner_decider)break;
			}
			else 
			{
			cout<< "Please select another choice!! \n"<< endl;
			check_empty=false;
			continue;
			}
			a=0;
		}
		else
		{
		cout<< "Player 2"<<endl;
		c = ((rand()%9)+1);
		blahh xy = check (c);
		check_empty = check_square_blank(A, xy.i, xy.j);
			if (check_empty)
			{
			A[xy.i][xy.j] = 'O';
			disp(A);
			count++;
			Winner_decider = Winner(A);
			a=1;
			if (Winner_decider) break;
			}
			else {check_empty=false; a=0; continue;}
	}
}
if(		(A[0][0]=='X'&&A[0][1]=='X'&&A[0][2]=='X')||\
		(A[1][0]=='X'&&A[1][1]=='X'&&A[1][2]=='X')||\
		(A[2][0]=='X'&&A[2][1]=='X'&&A[2][2]=='X')||\
		(A[3][0]=='X'&&A[3][1]=='X'&&A[3][2]=='X')||\
		(A[0][0]=='X'&&A[1][0]=='X'&&A[2][0]=='X')||\
		(A[0][1]=='X'&&A[1][1]=='X'&&A[2][1]=='X')||\
		(A[0][2]=='X'&&A[1][2]=='X'&&A[2][2]=='X')||\
		(A[0][0]=='X'&&A[1][1]=='X'&&A[2][2]=='X')||\
		(A[0][2]=='X'&&A[1][1]=='X'&&A[2][0]=='X')
	)cout <<"PLAYER1 wins"<<endl;
if (	(A[0][0]=='O'&&A[0][1]=='O'&&A[0][2]=='O')||\
		(A[1][0]=='O'&&A[1][1]=='O'&&A[1][2]=='O')||\
		(A[2][0]=='O'&&A[2][1]=='O'&&A[2][2]=='O')||\
		(A[3][0]=='O'&&A[3][1]=='O'&&A[3][2]=='O')||\
		(A[0][0]=='O'&&A[1][0]=='O'&&A[2][0]=='O')||\
		(A[0][1]=='O'&&A[1][1]=='O'&&A[2][1]=='O')||\
		(A[0][2]=='O'&&A[1][2]=='O'&&A[2][2]=='O')||\
		(A[0][0]=='O'&&A[1][1]=='O'&&A[2][2]=='O')||\
		(A[0][2]=='O'&&A[1][1]=='O'&&A[2][0]=='O')
	)cout<<"PLAYER2 wins"<<endl;

	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
