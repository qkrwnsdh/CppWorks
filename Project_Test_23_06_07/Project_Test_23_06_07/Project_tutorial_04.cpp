//#include<iostream>
//#include <stdio.h>
//
//
//int tutoraial_04();
//int Swap1(char firstChar, char secondChar);
//int Swap2(char* firstChar, char* secondChar);
//
//int main()
//{
//	tutoraial_04();
//
//	return 0;
//}
//
//int tutoraial_04()
//{
//	char str[10] = "Hello";
//	char temp = '\0';
//
//	//temp = str[0];
//	//str[0] = str[4];
//	//str[4] = temp;
//
//	Swap2(&str[0], &str[4]);
//
//	printf("%s \n", str);
//
//	return 0;
//}
//
//int Swap1(char firstChar, char secondChar)
//{
//	printf("[�����ϱ� ��] firstChar �� : %c, secondChar �� : %c \n", firstChar, secondChar);
//
//	char temp = '\0';
//
//	temp = firstChar;
//	firstChar = secondChar;
//	secondChar = temp;
//
//	printf("[���� ����] firstChar �� : %c, secondChar �� : %c \n", firstChar, secondChar);
//
//	return 0;
//}
//
//int Swap2(char* firstChar, char* secondChar)
//{
//	printf("[�����ϱ� ��] firstChar �� : %c, secondChar �� : %c \n", *firstChar, *secondChar);
//
//	char temp = '\0';
//
//	temp = (*firstChar);
//	(*firstChar) = (*secondChar);
//	(*secondChar) = temp;
//
//	printf("[���� ����] firstChar �� : %c, secondChar �� : %c \n", *firstChar, *secondChar);
//
//	return 0;
//}