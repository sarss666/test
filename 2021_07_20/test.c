#include <stdio.h>
#include <windows.h>

#include<time.h>
void game()//��������Ϸ���ܺ���
{
    int num = 0, input = 0;
    num = rand() % 100 + 1;//��ȡ1-100��һ�������
    while (1)//����ifѭ���ж�
    {
        printf("����������\n");
        scanf_s("%d", &input);
        if (input == num)
        {
            printf("��ϲ����µ������ǶԵ�\n");
            break;
        }
        else if (input < num)
        {
            printf("��С��\n");
        }
        else
        {
            printf("�´���\n");
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
    srand((unsigned int)time(NULL));//��ֹ���ֵ������һ��
    do//����ѭ��ʵ�ֿ��Զ����
    {
        menu();
        printf("������ѡ��\n");
        scanf_s("%d", &choice);
        switch (choice)
        {
        case 1:game();
            break;
        case 0:
            break;
        default:
            printf("ѡ�����\n");
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
//	//printf("��������Ҫ��Ľ׳ˣ�  ");
//	//int n = 0;
//	//scanf_s("%d", &n);
//	//int result = Mul(n);
//	//printf("=%d\n",result);
//
//}