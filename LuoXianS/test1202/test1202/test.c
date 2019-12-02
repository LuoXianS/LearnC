
//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 2 * i + 1; j++)
		{
			putchar('*');
		}
		printf("\n");
	}
	for (i = 7; i>0; i--)
	{
		for (j = 0; j < 2 * i -1; j++)
		{
			putchar('*');
		}
	printf("\n");
	}
	system("pause");
	return 0;
}
