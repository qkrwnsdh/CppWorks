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
//	char board[5] = { 0 };										// �迭 board 5���� ���� ����
//	int lineCount_x = 0, lineCount_y = 0;						// ������ ���� lineCount_x, lineCount_y �� 0���� �ʱ�ȭ
//
//	while (1)
//	{
//		char keys = _getch();									// �ƹ�Ű�� �Է¹����� while �� 1ȸ ����
//
//		system("cls");
//
//		if ('d' == keys || keys == 'D')
//		{														// 'd', 'D' Ű �Է½� 0�� �������� ����
//			if (lineCount_y < 5)
//			{													// { 0**** *0*** **0** ***0* ****0 ������ ����
//				lineCount_y += 1;								// �������� �����ϱ� ���� += 1
//
//				while (lineCount_x < 5)
//				{												// { �� 0, * �й� ����
//					lineCount_x += 1;
//
//					board[lineCount_x] = lineCount_y;
//
//					if (board[lineCount_x] == lineCount_x)
//					{											// �迭 board �� '0'���� ���
//						board[lineCount_x] = '0';
//
//						printf("%c", board[lineCount_x]);
//					}
//
//					else
//					{											// �迭 board �� '*'���� ���
//						board[lineCount_x] = '*';
//
//						printf("%c", board[lineCount_x]);
//					}
//				}												// { �� 0, * �й� ��
//			}													// } 0**** *0*** **0** ***0* ****0 ������ ��
//
//			else if (lineCount_y == 5)
//			{													// { ****0 ���� 0****�� �Ǳ� ���� lineCount_y = 0 �ʱ�ȭ ����
//				lineCount_y = 0;
//
//				lineCount_y += 1;								// �������� �����ϱ� ���� += 1
//
//				while (lineCount_x < 5)
//				{												// { �� 0, * �й� ����
//					lineCount_x += 1;
//
//					board[lineCount_x] = lineCount_y;
//
//					if (board[lineCount_x] == lineCount_x)
//					{											// �迭 board �� '0'���� ���
//						board[lineCount_x] = '0';
//
//						printf("%c", board[lineCount_x]);
//					}
//
//					else
//					{											// �迭 board �� '*'���� ���
//						board[lineCount_x] = '*';
//
//						printf("%c", board[lineCount_x]);
//					}											// { �� 0, * �й� ��
//				}
//			}													// { ****0 ���� 0****�� �Ǳ� ���� lineCount_y = 0 �ʱ�ȭ ��
//
//			lineCount_x = 0;									// lineCount_x = 5 �� 0���� �ʱ�ȭ
//		}
//
//		else if ('a' == keys || keys == 'A')
//		{														// 'a', 'A' Ű �Է½� ���� 0�� �������� ����
//			if (1 < lineCount_y && lineCount_y < 6)
//			{													// { 0**** *0*** **0** ***0* ****0 ������ ����
//				lineCount_y -= 1;								// �������� �����ϱ� ���� -= 1
//
//				while (lineCount_x < 5)
//				{												// { �� 0, * �й� ����
//					lineCount_x += 1;
//
//					board[lineCount_x] = lineCount_y;
//
//					if (board[lineCount_x] == lineCount_x)
//					{											// �迭 board �� '0'���� ���
//						board[lineCount_x] = '0';
//
//						printf("%c", board[lineCount_x]);
//					}
//
//					else
//					{
//						board[lineCount_x] = '*';				// �迭 board �� '*'���� ���
//
//						printf("%c", board[lineCount_x]);
//					}											
//				}												// } �� 0, * �й� ��
//			}													// } 0**** *0*** **0** ***0* ****0 ������ ��
//		
//			else if (lineCount_y < 6)
//			{													// { 0**** ���� ****0�� �Ǳ� ���� lineCount_y = 6 �ʱ�ȭ ����
//				lineCount_y = 6;
//
//				lineCount_y -= 1;
//
//				while (lineCount_x < 5)
//				{												// { �� 0, * �й� ����
//					lineCount_x += 1;
//
//					board[lineCount_x] = lineCount_y;
//
//					if (board[lineCount_x] == lineCount_x)
//					{											// �迭 board �� '0'���� ���
//						board[lineCount_x] = '0';
//
//						printf("%c", board[lineCount_x]);
//					}
//
//					else
//					{											// �迭 board �� '*'���� ���		
//						board[lineCount_x] = '*';
//
//						printf("%c", board[lineCount_x]);
//					}											
//				}												// } �� 0, * �й� ��
//			}													// } 0**** ���� ****0�� �Ǳ� ���� lineCount_y = 6 �ʱ�ȭ ��
//
//			lineCount_x = 0;									// lineCount_x = 5 �� 0���� �ʱ�ȭ
//		}
//	}
//
//	return 0;
//}