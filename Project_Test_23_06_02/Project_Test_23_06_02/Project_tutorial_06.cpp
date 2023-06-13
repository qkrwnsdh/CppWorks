//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
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
//	int dice1, dice2;							//주사위 값
//
//	srand(time(NULL));
//
//	dice1 = (rand() % 6) + 1;					// 주사위 값 범위 설정 1 ~ 6
//	dice2 = (rand() % 6) + 1;
//
//	printf("첫 번째 주사위 값 : %d \n", dice1);
//	printf("두 번째 주사위 값 : %d \n", dice2);
//
//	bool sumDice = (dice1 + dice2) % 2;			// 두 주사위 값의 합이 짝수인지 홀수인지 판별
//
//	if (sumDice == 1 )
//	{
//		printf("홀수 입니다. \n");
//	}
//
//	else
//	{
//		printf("짝수 입니다. \n");
//	}
//
//	return 0;
//}