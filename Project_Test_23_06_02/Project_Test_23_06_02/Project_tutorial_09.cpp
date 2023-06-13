//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//
//int tutorial_09();
//
//int main()
//{
//	tutorial_09();
//
//	return 0;
//}
//
//int tutorial_09()
//{
//	int damage;									// 입력 데미지
//	float critical;								// 크리티컬 데미지
//	int percentage = 0;							// 확률
//	char exit = '0';
//
//	while (1)
//	{
//		printf("\n데미지를 입력해 주세요 : ");
//
//		scanf_s("%d", &damage);
//		scanf_s("%c", &exit);
//
//		printf("\n");
//		printf("입력받은 데미지 : %d \n", damage);
//
//		critical = damage * 1.5;
//
//		srand(time(NULL));
//
//		percentage = (rand() % 100) + 1;
//
//		if ('q' == exit || exit == 'Q')
//		{
//			printf("프로그램을 종료합니다. \n");
//
//			break;
//		}	//탈출
//
//		else if (1 <= percentage && percentage <= 40)
//		{
//			printf("랜덤 수 : %d \n", percentage);
//			printf("일반 데미지 : %d \n", damage);
//		}
//
//		else if (41 <= percentage && percentage <= 100)
//		{
//			printf("랜덤 수 :  %d \n", percentage);
//			printf("크리티컬 데미지 : %.1f \n", critical);
//		}
//
//		damage, critical = 0;
//	}
//
//	return 0;
//}
