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
//	// { �迭�� ����� �ʱ�ȭ
//	int numbers[10] = { 0, };
//
//	for (int i = 0; i < 10; i++)
//	{
//		numbers[i] = i + 1;
//	}
//	// } �迭�� ����� �ʱ�ȭ
//	printf("shuffle �ϱ� �� \n\n");
//	// { �迭�� ���
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//	
//	printf("\n\n");
//	// } �迭�� ���
//	// { ���� ����
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
//	// } ���� ����
//	// { �迭�� ���
//	printf("shuffle �� �� \n\n");
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//
//	printf("\n\n");
//	// } �迭�� ���
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