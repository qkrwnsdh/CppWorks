//#include<stdio.h>
//
//
//int tutorial_04();
//
//int main()
//{
//	tutorial_04();
//
//	return 0;
//}	//main () 끝
//
//int tutorial_04()
//{
//	printf("For 문은 반복문이다. 이렇게 돌아간다. \n");
//
//	for (int loopCount = 1; loopCount <= 5; loopCount += 1)
//	{	
//																/*
//																	for ("loopCount값을 1로 초기화한다.";
//																	"loopCount가 5이하인지 판별한다. 참이면 for내의 스코프내용을 실행한다";
//																	loopCount값에 1을 더한다.)
//																*/
//		printf("어떻게 돌아가고 있는 것이지??? \n");					// loopCount 변수는 해당 for문 안에서만 이용 가능
//	}	//루프 탈출
//
//	int loopCount = 1;
//
//	for (/* 비어도 가능 */; loopCount <= 5; loopCount += 1)
//	{
//		printf("어떻게 돌아가고 있는 것이지??? \n");
//	}	//루프 탈출
//	return 0;
//}