//#include <stdio.h>
//
//
//int tutorial_01();
//
//int main()
//{
//    tutorial_01();
//}
//
//int tutorial_01()
//{
//    int userInput = -1;
//
//    printf("원하는 크기만큼 배열을 만들겠음. 크기를 입력하시오 : ");
//    scanf_s("%d", &userInput);
//
//    // new 동적할당
//    int numbers[10] = { 0, };               //stack 에다 배열을 할당했다.
//    int* numbers2 = new int[userInput];     //heap  에다 배열을 할당했다.
//
//    for (int i = 0; i < userInput; i++)
//    {
//        numbers2[i] = i + 1;
//    }
//
//    for (int i = 0; i < userInput; i++)
//    {
//        printf("i값 : %d \n", numbers2[i]);
//    }
//
//    printf("\n\n");
//
//    delete[] numbers2;                      //heap  종료
//
//    return 0;
//}