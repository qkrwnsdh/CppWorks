//#include <stdio.h>
//
//
//int tutorial_02();
//
//int main()
//{
//	tutorial_02();								//�Լ� tutorial_02()�� ȣ��
//
//	return 0;
//}   // main() ��
//
//int tutorial_02()
//{
//	int dis;									//�Է°�
//	int loopcount = 1;							//���� ī��Ʈ
//	bool cal;									//���� cal �� ���̳� �������θ� �Ǻ�
//
//	while (1)
//	{
//		printf("���ڸ� �Է��� �ּ���: ");
//		scanf_s("%d", &dis);
//
//		cal = dis % 2;							//��갪�� 0�̸� ¦��, 1�̸� Ȧ�� �Ǻ� ��
//
//		if (dis == 0)
//		{										//�Է°��� 0�̸� if ������ ������ ����
//			printf("���α׷��� �����մϴ�. \n");
//
//			break;								//���α׷� ����
//		}	// Ż�� ����
//
//		else if (cal == 1)
//		{										//��갪�� 1�̸� else if ������ ������ ����
//			printf("Ȧ���Դϴ�. \n");
//		}
//
//		else if (cal == 0)
//		{										//��갪�� 0�̸� else if ������ ������ ����
//			printf("¦���Դϴ�. \n");
//		}
//	}
//
//	return 0;
//}