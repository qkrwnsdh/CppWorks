//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//int tutorial_06();
//
//int main()
//{
//	tutorial_06();
//
//	return 0;
//}
//
//int tutorial_06()
//{
//	int dice1, dice2;							//�ֻ��� ��
//
//	srand(time(NULL));
//
//	dice1 = (rand() % 6) + 1;					// �ֻ��� �� ���� ���� 1 ~ 6
//	dice2 = (rand() % 6) + 1;
//
//	printf("ù ��° �ֻ��� �� : %d \n", dice1);
//	printf("�� ��° �ֻ��� �� : %d \n", dice2);
//
//	bool sumDice = (dice1 + dice2) % 2;			// �� �ֻ��� ���� ���� ¦������ Ȧ������ �Ǻ�
//
//	if (sumDice == 1 )
//	{
//		printf("Ȧ�� �Դϴ�. \n");
//	}
//
//	else
//	{
//		printf("¦�� �Դϴ�. \n");
//	}
//
//	return 0;
//}