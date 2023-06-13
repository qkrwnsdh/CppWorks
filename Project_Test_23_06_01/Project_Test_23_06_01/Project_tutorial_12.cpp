//#include<stdio.h>
//
//
//int Square(int star);
//
//int main()
//{
//	int star;
//
//	printf("정사각형 변의 길이를 입력하세요 : ");
//	scanf_s("%d", &star);
//
//	Square(star);
//
//	return 0;
//}
//
//int Square(int star)
//{
//	int star_w = 1, star_l = 1;
//
//	if (3 <= star && star <= 10)
//	{
//		while (star_w <= star)
//		{
//			while (star_l <= star)
//			{
//				printf("* ");
//
//				star_l += 1;
//			}
//
//			star_l = 1;
//			star_w += 1;
//
//			printf("\n");
//		}
//	}
//
//	else
//	{
//		printf("범위 오차");
//	}
//
//	return 0;
//}
