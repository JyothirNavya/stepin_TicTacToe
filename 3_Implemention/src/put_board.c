#include "fun.h"
#include <stdio.h>
void put_board(int number, char xox_changer,int* x, int* y,char chrboard[3][3]) 
{
	//Calculates which numbers come in which indexes


	if(number == 7)
	{
		*x=0;
		*y=0;
	}
	else if(number == 8)
	{
		*x=0;
		*y=1;
	}
	else if(number == 9)
	{
		*x=0;
		*y=2;
	}
	else if(number == 4)
	{
		*x=1;
		*y=0;
	}
	else if(number == 5)
	{
		*x=1;
		*y=1;
	}
	else if(number == 6)
	{
		*x=1;
		*y=2;
	}
	else if(number == 1)
	{
		*x=2;
		*y=0;
	}
	else if(number == 2)
	{
		*x=2;
		*y=1;
	}
	else if(number == 3)
	{
		*x=2;
		*y=2;
	}
	else
	{
		printf("Invalid number ...");
	}	
	
	
}