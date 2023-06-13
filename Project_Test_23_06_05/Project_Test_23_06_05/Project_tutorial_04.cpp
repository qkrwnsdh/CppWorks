//#include<stdio.h>
//
//
//int count();
//
//int main()
//{
//	count();
//
//	return 0;
//}
//
//int count()
//{															//구구단 출력하는 프로그램 만들기
//	int number_first = 0;
//	int number_second = 0;
//	int lineCount_first[9] = { 0 };
//	int lineCount_second[9] = { 0 };
//
//	while (number_first < 9)
//	{
//		number_first += 1;
//
//		lineCount_first[number_first] = number_first;
//
//		while (number_second < 9)
//		{
//			number_second += 1;
//
//			lineCount_second[number_second] = number_second;
//
//			printf("%d * %d = %d\n", lineCount_first[number_first], lineCount_second[number_second], lineCount_first[number_first] * lineCount_second[number_second]);
//		}
//
//		number_second = 0;
//
//		printf("\n");
//	}
//
//	return 0;
//}