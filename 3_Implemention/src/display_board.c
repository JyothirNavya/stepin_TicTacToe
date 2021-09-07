#include "fun.h"
#include <stdio.h>
void display_board(char xox_changer,int* x,int* y,char chrboard[3][3])   	//prints the current state of the game board
{ 				
				
			chrboard[*x][*y]=xox_changer; 
	//printf("|_____||_____||______");
	printf("_________________\n");	
	for(int i=0;i<3;i++)
		{	
			for(int j=0;j<3;j++)
			{
				printf("|  %c |",chrboard[i][j]);
			}
			printf("\n");
			printf("|____||____||____|\n");
			//printf("\n");_____
		}
}