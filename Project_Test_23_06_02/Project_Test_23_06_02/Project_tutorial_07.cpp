//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//int tutorial_07();
//
//int main()
//{
//	tutorial_07();
//
//	return 0;
//}
//
//int tutorial_07()
//{
//	char exit = '0';
//	int money = 1000;							//초기 자산
//	int dice1, dice2;							//주사위 값
//	int chance;									//플레이어가 홀짝인지 선택
//
//	printf("준오는 1000원을 들고 도박장에 갔습니다. \n");
//	printf("승리시 100원을 얻고, 패배시 100원을 잃습니다. \n");
//	printf("홀수일 경우 1, 짝수일 경우 2, 도박장을 나오기 원하시면 q 혹은 Q를 입력해 주세요. ");
//
//	while (1)
//	{
//		printf("\n값을 입력해 주세요 : ");
//		scanf_s("%d", &chance);
//		scanf_s("%c", &exit);
//
//		srand(time(NULL));
//
//		dice1 = (rand() % 6) + 1;					// 주사위 값 범위 설정 1 ~ 6
//		dice2 = (rand() % 6) + 1;
//
//		bool sumDice = (dice1 + dice2) % 2;			// 두 주사위 값의 합이 짝수인지 홀수인지 판별
//
//		if ('q' == exit || exit == 'Q')
//		{
//			printf("도박장을 나왔습니다. \n");
//			printf("보유 금액 : %d 입니다. \n", money);
//
//			break;
//		}	// 탈출 조건
//
//		else if (money == 0)
//		{
//			printf("당신은 탕진하였습니다. \n");
//
//			break;
//		}
//
//		else if (sumDice == chance)
//		{
//			if (sumDice == 1)
//			{
//				printf("첫 번째 주사위 : %d 두 번째 수사위 : %d \n두 주사위 값의 합은 홀수입니다. \n", dice1, dice2);
//			}
//
//			else if (sumDice == 0)
//			{
//				printf("첫 번째 주사위 : %d 두 번째 수사위 : %d \n두 주사위 값의 합은 짝수입니다. \n", dice1, dice2);
//			}
//
//			printf("당신은 승리했습니다. +100 \n");
//
//			money += 100;
//		}
//
//		else if (sumDice != chance)
//		{
//			if (sumDice == 1)
//			{
//				printf("첫 번째 주사위 : %d 두 번째 수사위 : %d \n두 주사위 값의 합은 홀수입니다. \n", dice1, dice2);
//			}
//
//			else if (sumDice == 0)
//			{
//				printf("첫 번째 주사위 : %d 두 번째 수사위 : %d \n두 주사위 값의 합은 짝수입니다. \n", dice1, dice2);
//			}
//
//			printf("당신은 패배했습니다. -100 \n");
//
//			money -= 100;
//		}
//
//		printf("보유 자산은 %d \n", money);
//	}
//
//	return 0;
//}