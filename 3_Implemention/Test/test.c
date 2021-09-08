#include "unity.h"
#include "fun.h"

#define PROJECT_NAME  "TICTACTOE"


void setUp(){}

void tearDown(){}


void test_win_check(void)
{
    
}

int main(void){
    UNITY_BEGIN();
	/* run test functions*/
    RUN_TEST(test_prep_board);
    RUN_TEST(test_put_board);
    RUN_TEST(test_display_board);
    RUN_TEST(test_win_check);
    return UNITY_END;
} 
void test_prep_board(void)
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
TEST_ASSERT_EQUAL_INT(board[1][2],int);		
	
}

void put_board(int , char , int , int ,char ) 
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

TEST_ASSERT_EQUAL_INT(number=2,int);
	
}
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
TEST_ASSERT_EQUAL_CHAR(chrboard[1][2],char);		
}
#include "fun.h"
#include<stdio.h>

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
TEST_ASSERT_EQUAL_INT(1,int);
TEST_ASSERT_EQUAL_INT(2,int);
TEST_ASSERT_EQUAL_INT(0,int);
TEST_ASSERT_EQUAL_CHAR(chrboard[1][2],char);
}


