//#include<conio.h>
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int tutorial_06();
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
//	char board[5] = { 0 };
//	int lineCount_x = 0, lineCount_y = 0;
//
//	while (lineCount_y < 5)
//	{
//		lineCount_y += 1;
//
//		while (lineCount_x < 5)
//		{
//			lineCount_x += 1;
//
//			board[lineCount_x] = lineCount_y;
//
//			if (board[lineCount_x] == lineCount_x)
//			{
//				board[lineCount_x] = '0';
//
//				printf("%c", board[lineCount_x]);
//			}
//			
//			else
//			{
//				board[lineCount_x] = '*';
//
//				printf("%c", board[lineCount_x]);
//			}
//		}
//
//		lineCount_x = 0;
//
//		char keys = _getch();
//
//		system("cls");
//	}
//
//	return 0;
//}
