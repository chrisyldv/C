#include <stdio.h>
void printarr(int pArr[][4]);
void circuit1(int pArr[][4]);
void circuit2(int pArr[][4]);
void circuit3(int pArr[][4]);

int main(void)
{
	int i;
	int arr[][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	printf("처음 출력 되는 배열\n");
	printarr(arr);
	printf("\n");

	printf("출력 되는 배열\n");
	circuit1(arr);
	printf("\n");
	printf("출력 되는 배열\n");
	circuit2(arr);
	printf("\n");
	printf("출력 되는 배열\n");
	circuit3(arr);
	printf("\n");
	printf("출력 되는 배열\n");
	printarr(arr);
	printf("\n");
}

void circuit1(int pArr[][4])
{
	int arr[4][4];
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 3; j >= 0; j--)
			arr[j][3 - i] = pArr[i][j];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
}

void circuit2(int pArr[][4])
{
	int arr[4][4];
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 3; j >= 0; j--)
			arr[3 - i][3 - j] = pArr[i][j];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
}

void circuit3(int pArr[][4])
{
	int arr[4][4];
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 3; j >= 0; j--)
			arr[3 - j][i] = pArr[i][j];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
}

void printarr(int pArr[][4])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", pArr[i][j]);
		printf("\n");
	}
}