#include<stdio.h>
#include<conio.h>
void win_check(int* x,int* y,int* flag1 ,char chrboard[3][3])		//checks who wins
{
	
	if((chrboard[0][0]=='X' && chrboard[0][1]=='X' && chrboard[0][2]=='X') || (chrboard[1][0]=='X' && chrboard[1][1]=='X' && chrboard[1][2]=='X') || (chrboard[2][0]=='X' && chrboard[2][1]=='X' && chrboard[2][2]=='X') || (chrboard[0][0]=='X' && chrboard[1][0]=='X' && chrboard[2][0]=='X') || (chrboard[0][1]=='X' && chrboard[1][1]=='X' && chrboard[2][1]=='X') || (chrboard[0][2]=='X' && chrboard[1][2]=='X' && chrboard[2][2]=='X') || (chrboard[0][0]=='X' && chrboard[1][1]=='X' && chrboard[2][2]=='X') || (chrboard[0][2]=='X' && chrboard[1][1]=='X' && chrboard[2][0]=='X') )
	{		
		*flag1=0;
		printf("\n PLAYER 1 WON THE GAME ... \a");		
	}
	else if ((chrboard[0][0]=='O' && chrboard[0][1]=='O' && chrboard[0][2]=='O') || (chrboard[1][0]=='O' && chrboard[1][1]=='O' && chrboard[1][2]=='O') || (chrboard[2][0]=='O' && chrboard[2][1]=='O' && chrboard[2][2]=='O') || (chrboard[0][0]=='O' && chrboard[1][0]=='O' && chrboard[2][0]=='O') || (chrboard[0][1]=='O' && chrboard[1][1]=='O' && chrboard[2][1]=='O') || (chrboard[0][2]=='O' && chrboard[1][2]=='O' && chrboard[2][2]=='O') || (chrboard[0][0]=='O' && chrboard[1][1]=='O' && chrboard[2][2]=='O') || (chrboard[0][2]=='O' && chrboard[1][1]=='O' && chrboard[2][0]=='O') )
	{
		*flag1=0;
		printf("\n PLAYER 2 WON THE GAME ... \a");	
	}
	
}