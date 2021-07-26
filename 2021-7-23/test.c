#include <stdio.h>
#include <windows.h>
#include "test.h"

//2.打印数字
void ShowInt(int x)
{
	if (x > 9) {
		ShowInt(x / 10);
			
	}
	printf(" %d ", x%10);
	
}
/*if (x < 10) {
		printf(" %d ", x);
		return;
  }
	ShowInt(x / 10);
	printf(" %d ", x%10);*/

//void ShowInt(int x)
//{
//	int arr[64] = { 0 };
//	int i = 0;
//	while (x > 0)
//	{
//		arr[i] = x % 10;
//		x /= 10;
//		i++;
//	}
//	while (i > 0) {
//		i--;
//		printf("%d", arr[i]);
//	}
//
//}














//1.求字符串长度
//int Strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + Strlen(str + 1);
//}
//int main()
//{
//	char* p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}
//1............................

