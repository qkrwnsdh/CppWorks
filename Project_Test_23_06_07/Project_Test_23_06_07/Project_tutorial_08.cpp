//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <windows.h>
//#include <conio.h>
//
//
//int tutoraial_08();
//
//int main()
//{
//	tutoraial_08();
//
//	return 0;
//}
//
//int tutoraial_08()
//{
//	char numbers[13][4] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "K", "Q", "J" };
//	char cards[4][8] = { "��", "��", "��", "��" };
//
//	int randomIndex_01, randomIndex_02 = 0;
//
//	while (1)
//	{
//		_getch();
//
//			randomIndex_01 = rand() % 13;
//			randomIndex_02 = rand() % 4;
//
//		if (randomIndex_01 == 9)
//		{
//			system("cls");
//
//			printf("�������������������������� \n");
//			printf("��%s          �� \n", cards[randomIndex_02]);
//			printf("��%s         �� \n", numbers[randomIndex_01]);
//			printf("��           �� \n");
//			printf("��           �� \n");
//			printf("��           �� \n");
//			printf("��           �� \n");
//			printf("��         %s�� \n", numbers[randomIndex_01]);
//			printf("��          %s�� \n", cards[randomIndex_02]);
//			printf("�������������������������� \n");
//		}
//
//		else
//		{
//			system("cls");
//
//			printf("�������������������������� \n");
//			printf("��%s          �� \n", cards[randomIndex_02]);
//			printf("��%s          �� \n", numbers[randomIndex_01]);
//			printf("��           �� \n");
//			printf("��           �� \n");
//			printf("��           �� \n");
//			printf("��           �� \n");
//			printf("��          %s�� \n", numbers[randomIndex_01]);
//			printf("��          %s�� \n", cards[randomIndex_02]);
//			printf("�������������������������� \n");
//		}
//	}
//
//	return 0;
//}