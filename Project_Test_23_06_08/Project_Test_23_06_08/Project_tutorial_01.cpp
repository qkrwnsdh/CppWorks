//#include <stdio.h>
//
//
//int tutorial_01();
//int ArrayFunc(int* ptrArray, int arraySize);
//int ArrayFunc2(int array_[], int arraySize);
//
//int main()
//{
//	tutorial_01();
//
//	return 0;
//}
//
//int tutorial_01()
//{
//	int numbers[10] = { 0, };
//
//	for (int i = 0; i < 10; i++)
//	{
//		numbers[i] = (i + 1) * 10;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//
//	printf("\n");
//
//	int* ptrNumber = &numbers[2];
//
//	//역참조 (배열의 5번째 값에 접근하려고 할 때)
//	numbers[4];				//배열을 사용한 역참조
//	*(ptrNumber + 4);	//포인터를 사용한 역참조
//
//	printf("3번째 자리에 있는 값 + 1 : %d \n", *(ptrNumber + 1));
//	printf("numbers 가 들고 있는 값 : %p \n", numbers);
//	printf("numbers[0] 의 주소 값 : %p \n", &numbers[0]);
//
//	printf("\n\n");
//	// 다음 주소의 값 호출(int값 4byte)
//
//	printf("numbers 의 Size : %d \n", sizeof(numbers));
//
//	ArrayFunc(numbers, 10);
//	/*ArrayFunc(numbers, 10);*/
//
//		return 0;
//}
//
//int ArrayFunc2(int myArray[], int arraySize)
//{
//	printf("int 형 포인터의 자체적인 크기가 몇이지? : %d \n", sizeof(myArray));
//
//	for (int i = 0; i < arraySize; i++)
//	{
//		printf("array[%d]의 값 : %d \n", i, myArray[i]);
//	}
//
//	return 0;
//}
//
//int ArrayFunc(int* ptrArray, int arraySize)
//{
//	for (int i = 0; i < arraySize; i++)
//	{
//		printf("ptrArray 역참조 값 : %d \n", *(ptrArray + i));
//	}
//
//	printf("ptrArray + 1 주소의 역참조 값 : %d \n", *(ptrArray + 150));
//
//	return 0;
//}
