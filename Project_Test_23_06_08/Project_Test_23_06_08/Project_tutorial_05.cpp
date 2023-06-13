//#include <stdio.h>
//#include <conio.h>
//#include <windows.h>
//
//
//int tutorial_05();
//
//int main()
//{
//	tutorial_05();
//
//	return 0;
//}
//
//int tutorial_05()
//{
//	char char_[5][5] = { 0, };
//	int charCenterY = 2;
//	int charCenterX = 2;
//
//	for (int y = 0; y < 5; y++)
//	{
//		for (int x = 0; x < 5; x++)
//		{
//			if (2 == y && x == 2)
//			{
//				char_[y][x] = '0';
//				continue;
//			}
//
//			char_[y][x] = '*';
//		}
//	}
//
//	for (int y = 0; y < 5; y++)
//	{
//		for (int x = 0; x < 5; x++)
//		{
//			printf("%c ", char_[y][x]);
//		}
//
//		printf("\n");
//	}
//
//	printf("\n");
//
//	while (1)
//	{
//		char keys = _getch();
//
//		system("cls");
//
//		for (int y = 0; y < 5; y++)
//		{
//			for (int x = 0; x < 5; x++)
//			{
//				char_[y][x] = '*';
//			}
//		}
//
//		if ('a' == keys || keys == 'A')
//		{
//			if (1 <= charCenterX && charCenterX <= 4)
//			{
//				charCenterX -= 1;
//
//				char_[charCenterY][charCenterX] = '0';
//			}
//
//			else if (charCenterX == 0)
//			{
//				charCenterX = 5;
//
//				charCenterX -= 1;
//				
//				char_[charCenterY][charCenterX] = '0';
//			}
//		}
//
//		if ('d' == keys || keys == 'D')
//		{
//			if (0 <= charCenterX && charCenterX <= 3)
//			{
//				charCenterX += 1;
//
//				char_[charCenterY][charCenterX] = '0';
//			}
//
//			else if (charCenterX == 4)
//			{
//				charCenterX = -1;
//
//				charCenterX += 1;
//
//				char_[charCenterY][charCenterX] = '0';
//			}
//		}
//
//		if ('s' == keys || keys == 'S')
//		{
//			if (0 <= charCenterY && charCenterY <= 3)
//			{
//				charCenterY += 1;
//
//				char_[charCenterY][charCenterX] = '0';
//			}
//
//			else if (charCenterY == 4)
//			{
//				charCenterY = -1;
//
//				charCenterY += 1;
//
//				char_[charCenterY][charCenterX] = '0';
//			}
//		}
//
//		if ('w' == keys || keys == 'W')
//		{
//			if (1 <= charCenterY && charCenterY <= 4)
//			{
//				charCenterY -= 1;
//
//				char_[charCenterY][charCenterX] = '0';
//			}
//
//			else if (charCenterY == 0)
//			{
//				charCenterY = 5;
//
//				charCenterY -= 1;
//
//				char_[charCenterY][charCenterX] = '0';
//			}
//		}
//	
//		for (int y = 0; y < 5; y++)
//		{
//			for (int x = 0; x < 5; x++)
//			{
//				printf("%c ", char_[y][x]);
//			}
//
//			printf("\n");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}