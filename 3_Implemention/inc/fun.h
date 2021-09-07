#ifndef __FUN_H   
#define __FUN_H
#include<stdio.h>
void prep_board();
void put_board(int,char,int*,int*,char[3][3]);
void display_board(char,int*,int*,char[3][3]);
void win_check(int*,int*,int*,char[3][3]);
#endif
