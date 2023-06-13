//#include <iostream>     // #include : 전처리기 지시문
//#include <stdio.h>      // #include 안에 <, > 안에 적어주는 것이 헤더파일(상세정보 : F12키 이용)(이 안에 함수가 존재한다.)
//
//
//void MyNewPrint(int number);
//int PlusTwoNumbers(int number1, int number2);
//int MultiplyThreeNumber(int number3, int number4, int number5);
//
//int main(void)          // void : 빈공간 ex) () = (void)
//{          
//    int number = 10;
//
//    std::cout << "Hello World!\n", number;
//
//    printf("Hello world! \n", number - 2);
//
//    MyNewPrint(100);    // 실제로 함수를 사용하는 중에서 함수를 부른다. (호출(Call))
//
//    printf("두 수의 합은 %d 입니다. \n\n", PlusTwoNumbers(5, 7));       //함수의 값은 하나의 값을 반환한다.
//    printf("세 수의 곱은 %d 입니다. \n\n", MultiplyThreeNumber(2, 4, 8));
//
//    return 0;           // 오류가 날 경우 반환값과 함수 형식이 다르다
//    /* ex) {void} main()  --> int main()
//        {
//        printf("Hello world!")
//        {return 0}; <<- 오류
//        }
//    */
//    // 함수 계산중 return 0; 을 만나면 함수가 끝나버린다.
//
//// 주석(Comment) : 이 라인은 프로그램에 영향을 주지 않는다.
//// 내가 필요한 글자를 마음대로 적으면 된다.
//
//// 한줄주석이라고 한다.
//
///*
//* 이걸 여러줄 주석이라고 한다.
//* 여러줄 주석
//* 이 라인들은 프로그램에 영향을 주지 않는다.
//*/
//
//// 특수문자 중에서 (\)와 조합해서 쓰는 특수문자를 이스케이프 시퀀스라고 한다.
//// 이스케이프 시쿼스 검색
//
//// 컴파일 : C언어로 코드를 작성하면 이를 컴퓨터가 알아들을 수 있는 기계어로 번역하는 과정
//// 컴파일러 : 위 컴파일을 하는 역할을 하는 프로그램
//
//// 멤버 : 어딘가에 속해있는 함수 = 멤버함수, 변수 = 멤버변수
//}
//
//void MyNewPrint(int number)
//{
//    printf("입력 값은 %d 입니다. \n", number);
//}
//
//int PlusTwoNumbers(int number1, int number2)
//{
//    printf("입력 값은 %d, %d 입니다. \n", number1, number2);
//
//    return number1 + number2;
//}
//
//int MultiplyThreeNumber(int number3, int number4, int number5)
//{
//    printf("입력 값은 %d, %d, %d 입니다. \n", number3, number4, number5);
//
//    return number3 * number4 * number5;
//}
//
