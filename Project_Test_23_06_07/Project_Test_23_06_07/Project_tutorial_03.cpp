//#include<iostream>
//#include <stdio.h>
//
//
//int tutoraial_03_01();
//
//int main()
//{
//	tutoraial_03_01();
//
//	return 0;
//}
//
//int tutoraial_03_01()
//{
//	char str[200] = { 0, };
//	int number = 0;
//	char code = '0';
//
//	printf("문자열을 입력하시오 : ");
//
//	std::cin >> str;
//
//	//while (number < 200) {
//
//	//	if (number % 2)
//	//	{
//	//		'a' <= str[number] && str[number] <= 'z' ? printf("%c", str[number]) :
//	//			('A' <= str[number] && str[number] <= 'Z' ? printf("%c", str[number] + 32) : NULL);
//	//		number += 1;
//	//	}
//
//	//	else
//	//	{
//	//		'a' <= str[number] && str[number] <= 'z' ? printf("%c", str[number] - 32) :
//	//			('A' <= str[number] && str[number] <= 'Z' ? printf("%c", str[number]) : NULL);
//	//		number += 1;
//	//	}
//	//}
//
//	int turn[200] = { 0, };
//
//	while (number < 200)
//	{
//		if (number % 2)
//		{
//			int a[21];
//			int b[21];
//
//			for (int i = 65; i < 91; i++)
//			{
//				a[i] = i;
//
//				for (int j = 91; j > 64; j--)
//				{
//					b[a[i]] = j;
//				}
//			}
//
//			int c[21];
//			int d[21];
//
//			for (int i = 97; i < 123; i++)
//			{
//				a[i] = i;
//
//				for (int j = 122; j > 96; j--)
//				{
//					b[a[i]] = j;
//				}
//			}
//
//			'a' <= str[number] && str[number] <= 'z' ? str[number] :
//				('A' <= str[number] && str[number] <= 'Z' ? str[number] + 32 : NULL);
//			number += 1;
//
//			printf("%c", str[b[number]]);
//		}
//
//		else
//		{
//			'a' <= str[number] && str[number] <= 'z' ? str[number] - 32 :
//				('A' <= str[number] && str[number] <= 'Z' ? str[number] : NULL);
//			number += 1;
//
//			printf("%c", str[d[number]]);
//		}
//	}
//
//	return 0;
//}