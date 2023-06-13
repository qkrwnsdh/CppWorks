//#include <stdio.h>
//
//
//int tutorial_03();
//int Swap1(int* firstInt);
//
//int main()
//{
//	tutorial_03();
//
//	return 0;
//}
//
//int tutorial_03()
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
//	int j = 0;
//
//	while (j < 5)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			if (*(firstInt + i) > *(firstInt + (i + 1)))
//			{
//				temp = *(firstInt + i);
//				*(firstInt + i) = *(firstInt + (i + 1));
//				*(firstInt + (i + 1)) = temp;
//			}
//		}
//
//		j += 1;
//	}
//
//	return 0;
//}