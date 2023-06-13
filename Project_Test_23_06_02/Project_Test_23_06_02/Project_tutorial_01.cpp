//#include <stdio.h>
//
//
//int tutorial_01();
//
//int main()
//{
//    tutorial_01();
//
//    return 0;
//}   // main() 끝
//
//int tutorial_01()
//{
//    char userInput = '0';
//    int loopCount = 1;
//
//    while (1)
//    {
//        if (loopCount == 1)
//        {
//            printf("[튜트리얼] 만약 게임을 만들려고 한다면 이런식으로 \n");
//        }
//
//        printf("[System] 당신은 플레이어 입니다. \n");
//        printf("수행할 액션을 입력해 주세요. : ");
//        scanf_s("%c", &userInput);
//
//        if (userInput == 'q' || userInput == 'Q')
//        {
//            printf("\n[System] 프로그램을 종료합나다. \n");
//
//            break;
//        }
//
//        else
//        {
//            printf("\n[System] 해당 입력은 정의되어 있지 않습니다. \n");
//
//            loopCount += 1;
//
//            continue;
//        }
//
//        loopCount += 1;                             // loopCount + 1
//    }
//
// return 0;
//}