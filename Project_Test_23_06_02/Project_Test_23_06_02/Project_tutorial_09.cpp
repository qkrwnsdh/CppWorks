//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//
//int tutorial_09();
//
//int main()
//{
//	tutorial_09();
//
//	return 0;
//}
//
//int tutorial_09()
//{
//	int damage;									// �Է� ������
//	float critical;								// ũ��Ƽ�� ������
//	int percentage = 0;							// Ȯ��
//	char exit = '0';
//
//	while (1)
//	{
//		printf("\n�������� �Է��� �ּ��� : ");
//
//		scanf_s("%d", &damage);
//		scanf_s("%c", &exit);
//
//		printf("\n");
//		printf("�Է¹��� ������ : %d \n", damage);
//
//		critical = damage * 1.5;
//
//		srand(time(NULL));
//
//		percentage = (rand() % 100) + 1;
//
//		if ('q' == exit || exit == 'Q')
//		{
//			printf("���α׷��� �����մϴ�. \n");
//
//			break;
//		}	//Ż��
//
//		else if (1 <= percentage && percentage <= 40)
//		{
//			printf("���� �� : %d \n", percentage);
//			printf("�Ϲ� ������ : %d \n", damage);
//		}
//
//		else if (41 <= percentage && percentage <= 100)
//		{
//			printf("���� �� :  %d \n", percentage);
//			printf("ũ��Ƽ�� ������ : %.1f \n", critical);
//		}
//
//		damage, critical = 0;
//	}
//
//	return 0;
//}
