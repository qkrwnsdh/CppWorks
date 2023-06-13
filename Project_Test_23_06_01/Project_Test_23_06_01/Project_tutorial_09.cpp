//#include<stdio.h>
//
//
//int main()
//{
//	char code = 'A';
//	bool number = '0' <= code && code <= '9';
//	bool bigAlphabet = 'A' <= code && code <= 'Z';
//	bool smallAlphabet = 'a' <= code && code <= 'z';
//
//	if (number)
//	{							// if문은 조건식이 참이면 스코프 안의 내용을 진행하고, 거짓이면 건너뛴다.
//		printf("숫자입니다.");
//	}
//
//	else if (bigAlphabet)
//	{
//		printf("대문자입니다.");
//	}
//
//	else if (smallAlphabet)
//	{
//		printf("소문자입니다.");
//	}
//
//	else
//	{							// 위의 조건식에서 참이 아닌, 다른 모든 스코프를 진행한다.
//		printf("무엇인지모르겠습니다.");
//	}
//
//	return 0;
//}