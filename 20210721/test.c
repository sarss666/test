#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#define _CRT_SECURE_NO_WARNINGS 1
void menu() {
	printf("**************************\n");
	printf("*********   1.play  ******\n");
	printf("*********   0.exit  ******\n");
	printf("**************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		
		
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}
}

int main()
{

	int input = 0;
	srand((unsigned int) time(NULL));
	do {
		menu();
		printf("请选择：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();// 三子棋游戏
			break;
		case 0://退出游戏
			printf("退出游戏\n");
				break;
		default://选择错误
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}


//int main()
//{
//
//	int arr[10] = {1,2,3};
//	//char ch[7];
//	//int n = 10;
//	//int arr1[n]={0};//error
//	return 0;
//}





//int IsPrime(int num)
//{
//	if (num == 0) {
//		return 0;
//}
//	if (num == 1) {
//		return 0;
//	}
//	
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0) {
//			return 0;
//	}
//		
//	}return 1;
//}
//
//int main()
//{
//	printf("%d\n", IsPrime(11));
//	return 0;
//
//}


//void Swap(int x, int y) {
//	int temp = x;
//	x = y;
//	y = temp;
//
//}

//void Swap(int *x, int *y) {
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int temp = a;
//	a = b;
//	b = temp;*/
//	Swap(&a, &b);
//	printf("a=%d, b=%d", a, b);
//	return 0; 
//}


//int Max(int x, int y) {
//	x = 10;
//	y = 20;
//if (x > y) {
//	return x;
//}
//return y;
// }
//int main()
//{
//	int ret = Max(10, 20);
//	printf("%d\n", ret);
//
//}

//int main()
//
//{
//    int a, b, r;
//    scanf_s("%d %d", &a, &b);
//    while (b != 0)//当其中一个数为0，另一个数就是两数的最大公约数
//    {
//        r = a % b;
//        a = b;
//        b = r;
//    }
//    printf("Greatest Common Divisor: %d\n", a);
//    system("pause");
//
//}