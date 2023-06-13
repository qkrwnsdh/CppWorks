//#include <stdio.h>
//
//
//int tutorial_02();
//int swap1(int* firstint);
//
//int main()
//{
//	tutorial_02();
//
//	return 0;
//}
//
//int tutorial_02()
//{
//	int numbers[5] = { 0, };
//	
//	printf("5가지의 숫자를 입려하시오 : ");
//	
//	scanf_s("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
//
//	swap1(numbers);
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
//int swap1(int* firstint)
//{
//	int temp = 0;
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = i; j < 5; j++)
//		{
//			if (*(firstint + i) > *(firstint + j))
//			{
//				temp = *(firstint + i);
//				*(firstint + i) = *(firstint + j);
//				*(firstint + j) = temp;
//			}
//		}
//	}
//
//	return 0;
//}