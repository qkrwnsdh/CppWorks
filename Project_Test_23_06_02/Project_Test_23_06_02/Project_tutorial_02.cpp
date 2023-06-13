//#include <stdio.h>
//
//
//int tutorial_02();
//
//int main()
//{
//	tutorial_02();								//함수 tutorial_02()를 호출
//
//	return 0;
//}   // main() 끝
//
//int tutorial_02()
//{
//	int dis;									//입력값
//	int loopcount = 1;							//루프 카운트
//	bool cal;									//변수 cal 은 참이나 거짓으로만 판별
//
//	while (1)
//	{
//		printf("숫자를 입력해 주세요: ");
//		scanf_s("%d", &dis);
//
//		cal = dis % 2;							//계산값이 0이면 짝수, 1이면 홀수 판별 식
//
//		if (dis == 0)
//		{										//입력값이 0이면 if 스코프 내용을 실행
//			printf("프로그램을 종료합니다. \n");
//
//			break;								//프로그램 종료
//		}	// 탈출 조건
//
//		else if (cal == 1)
//		{										//계산값이 1이면 else if 스코프 내용을 실행
//			printf("홀수입니다. \n");
//		}
//
//		else if (cal == 0)
//		{										//계산값이 0이면 else if 스코프 내용을 실행
//			printf("짝수입니다. \n");
//		}
//	}
//
//	return 0;
//}