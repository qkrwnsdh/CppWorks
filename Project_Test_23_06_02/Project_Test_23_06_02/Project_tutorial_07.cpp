//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//int tutorial_07();
//
//int main()
//{
//	tutorial_07();
//
//	return 0;
//}
//
//int tutorial_07()
//{
//	char exit = '0';
//	int money = 1000;							//�ʱ� �ڻ�
//	int dice1, dice2;							//�ֻ��� ��
//	int chance;									//�÷��̾ Ȧ¦���� ����
//
//	printf("�ؿ��� 1000���� ��� �����忡 �����ϴ�. \n");
//	printf("�¸��� 100���� ���, �й�� 100���� �ҽ��ϴ�. \n");
//	printf("Ȧ���� ��� 1, ¦���� ��� 2, �������� ������ ���Ͻø� q Ȥ�� Q�� �Է��� �ּ���. ");
//
//	while (1)
//	{
//		printf("\n���� �Է��� �ּ��� : ");
//		scanf_s("%d", &chance);
//		scanf_s("%c", &exit);
//
//		srand(time(NULL));
//
//		dice1 = (rand() % 6) + 1;					// �ֻ��� �� ���� ���� 1 ~ 6
//		dice2 = (rand() % 6) + 1;
//
//		bool sumDice = (dice1 + dice2) % 2;			// �� �ֻ��� ���� ���� ¦������ Ȧ������ �Ǻ�
//
//		if ('q' == exit || exit == 'Q')
//		{
//			printf("�������� ���Խ��ϴ�. \n");
//			printf("���� �ݾ� : %d �Դϴ�. \n", money);
//
//			break;
//		}	// Ż�� ����
//
//		else if (money == 0)
//		{
//			printf("����� �����Ͽ����ϴ�. \n");
//
//			break;
//		}
//
//		else if (sumDice == chance)
//		{
//			if (sumDice == 1)
//			{
//				printf("ù ��° �ֻ��� : %d �� ��° ������ : %d \n�� �ֻ��� ���� ���� Ȧ���Դϴ�. \n", dice1, dice2);
//			}
//
//			else if (sumDice == 0)
//			{
//				printf("ù ��° �ֻ��� : %d �� ��° ������ : %d \n�� �ֻ��� ���� ���� ¦���Դϴ�. \n", dice1, dice2);
//			}
//
//			printf("����� �¸��߽��ϴ�. +100 \n");
//
//			money += 100;
//		}
//
//		else if (sumDice != chance)
//		{
//			if (sumDice == 1)
//			{
//				printf("ù ��° �ֻ��� : %d �� ��° ������ : %d \n�� �ֻ��� ���� ���� Ȧ���Դϴ�. \n", dice1, dice2);
//			}
//
//			else if (sumDice == 0)
//			{
//				printf("ù ��° �ֻ��� : %d �� ��° ������ : %d \n�� �ֻ��� ���� ���� ¦���Դϴ�. \n", dice1, dice2);
//			}
//
//			printf("����� �й��߽��ϴ�. -100 \n");
//
//			money -= 100;
//		}
//
//		printf("���� �ڻ��� %d \n", money);
//	}
//
//	return 0;
//}