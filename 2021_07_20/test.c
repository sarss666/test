#include <stdio.h>
#include <windows.h>

#include<time.h>
void game()//猜数字游戏功能函数
{
    int num = 0, input = 0;
    num = rand() % 100 + 1;//获取1-100的一个随机数
    while (1)//利用if循环判断
    {
        printf("请输入数字\n");
        scanf_s("%d", &input);
        if (input == num)
        {
            printf("恭喜，你猜的数字是对的\n");
            break;
        }
        else if (input < num)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("猜大了\n");
        }
    }
}
void menu()
{
    printf("**************************************\n");
    printf("**********1.game        0.exit**********\n");
    printf("**************************************\n");
}
int main()
{
    int choice = 0;
    srand((unsigned int)time(NULL));//防止出现的随机数一样
    do//利用循环实现可以多次玩
    {
        menu();
        printf("请输入选项\n");
        scanf_s("%d", &choice);
        switch (choice)
        {
        case 1:game();
            break;
        case 0:
            break;
        default:
            printf("选择错误\n");
            break;
        }

    } while (choice);
    return 0;
}



//int Mul(int _n)
//{
//
//	int result = 1 ;
//	for (; _n > 0; _n--) {
//		if (_n == 1) {
//			printf("%d", _n);
//		}
//		else {
//			printf("%d*", _n);
//		}
//		result *= _n;
//	}
//	printf("\n");
//	return result;
//}
//
//int main()
//{
//	/*int i = 1;
//	int result = 0;
//	for (; i <= 10; i++) {
//		result += Mul(i);
//	}
//	printf("result: %d\n");*/
//	//printf("请输入你要求的阶乘：  ");
//	//int n = 0;
//	//scanf_s("%d", &n);
//	//int result = Mul(n);
//	//printf("=%d\n",result);
//
//}