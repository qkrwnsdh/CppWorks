//#include <stdio.h>
//
//
//int tutorial_04();
//int Swap1(int* firstInt);
//
//int main()
//{
//	tutorial_04();
//
//	return 0;
//}
//
//int tutorial_04()
//{
//	int numbers[5] = { 0, };
//
//	printf("5가지의 숫자를 입려하시오 : ");
//
//	scanf_s("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
//
//	Swap1(numbers);
//
//	printf("\n");
//	printf("5가지의 숫자 정령 : ");
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//
//	return 0;
//}
//
//int Swap1(int* firstInt)
//{
//	int temp = 0;
//	int i = 0;
//
//	for (int j = 1; j < 5 ; j++)
//	{
//		for (i = 0; i < j; i++)
//		{
//			if (*(firstInt + (j - i - 1)) > *(firstInt + (j - i)))
//			{
//				temp = *(firstInt + (j - i));
//				*(firstInt + (j - i)) = *(firstInt + (j - i - 1));
//				*(firstInt + (j - i - 1)) = temp;
//			}
//		}
//	}
//
//	return 0;
//}