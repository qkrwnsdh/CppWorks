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
//	srand(time(NULL));										//이것이 rand() 함수의 키 값을 바꿔주는 함수
//
//	printf("주사위 프로그램 \n");
//	printf("컴퓨터가 뽑은 3개의 주사위 값 -> ");
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
//	printf("프로그램 종료. \n");
//
//	return 0;
//}