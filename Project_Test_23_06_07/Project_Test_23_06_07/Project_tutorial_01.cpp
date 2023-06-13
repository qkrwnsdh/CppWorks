//#include <stdio.h>
//
//
//int tutoraial_01();
//
//int main()
//{
//	tutoraial_01();
//
//	return 0;
//}
//
//int tutoraial_01()
//{
//	char string_[15] = "Good morning!\n";
//	char stringCopy[16] = { 0, };
//
//	char string_2[] = "Good morning! \n";
//	int numbers[10] = { 0, };
//	
//	printf("문자열 배열의 크기 %d \n", sizeof(string_));
//	printf("문자열 2번째 배열의 크기 %d \n", sizeof(string_2));
//	printf("정수형 배열의 크기 %d \n", sizeof(numbers));
//	printf("정수형 배열의 길이 %d \n", sizeof(numbers) / sizeof(int));
//
//	string_[0] = 'G';
//	string_[1] = 'g';
//	string_[2] = 'g';
//
//	printf("문자열 배열이 정말로 수정되는지? : %s \n\n", string_);
//
//	bool isNullSameZero = false;
//
//	if (0 == '\0')
//	{
//		isNullSameZero = true;
//	}
//
//	else
//	{
//		isNullSameZero = false;
//	}
//
//	printf("Null은 0과 같은 값인가? : [%d] \n\n", isNullSameZero);
//
//	char string3[4];
//
//	string3[0] = 'H';
//	string3[1] = 'i';
//	string3[2] = '!';
//	string3[3] = '\0';
//
//	char string4[4] = "Hi!";
//	
//	printf("string3번 찍어보겠음 : %s \n", string3);
//
//	return 0;
//}