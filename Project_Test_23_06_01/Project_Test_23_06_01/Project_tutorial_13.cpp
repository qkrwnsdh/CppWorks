//#include<stdio.h>
//
//
//int Triangle(int star);
//
//int main()
//{
//	int star;
//
//	printf("삼각형의 높이를 적으시오 : ");
//	scanf_s("%d", &star);
//
//	Triangle(star);
//
//	return 0;
//}
//
//int Triangle(int star)
//{
//	int star_w = 1;
//	int star_l = 1;
//
//	if (3 <= star && star <= 20)
//	{
//		while (star_l <= star)
//		{
//			int star_z = 0;
//		
//			while (star_w <= star * 2)
//			{
//				if (star_w <= star - star_l)
//				{
//					printf("  ");
//				}
//
//				else if (star_z <= star + star_l - 1)
//				{
//					printf("* ");
//				}
//
//				star_w += 1;
//
//				star_z = star_w;
//			
//			}
//
//			star_w = 1;
//			star_l += 1;
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
