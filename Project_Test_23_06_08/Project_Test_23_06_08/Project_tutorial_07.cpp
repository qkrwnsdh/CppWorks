//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <windows.h>
//#include <conio.h>
//
//
//int tutorial_06();
//int shuffle(int* firstNumber, int* secondNumber);
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
//	int map[15][15] = { 0, };
//	int mapSame1[15][15] = { 0, };
//	int mapSame2[15][15] = { 0, };
//	int side = 0;
//	int count = 0;
//
//	int initialValueY = 0;
//	int initialValueX = 0;
//
//	while (1)
//	{
//		printf("3 ~ 15 사이의 길이를 적어 주세요 : ");
//		scanf_s("%d", &side);
//
//		system("cls");
//
//		if (2 <= side && side <= 15)
//		{
//			printf("한 변의 길이가 %2d인 문제가 주어집니다.", side);
//
//			Sleep(1000);
//			system("cls");
//
//			for (int y = 0; y < side; y++)
//			{
//				for (int x = 0; x < side; x++)
//				{
//					map[y][x] = (y * side) + (x + 1);
//					mapSame1[y][x] = (y * side) + (x + 1);
//				}
//			}
//
//			map[side - 1][side - 1] = 0;
//			mapSame1[side - 1][side - 1] = 0;
//
//			//섞기 시작
//			const int shuffleCount = 100;
//			int randomIndex1, randomIndex2 = 0;
//			int randomIndex3, randomIndex4 = 0;
//
//			srand(time(NULL));
//
//			for (int i = 0; i < shuffleCount; i++)
//			{
//				randomIndex1 = rand() % side;
//				randomIndex2 = rand() % side;
//				randomIndex3 = rand() % side;
//				randomIndex4 = rand() % side;
//
//				shuffle(&map[randomIndex1][randomIndex2],
//					&map[randomIndex3][randomIndex4]);
//			}
//			//섞기 끝
//
//			for (int y = 0; y < side; y++)
//			{
//				for (int x = 0; x < side; x++)
//				{
//					printf(" %4d ", map[y][x]);
//				}
//
//				printf("\n");
//			}
//
//			printf("\n");
//			// 0위치값 찾기 시작
//			for (int i = 0; i < side; i++)
//			{
//				for (int j = 0; j < side; j++)
//				{
//					if (map[i][j] == 0)
//					{
//						initialValueY = i;
//						initialValueX = j;
//					}
//				}
//			}
//			// 0위치값 찾기 끝
//
//			// 이동 시작
//			while (1)
//			{
//				char keys = _getch();
//
//				system("cls");
//
//				if ('a' == keys || keys == 'A')
//				{
//					if (1 <= initialValueX && initialValueX <= side - 1)
//					{
//						shuffle(&map[initialValueY][initialValueX], &map[initialValueY][initialValueX - 1]);
//						initialValueX -= 1;
//					}
//
//					else if (initialValueX == 0)
//					{
//						shuffle(&map[initialValueY][initialValueX], &map[initialValueY][initialValueX]);
//					}
//				}
//
//				else if ('d' == keys || keys == 'D')
//				{
//					if (0 <= initialValueX && initialValueX <= side - 2)
//					{
//						shuffle(&map[initialValueY][initialValueX], &map[initialValueY][initialValueX + 1]);
//						initialValueX += 1;
//					}
//
//					else if (initialValueX == side - 1)
//					{
//						shuffle(&map[initialValueY][initialValueX], &map[initialValueY][initialValueX]);
//					}
//				}
//
//				else if ('s' == keys || keys == 'S')
//				{
//					if (0 <= initialValueY && initialValueY <= side - 2)
//					{
//						shuffle(&map[initialValueY][initialValueX], &map[initialValueY + 1][initialValueX]);
//						initialValueY += 1;
//					}
//
//					else if (initialValueY == side - 1)
//					{
//						shuffle(&map[initialValueY][initialValueX], &map[initialValueY][initialValueX]);
//					}
//				}
//
//				else if ('w' == keys || keys == 'W')
//				{
//					if (1 <= initialValueY && initialValueY <= side - 1)
//					{
//						shuffle(&map[initialValueY][initialValueX], &map[initialValueY - 1][initialValueX]);
//						initialValueY -= 1;
//					}
//
//					else if (initialValueY == 0)
//					{
//						shuffle(&map[initialValueY][initialValueX], &map[initialValueY][initialValueX]);
//					}
//				}
//
//				for (int y = 0; y < side; y++)
//				{
//					for (int x = 0; x < side; x++)
//					{
//						if (mapSame1[y][x] == map[y][x])
//						{
//							count += 1;
//						}
//					}
//				}
//
//				if (count == side * side)
//				{
//					printf("승리하셨습니다");
//
//					Sleep(1000);
//					system("cls");
//
//					break;
//				}
//
//				for (int i = 0; i < side; i++)
//				{
//					for (int j = 0; j < side; j++)
//					{
//						printf(" %4d ", map[i][j]);
//					}
//
//					printf("\n");
//				}
//
//				printf("\n");
//
//				count = 0;
//			}
//		}
//
//		else 
//		{
//			printf("잘못된 값을 작성하셨습니다.");
//
//			Sleep(1000);
//			system("cls");
//
//			printf("\n");
//		}
//	}
//
//	return 0;
//}
//
//int shuffle(int* firstNumber, int* secondNumber)
//{
//	int temp = 0;
//
//	temp = *firstNumber;
//	*firstNumber = *secondNumber;
//	*secondNumber = temp;
//
//	return 0;
//}