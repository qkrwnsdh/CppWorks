//#include<conio.h>
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int  tutorial_06();
//
//int main() 
//{
//	tutorial_06();
//
//	return 0;
//}
//
//int tutorial_06()
//{
//	char board[5] = { 0 };										// 배열 board 5개의 변수 저장
//	int lineCount_x = 0, lineCount_y = 0;						// 임의의 변수 lineCount_x, lineCount_y 값 0으로 초기화
//
//	while (1)
//	{
//		char keys = _getch();									// 아무키나 입력받을시 while 문 1회 진행
//
//		system("cls");
//
//		if ('d' == keys || keys == 'D')
//		{														// 'd', 'D' 키 입력시 0이 우측으로 진행
//			if (lineCount_y < 5)
//			{													// { 0**** *0*** **0** ***0* ****0 나누기 시작
//				lineCount_y += 1;								// 우측으로 진행하기 위한 += 1
//
//				while (lineCount_x < 5)
//				{												// { 각 0, * 분배 시작
//					lineCount_x += 1;
//
//					board[lineCount_x] = lineCount_y;
//
//					if (board[lineCount_x] == lineCount_x)
//					{											// 배열 board 가 '0'으로 출력
//						board[lineCount_x] = '0';
//
//						printf("%c", board[lineCount_x]);
//					}
//
//					else
//					{											// 배열 board 가 '*'으로 출력
//						board[lineCount_x] = '*';
//
//						printf("%c", board[lineCount_x]);
//					}
//				}												// { 각 0, * 분배 끝
//			}													// } 0**** *0*** **0** ***0* ****0 나누기 끝
//
//			else if (lineCount_y == 5)
//			{													// { ****0 이후 0****로 되기 위한 lineCount_y = 0 초기화 시작
//				lineCount_y = 0;
//
//				lineCount_y += 1;								// 우측으로 진행하기 위한 += 1
//
//				while (lineCount_x < 5)
//				{												// { 각 0, * 분배 시작
//					lineCount_x += 1;
//
//					board[lineCount_x] = lineCount_y;
//
//					if (board[lineCount_x] == lineCount_x)
//					{											// 배열 board 가 '0'으로 출력
//						board[lineCount_x] = '0';
//
//						printf("%c", board[lineCount_x]);
//					}
//
//					else
//					{											// 배열 board 가 '*'으로 출력
//						board[lineCount_x] = '*';
//
//						printf("%c", board[lineCount_x]);
//					}											// { 각 0, * 분배 끝
//				}
//			}													// { ****0 이후 0****로 되기 위한 lineCount_y = 0 초기화 끝
//
//			lineCount_x = 0;									// lineCount_x = 5 를 0으로 초기화
//		}
//
//		else if ('a' == keys || keys == 'A')
//		{														// 'a', 'A' 키 입력시 실행 0이 좌측으로 진행
//			if (1 < lineCount_y && lineCount_y < 6)
//			{													// { 0**** *0*** **0** ***0* ****0 나누기 시작
//				lineCount_y -= 1;								// 좌측으로 진행하기 위한 -= 1
//
//				while (lineCount_x < 5)
//				{												// { 각 0, * 분배 시작
//					lineCount_x += 1;
//
//					board[lineCount_x] = lineCount_y;
//
//					if (board[lineCount_x] == lineCount_x)
//					{											// 배열 board 가 '0'으로 출력
//						board[lineCount_x] = '0';
//
//						printf("%c", board[lineCount_x]);
//					}
//
//					else
//					{
//						board[lineCount_x] = '*';				// 배열 board 가 '*'으로 출력
//
//						printf("%c", board[lineCount_x]);
//					}											
//				}												// } 각 0, * 분배 끝
//			}													// } 0**** *0*** **0** ***0* ****0 나누기 끝
//		
//			else if (lineCount_y < 6)
//			{													// { 0**** 이후 ****0로 되기 위한 lineCount_y = 6 초기화 시작
//				lineCount_y = 6;
//
//				lineCount_y -= 1;
//
//				while (lineCount_x < 5)
//				{												// { 각 0, * 분배 시작
//					lineCount_x += 1;
//
//					board[lineCount_x] = lineCount_y;
//
//					if (board[lineCount_x] == lineCount_x)
//					{											// 배열 board 가 '0'으로 출력
//						board[lineCount_x] = '0';
//
//						printf("%c", board[lineCount_x]);
//					}
//
//					else
//					{											// 배열 board 가 '*'으로 출력		
//						board[lineCount_x] = '*';
//
//						printf("%c", board[lineCount_x]);
//					}											
//				}												// } 각 0, * 분배 끝
//			}													// } 0**** 이후 ****0로 되기 위한 lineCount_y = 6 초기화 끝
//
//			lineCount_x = 0;									// lineCount_x = 5 를 0으로 초기화
//		}
//	}
//
//	return 0;
//}