//#include<stdio.h>
//
//
//char Character(char code);
//
//int main()
//{
//	char code;
//
//	scanf_s("%c", &code);
//
//	Character(code);
//
//	return 0;
//}
//
//char Character(char code)
//{
//	bool number = '0' <= code && code <= '9';
//	bool bigAlphabet = 'A' <= code && code <= 'Z';
//	bool smallAlphabet = 'a' <= code && code <= 'z';
//
//	printf((number == 1) ? "숫자 입니다." : 
//		(bigAlphabet == 1) ? "대문자 입니다." : 
//		(smallAlphabet == 1) ? "소문자 입니다." : "특수문자 입니다.");
//
//	return 0;
//}
