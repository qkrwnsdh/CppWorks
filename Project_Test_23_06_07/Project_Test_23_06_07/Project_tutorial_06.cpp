//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//
//int tutoraial_06();
//int shuffleOnce(int* firstNumber, int* secondNumber);
//
//int main()
//{
//	tutoraial_06();
//
//	return 0;
//}
//
//int tutoraial_06()
//{							
//	// { 배열의 선언과 초기화
//	int numbers[10] = { 0, };
//
//	for (int i = 0; i < 10; i++)
//	{
//		numbers[i] = i + 1;
//	}
//	// } 배열의 선언과 초기화
//	printf("shuffle 하기 전 \n\n");
//	// { 배열의 출력
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//	
//	printf("\n\n");
//	// } 배열의 출력
//	// { 셔플 로직
//	const int shuffleCount = 1000;
//	int randomIdx1, randomIdx2 = 0;
//
//	srand(time(NULL));
//
//	for (int i = 0; i < shuffleCount; i++)
//	{
//		randomIdx1 = rand() % 10 + 1;
//		randomIdx2 = rand() % 10 + 1;
//
//		shuffleOnce(&numbers[randomIdx1], &numbers[randomIdx2]);
//	}
//
//	printf("\n");
//	// } 셔플 로직
//	// { 배열의 출력
//	printf("shuffle 한 후 \n\n");
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//
//	printf("\n\n");
//	// } 배열의 출력
//	return 0;
//}
//
//int shuffleOnce(int* firstNumber, int* secondNumber)
//{
//	int temp = 0;
//
//	temp = *firstNumber;
//	*firstNumber = *secondNumber;
//	*secondNumber = temp;
//
//	return 0;
//}