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
//}   // main() ��
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
//            printf("[ƩƮ����] ���� ������ ������� �Ѵٸ� �̷������� \n");
//        }
//
//        printf("[System] ����� �÷��̾� �Դϴ�. \n");
//        printf("������ �׼��� �Է��� �ּ���. : ");
//        scanf_s("%c", &userInput);
//
//        if (userInput == 'q' || userInput == 'Q')
//        {
//            printf("\n[System] ���α׷��� �����ճ���. \n");
//
//            break;
//        }
//
//        else
//        {
//            printf("\n[System] �ش� �Է��� ���ǵǾ� ���� �ʽ��ϴ�. \n");
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