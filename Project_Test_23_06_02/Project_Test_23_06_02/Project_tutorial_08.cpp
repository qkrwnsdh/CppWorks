//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//
//int tutorial_08();
//
//int main()
//{
//	tutorial_08();
//
//	return 0;
//}
//
//int tutorial_08()
//{
//	int randomNumber1 = 0;
//	const int MAX_DICE_VALUE = 6;
//
//	srand(time(NULL));										//�̰��� rand() �Լ��� Ű ���� �ٲ��ִ� �Լ�
//
//	printf("�ֻ��� ���α׷� \n");
//	printf("��ǻ�Ͱ� ���� 3���� �ֻ��� �� -> ");
//
//	for (int i = 0; i < 3; i++)
//	{
//		Sleep(1000);
//
//		randomNumber1 = (rand() % MAX_DICE_VALUE) + 1;
//
//		printf("%d ", randomNumber1);
//	}
//
//	Sleep(1000);
//
//	printf("\n\n");
//	printf("���α׷� ����. \n");
//
//	return 0;
//}