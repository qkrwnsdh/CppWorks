//#include<stdio.h>
//#include<conio.h>
//
//
//int tutorial_03();
//
//int main()
//{
//	tutorial_03();
//
//	return 0;
//}	// main() 끝
//
//int tutorial_03()
//{													// switch / case 문
//	char userInput = '0';
//
//	printf("User input : ");
//	userInput = _getch();
//
//	printf("\n\n");
//	
//	//scanf_s("%d", &userInput);
//
//	switch (userInput)
//	{
//	case 'a':
//		printf("이것은 가위 \n");						// 입력값이 1이면 case 1 실행
//		break;
//	case 'b':
//		printf("이것은 바위 \n");
//		break;
//	case 'c':
//		printf("이것은 보 \n");
//		break;
//	default:
//		printf("처리되지 않은 예외 입력입니다. \n");
//		break;
//	}	// switch / case 문 종료
//
//	printf("Pless any key ....... \n");
//	_getch();
//
//	return 0;
//}