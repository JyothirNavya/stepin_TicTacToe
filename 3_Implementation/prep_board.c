#include<stdio.h>
#include<conio.h>
void prep_board() 	//Shows which keys the game is played with.
{
	int board[3][3]={{7,8,9},{4,5,6},{1,2,3}};
	
	for(int i=0;i<3;i++)
		{	
			for(int j=0;j<3;j++)
			{
				printf("    %d",board[i][j]);
			}
			printf("\n");
			printf("\n");
		}
	
}