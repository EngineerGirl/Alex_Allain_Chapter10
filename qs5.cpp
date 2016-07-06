/*
 ==============================================================================================================================
 Name        : qs1.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Make your tic-tac-toe game into a version of connect-4 that allow boards bigger than 3 by 3 but
               requires 4-in-a-row to win.
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

	case 10: xy.i = 0;xy.j=3;
	return xy;
	break;
	
	case 11: xy.i = 1;xy.j=3;
	return xy;
	break;
	
	case 12: xy.i = 2;xy.j=3;
	return xy;
	break;

	case 13: xy.i = 3;xy.j=3;
	return xy;
	break;

	case 14: xy.i = 3;xy.j=0;
	return xy;
	break;

	case 15: xy.i = 3;xy.j=1;
	return xy;
	break;

	case 16: xy.i = 3;xy.j=2;
	return xy;
	break;
}
}

bool Winner(char A[][4])
{
	if ((A[0][0]=='X'&&A[0][1]=='X'&&A[0][2]=='X'&&A[0][3]=='X')||\
		(A[1][0]=='X'&&A[1][1]=='X'&&A[1][2]=='X'&&A[1][3]=='X')||\
		(A[2][0]=='X'&&A[2][1]=='X'&&A[2][2]=='X'&&A[2][3]=='X')||\
		(A[3][0]=='X'&&A[3][1]=='X'&&A[3][2]=='X'&&A[3][3]=='X')||\
		(A[0][0]=='X'&&A[1][0]=='X'&&A[2][0]=='X'&&A[3][0]=='X')||\
		(A[0][1]=='X'&&A[1][1]=='X'&&A[2][1]=='X'&&A[3][1]=='X')||\
		(A[0][2]=='X'&&A[1][2]=='X'&&A[2][2]=='X'&&A[3][2]=='X')||\
		(A[0][3]=='X'&&A[1][3]=='X'&&A[2][3]=='X'&&A[3][3]=='X')||\
		(A[0][0]=='O'&&A[0][1]=='O'&&A[0][2]=='O'&&A[0][3]=='O')||\
		(A[1][0]=='O'&&A[1][1]=='O'&&A[1][2]=='O'&&A[1][3]=='O')||\
		(A[2][0]=='O'&&A[2][1]=='O'&&A[2][2]=='O'&&A[2][3]=='O')||\
		(A[3][0]=='O'&&A[3][1]=='O'&&A[3][2]=='O'&&A[3][3]=='O')||\
		(A[0][0]=='O'&&A[1][0]=='O'&&A[2][0]=='O'&&A[3][0]=='O')||\
		(A[0][1]=='O'&&A[1][1]=='O'&&A[2][1]=='O'&&A[3][1]=='O')||\
		(A[0][2]=='O'&&A[1][2]=='O'&&A[2][2]=='O'&&A[3][2]=='O')||\
		(A[0][3]=='O'&&A[1][3]=='O'&&A[2][3]=='O'&&A[3][3]=='O')) return true;
	else return false;

}

void disp (char A[][4])
{
for (int a=0; a<4; a++)
 {
	 for( int b=0; b<4; b++)
	 {
		cout<< A[a][b]<<"  ";
	 }
	 cout<<endl;
 }
}

bool check_square_blank(char A[][4], int i, int j)
{
	if (A[i][j] == '*')
		return true;
	else {cout<< "Lost your chance \n"<< endl;
	return false;}

}

int main()
{
	cout<<"1	2	3	10\n4	5	6	11\n7	8	9	12\n14	15	16	13\n";
	char A[4][4] = {{'*','*','*','*'},{'*','*','*','*'},{'*','*','*','*'},{'*','*','*','*'}};
	int c;
	bool Winner_decider = false;
	
while (!Winner_decider)		
	{
		bool check_empty=false;	
		cout<< "Player 1"<<endl;
		cin>>c;
		blahh xy = check (c);
		check_empty = check_square_blank(A, xy.i, xy.j);
		if (check_empty){
		A[xy.i][xy.j] = 'X';
		disp (A);
		Winner_decider = Winner(A);
		if (Winner_decider)
		{
		break;
		}
		}			else check_empty=false;

		cout<< "Player 2"<<endl;
		cin>>c;
		xy = check (c);
		check_empty = check_square_blank(A, xy.i, xy.j);
			if (check_empty)
			{
		A[xy.i][xy.j] = 'O';
		disp(A);
		Winner_decider = Winner(A);
		if (Winner_decider)
		{
		break;
		}
			}
			else check_empty=false;
	}
if((A[0][0]=='X'&&A[0][1]=='X'&&A[0][2]=='X'&&A[0][3]=='X')||\
		(A[1][0]=='X'&&A[1][1]=='X'&&A[1][2]=='X'&&A[1][3]=='X')||\
		(A[2][0]=='X'&&A[2][1]=='X'&&A[2][2]=='X'&&A[2][3]=='X')||\
		(A[3][0]=='X'&&A[3][1]=='X'&&A[3][2]=='X'&&A[3][3]=='X')||\
		(A[0][0]=='X'&&A[1][0]=='X'&&A[2][0]=='X'&&A[3][0]=='X')||\
		(A[0][1]=='X'&&A[1][1]=='X'&&A[2][1]=='X'&&A[3][1]=='X')||\
		(A[0][2]=='X'&&A[1][2]=='X'&&A[2][2]=='X'&&A[3][2]=='X')||\
		(A[0][3]=='X'&&A[1][3]=='X'&&A[2][3]=='X'&&A[3][3]=='X'))
		cout <<"PLAYER1 wins"<<endl;
if ((A[0][0]=='O'&&A[0][1]=='O'&&A[0][2]=='O'&&A[0][3]=='O')||\
		(A[1][0]=='O'&&A[1][1]=='O'&&A[1][2]=='O'&&A[1][3]=='O')||\
		(A[2][0]=='O'&&A[2][1]=='O'&&A[2][2]=='O'&&A[2][3]=='O')||\
		(A[3][0]=='O'&&A[3][1]=='O'&&A[3][2]=='O'&&A[3][3]=='O')||\
		(A[0][0]=='O'&&A[1][0]=='O'&&A[2][0]=='O'&&A[3][0]=='O')||\
		(A[0][1]=='O'&&A[1][1]=='O'&&A[2][1]=='O'&&A[3][1]=='O')||\
		(A[0][2]=='O'&&A[1][2]=='O'&&A[2][2]=='O'&&A[3][2]=='O')||\
		(A[0][3]=='O'&&A[1][3]=='O'&&A[2][3]=='O'&&A[3][3]=='O'))
		cout<<"PLAYER2 wins"<<endl;
	system ("pause");
	return 0;
}
