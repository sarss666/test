#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#define SIZE 16

int main()
{ 
	//m n
	//3 1
	//3 2
	//4 3
	//5 3
	
	
	
	/*int day = 0;
printf("请输入你的日期:");
scanf_s("%d", &day);
	
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	default:
		printf("日期错误");
		break;
	}
	return 0;*/
}



//int isOdd(int _data)
//
//{
//	//一个数字是否是奇数可以看最后一个比特位（1->奇数），（0->偶数）
//	//00000000 00000000 00000000 00000100
//	//00000000 00000000 00000000 00000001  &
//	//--------------------------------------
//	//00000000 00000000 00000000 00000000
//	//
//	return _data & 1;
//	/*return _data % 2;*/
//	/*return _data % 2 == 1;*/
//	//return _data % 2 == 1 ? 1 : 0;
//
//	/*int ret = (_data % 2 == 1 ? 1 : 0);
//	return ret;*/
//	/*if (_data % 2 == 1)
//	{
//		return 1;
//	}
//	return 0;*/
//}
//int main()
//{
//	printf("please enter your data:");
//	int data = 0;
//	scanf_s("%d", &data);
//	/*int ret = isOdd(data);*/
//	if (isOdd(data)) {
//		printf("是！\n");
//	}
//	else {
//		printf("不是！\n");
//	}
//}
//struct Stu
//{
//	char name[SIZE];
//	int age;
//	char sex;
//	char telphone[SIZE];
//};
//
//int main()
//{
//	struct Stu tom = { "TOM", 13, 'M', "1234567" };
//	printf("%s, %d, %c, %s\n", tom.name, tom.age, tom.sex, tom.telphone);
//	
//	
//	return 0;
//
//
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入你的数据<x.y>:");
//	scanf("%d  %d", &x, &y);
//	int z = x + y;
//	printf("result : %d\n", z);
//	return 0;
//}
