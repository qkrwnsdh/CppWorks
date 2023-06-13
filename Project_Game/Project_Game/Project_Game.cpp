#include<conio.h>                       // _getch();		함수 사용 가능
#include<stdio.h>
#include<stdlib.h>                      // random();		함수 사용 가능
#include<time.h>                        // time();			함수 사용 가능
#include<windows.h>                     // Sleep(딜레이);		함수 사용 가능


int start_backgroud();
int game_prologue();
int game_triple_road();
int game_road();
int game_treasure_box();
int game_village();
int game_monster_01();
int game_monster_02();
int game_monster_03();
int game_hidden_moster();
int game_heal();
int end_win();
int end_death();
int ending_01();
int ending_02();

int Hp = 50;							// 초기 플레이어 체력
int Hp_max = 50;						// 플레이어 최대 체력
int Power = 10;							// 초기 플레이어 공격력
int stage = 0;							// 스테이지

int main() {

	start_backgroud();					// background 호출

	return 0;
}

// main()

int start_backgroud() {     // 게임 시작 화면

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　길잃은　슬라임　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　게임　시작　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　게임　종료　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("'s', 'S' 게임 시작\n");
	printf("'e', 'E' 게임 종료\n");
	printf("'m', 'M' 3개의 길 중 하나로 가기\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");


	while (1) {

		char keys = _getch();													// keys = 입력할 키

		if ('s' == keys || keys == 'S') {										// 's', 's' 키 입력시 prologue 호출

			system("cls");

			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　길잃은　슬라임　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　ㄴ　게임　시작　ㄱ　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　게임　종료　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("\n");
			printf("\n");
			printf("게임 시작키를 입력하셨습니다.\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

			Sleep(1000);
			system("cls");

			game_prologue();

		}   //시작 조건

		else if ('e' == keys || keys == 'E') {									// 'e', 'E' 키 입력시 게임 종료

			system("cls");

			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　길잃은　슬라임　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　게임　시작　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　ㄴ　게임　종료　ㄱ　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("\n");
			printf("\n");
			printf("게임 종료키를 입력하셨습니다.\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

			Sleep(1000);
			system("cls");

			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　길잃은　슬라임　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　게임을　종료하였습니다　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("\n");
			printf("\n");
			printf("게임을 종료합니다.\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

			Sleep(1000);
			system("cls");

			break;

		}   // 탈출 조건

		else {																	// 's', 'S', 'e', 'E' 키 외의 키를 입력시 background 호출

			system("cls");

			start_backgroud();

			break;
		}
	}

	return 0;
}

// 처음 메인창 (게임시작, 게임종료)

int game_prologue() {															// 프롤로그 보여준 후 triple_road 호출

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　　　　　　　　　　Stage %d\n", stage);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　겨울동안　동면상태였던　슬라임은　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　날씨가　풀리자　미궁에서　눈을　떻습니다　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	game_triple_road();

	return 0;
}

// 게임 시작 프롤로그

int game_triple_road() {														// triple_road 이후 road, treasure_box, village 중 하나 호출

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　　　　　　　　　　Stage %d\n", stage);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
	printf("　　　　　　　　　　　　　　　ㅣ\n");
	printf("'m', 'M' 키를 입력하세요.\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	if (stage < 6) {															// 스테이지 6 미만일 경우 triple_road 반복

		stage += 1;

		while (1) {

			int move = _getch();

			system("cls");

			if ('m' == move || move == 'M') {									// 'm', 'M' 키 입력시 진행

				srand(time(NULL));

				int percentage = (rand() % 100) + 1;

				if (1 <= percentage && percentage <= 30) {						// 30% road 호출

					int traveling = 0;

					while (traveling <= 6) {

						bool mod = traveling % 2;

						if (mod == 0) {

							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　　　　　　　　　　Stage %d\n", stage);
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
							printf("　　　　　　　　　　　　　　　ㅣ\n");
							printf("룰루랄라 여행을 떠나는 중..  (왼쪽으로 길로 진행)\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

							Sleep(500);
							system("cls");

						}

						else if (mod == 1) {

							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　　　　　　　　　　Stage %d\n", stage);
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　ㅣㅣㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
							printf("　　　　　　　　　　　　　　　ㅣ\n");
							printf("룰루랄라 여행을 떠나는 중....(왼쪽으로 길로 진행)\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

							Sleep(500);
							system("cls");

						}

						traveling += 1;

					}

					game_road();

					break;
				}
				else if (31 <= percentage && percentage <= 50) {				// 20% treasure_box 호출

					int traveling = 0;

					while (traveling <= 6) {

						bool mod = traveling % 2;

						if (mod == 0) {

							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　　　　　　　　　　Stage %d\n", stage);
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
							printf("　　　　　　　　　　　　　　　ㅣ\n");
							printf("룰루랄라 여행을 떠나는 중..  (오른쪽으로 길로 진행)\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

							Sleep(500);
							system("cls");

						}

						else if (mod == 1) {

							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　　　　　　　　　　Stage %d\n", stage);
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　ㅣㅣㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
							printf("　　　　　　　　　　　　　　　ㅣ\n");
							printf("룰루랄라 여행을 떠나는 중....(오른쪽으로 길로 진행)\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

							Sleep(500);
							system("cls");

						}

						traveling += 1;

					}

					game_treasure_box();

					break;
				}

				else if (51 <= percentage && percentage <= 100) {				// 50% village 호출

					int traveling = 0;

					while (traveling <= 6) {

						bool mod = traveling % 2;

						if (mod == 0) {

							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　　　　　　　　　　Stage %d\n", stage);
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
							printf("　　　　　　　　　　　　　　　ㅣ\n");
							printf("룰루랄라 여행을 떠나는 중..  (가운데 길로 진행)\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

							Sleep(500);
							system("cls");

						}

						else if (mod == 1) {

							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　　　　　　　　　　Stage %d\n", stage);
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　　ㅣㅣㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
							printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
							printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
							printf("　　　　　　　　　　　　　　　ㅣ\n");
							printf("룰루랄라 여행을 떠나는 중....(가운데 길로 진행)\n");
							printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

							Sleep(500);
							system("cls");

						}

						traveling += 1;

					}

					game_village();

					break;
				}
				break;
			}

			else {

				system("cls");

				game_triple_road();

				break;
			}
		}
	}

	else {																		// 스테이지 10 이상일 경우 ending_01 호츌

		ending_01();

	}

	return 0;
}

// road, treasure, village 분기점

int game_road() {																// 아무것도 없는 road
																				// 이후 triple_road 호출
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　　　　　　　　　　Stage %d\n", stage);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　아무것도　없어서　슬라임은　실망했다　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　흑흑　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
	printf("　　　　　　　　　　　　　　　ㅣ\n");
	printf("아무것도 없어서 슬라임은 실망했다.\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	game_triple_road();

	return 0;
}

// 몬스터 X	아이템 X	힐러 X

int game_treasure_box() {														// 아이템 흭득 및 체력 관련 이벤트 발생
																				// 이후 triple_road 호출

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　　　　　　　　　　Stage %d\n", stage);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　보물상자를　발견했다　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　야호　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅇㅇㅇㅇ　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
	printf("　　　　　　　　　　　　　　　ㅣ\n");
	printf("보물상자를 발견했다. 가까이 가보자\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	int heal = 10;
	int poison = 10;
	int wood = 3;
	int sword = 5;
	int axe = 10;
	int Hp_over;
	int Hp_under;

	Hp_over = Hp + heal;
	Hp_under = Hp - poison;

	srand(time(NULL));

	int count = (rand() % 100) + 1;

	srand(time(NULL));

	int eat = (rand() % 100) + 1;

	srand(time(NULL));

	int percentage = (rand() % 3) + 1;

	switch (percentage) {															// 1/3 확률 : 체력 관련, 아이템 관련, 아무것도 없음

	case 1:																			// 체력 관련

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　　　　　　　　　　Stage %d\n", stage);
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　버섯이다　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅁㅁㅁㅁ　　　ㅣ\n");
		printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
		printf("　　　　　　　　　　　　　　　ㅣ\n");
		printf("상자는 사실 버섯이었다. 일단 먹어보기로 한다.\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(2000);
		system("cls");

		if (1 <= eat || eat <= 60) {												// 60% 체력 회복

			if (Hp_over < Hp_max) {

				Hp += heal;

				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("　　　　　　　　　　　　　Stage %d\n", stage);
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　냠냠　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　ㅇㅇ　ㅁㅁ　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁㅁ　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
				printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
				printf("　　　　　　　　　　　　　　　ㅣ\n");
				printf("맛있는 국밥버섯 이었습니다. 체력을 %d 회복했다.\n", heal);
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				
				Sleep(2000);
				system("cls");
			}

			else if (Hp_over > Hp_max) {

				Hp = 50;

				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("　　　　　　　　　　　　　Stage %d\n", stage);
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　냠냠　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　ㅇㅇ　ㅁㅁ　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁㅁ　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
				printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
				printf("　　　　　　　　　　　　　　　ㅣ\n");
				printf("맛있는 국밥버섯 이었습니다. 최대 체력으로 회복했다.\n");
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

				Sleep(2000);
				system("cls");
			}

			else if (Hp_over == Hp_max) {

				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("　　　　　　　　　　　　　Stage %d\n", stage);
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　꺼억　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
				printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅁㅁㅁㅁ　　　ㅣ\n");
				printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
				printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
				printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
				printf("　　　　　　　　　　　　　　　ㅣ\n");
				printf("맛있는 국밥버섯 이었습니다. 하지만 배가불러서 지나쳤다.\n");
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

				Sleep(2000);
				system("cls");

			}

		}

		else if (61 <= eat || eat <= 100) {											// 40% 체력 감소

			if (Hp_under > poison) {

				Hp -= poison;

				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("　　　　　　　　　　　　　Stage %d\n", stage);
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　냠냠　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　ㅇㅇ　ㅁㅁ　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁㅁ　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
				printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
				printf("　　　　　　　　　　　　　　　ㅣ\n");
				printf("이상한 방구버섯 이었습니다. 데미지 %d를 입었다.\n", poison);
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

				Sleep(2000);
				system("cls");

			}

			else if (Hp_under <= poison) {

				Hp -= poison;

				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("　　　　　　　　　　　　　Stage %d\n", stage);
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　냠냠　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　ㅇㅇ　ㅁㅁ　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁㅁ　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
				printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
				printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
				printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
				printf("　　　　　　　　　　　　　　　ㅣ\n");
				printf("이상한 방구버섯 이었습니다. 데미지 %d를 입었다.\n", poison);
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

				Sleep(2000);
				system("cls");

				end_death();

			}

		}

		break;

	case 2:																			// 아이템 관련

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　　　　　　　　　　Stage %d\n", stage);
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　어라　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅇㅇㅇㅇ　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
		printf("　　　　　　　　　　　　　　　ㅣ\n");
		printf("가까이 가보니 무언가 묻혀있었습니다. 일단 뽑아보리고 한다.\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(2000);
		system("cls");

		if (1 <= count || count <= 50) {											// 50% 몽둥이 장착

			Power += wood;

			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　　　　　　　　　　Stage %d\n", stage);
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅇㅇㅇㅇ　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
			printf("ㅣ　　　　　　오　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
			printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
			printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
			printf("　　　　　　　　　　　　　　　ㅣ\n");
			printf("뽑아 보니, 엄청 큰 막대기였습니다. 공격력이 %d 상승합니다.\n", wood);
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

			Sleep(2000);
			system("cls");

		}

		else if (51 <= count || count <= 80) {										// 30% 검 장착

			Power += sword;

			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　　　　　　　　　　Stage %d\n", stage);
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅇㅇㅇㅇ　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　ㅇㅇㅇ　ㅣ\n");
			printf("ㅣ　　　　　　오　　　　　　　　　　　　　ㅇㅇㅇㅇㅇㅇㅇㅇ　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
			printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
			printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
			printf("　　　　　　　　　　　　　　　ㅣ\n");
			printf("뽑아 보니, 검이 꽂혀 있던 것이었습니다. 공격력이 %d 상승합니다.\n", sword);
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");	

			Sleep(2000);
			system("cls");

		}

		else if (81 <= count || count <= 100) {										// 20% 도끼 장착

			Power += axe;

			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　　　　　　　　　　Stage %d\n", stage);
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　오　　　　　　　　　　　　　　　ㅇㅇㅇㅇ　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
			printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　ㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇ　　　ㅣ\n");
			printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
			printf("　　　　　　　　　　　　　　　ㅣ\n");
			printf("뽑아 보니, 도끼 였습니다. 공격력이 %d 상승합니다.\n", axe);
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

			Sleep(2000);
			system("cls");

		}

		break;

	case 3:																			// 아무것도 없음

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　　　　　　　　　　Stage %d\n", stage);
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　ㅁ나이만ㅇㅏㅁㄴ　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　ㅏ이ㅁ낭민ㅏㅇ소　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅇㅇㅇㅇ　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
		printf("　　　　　　　　　　　　　　　ㅣ\n");
		printf("상자가 비어있습니다. 기분이 5000하락 했습니다.\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(2000);
		system("cls");

		break;

	}

	game_triple_road();

	return 0;
}

// 몬스터 X	아이템 O	힐러 O

int game_village() {														    // 슬라임 촌락, 히든 몬스터, 교회 촌락

	srand(time(NULL));

	int percentage = (rand() % 100) + 1;

	if (1 <= percentage && percentage <= 40) {									// 40% 슬라임(적) 조우

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　　　　　　　　　　Stage %d\n", stage);
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　누구셈　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
		printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
		printf("　　　　　　　　　　　　　　　ㅣ\n");
		printf("무엇인가 다가오고 있습니다.\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(2000);
		system("cls");

		srand(time(NULL));

		int monster_percentage = (rand() % 100) + 1;

		if (1 <= monster_percentage && monster_percentage <= 33) {				// 33% 확률 : monster_01 호출

			game_monster_01();

		}

		else if (34 <= monster_percentage && monster_percentage <= 66) {		// 33% 확륙 : monster_02 호출

			game_monster_02();

		}

		else if (67 <= monster_percentage && monster_percentage <= 99) {		// 33% 확률 : monster_03 호출

			game_monster_03();

		}

		else if (100 == monster_percentage) {									// 1% 확률  ; hidden_moster 호출
		
			game_hidden_moster();
		
		}
	}

	else if (41 <= percentage && percentage <= 100) {							// 60% 교회 조우

		game_heal();

	}

	return 0;
}

// 몬스터 O	힐러 X	힐러 O
// moster 01 ~ 03, heal 분기점

int game_monster_01() {															// ㅇ로 이루어진 슬라임
	
	int Hp_monster = 50;											// 몬스터 체력	: 50
	int Power_monster = 5;											// 몬스터 공격력	: 5

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　　　　　　　　　　Stage %d\n", stage);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
	printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
	printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
	printf("야생의 슬라임이 나타났습니다.\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	while (1) {

		srand(time(NULL));

		int attack_motion = (rand() % 3) + 1;						// 어택 모션
		int Critical = Power * 1.5;									// 크리티컬 생성

		if (attack_motion == 1) {												// 1/3 확률로 어택 모션 1 진행

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;					// 크리티컬

			if (1 <= percentage && percentage <= 30) {							// 30% 크리티컬 발생

				if (0 < Hp_monster && Hp > 0) {									// 몬스터, 플레이어 체력 0 초과일경우 전투 진행

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　　ㅇ　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {										// 몬스터 체력 0초과일 경우 전투 진행

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅡㅡㅡㅡㅡㅡ　　　　ㅇ　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else {														// 몬스터 체력 0이하일 경우 빠져나감

						continue;
					}
				}

				else if (Hp <= 0) {												// 플레이어 체력 0 이하일경우 end_death 호출

					end_death();

				}

				else if (Hp_monster <= 0) {										// 몬스터 체력 0 이하일경우 end_win 호출

					end_win();

				}
			}

			else if (31 <= percentage && percentage <= 100) {					// 70% 일반 공격 발생

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　　ㅇ　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅡㅡㅡㅡㅡㅡ　　　　ㅇ　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}
		}

		else if (attack_motion == 2) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　　ㅇ　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅁㅁㅡㅡㅡㅡㅡ　　　　ㅇ　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else {

						continue;
					}
				}
				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　　ㅇ　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅁㅁㅡㅡㅡㅡㅡ　　　　ㅇ　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}
		}

		else if (attack_motion == 3) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　　ㅇ　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅇㅇㅇㅇㅡㅡ　　　　ㅇ　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　　ㅇ　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅇㅇㅇㅇㅡㅡ　　　　ㅇ　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					
						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}
		}
	}

	return 0;
}

// 몬스터 슬라임 결투

int game_monster_02() {															// ㅁ로 이루어진 슬라임

	int Hp_monster = 100;											// 몬스터 체력	: 100
	int Power_monster = 3;											// 몬스터 공격력	: 3

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　　　　　　　　　　Stage %d\n", stage);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
	printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅁ　　ㅁ　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
	printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
	printf("야생의 뚱뚱한 슬라임이 나타났습니다.\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	while (1) {

		srand(time(NULL));

		int attack_motion = (rand() % 3) + 1;
		int Critical = Power * 1.5;

		if (attack_motion == 1) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　　ㅁ　　ㅁ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅡㅡㅡㅡㅡㅡ　　　　ㅁ　　ㅁ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　　ㅁ　　ㅁ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅡㅡㅡㅡㅡㅡ　　　　ㅁ　　ㅁ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}
		}

		else if (attack_motion == 2) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　　ㅁ　　ㅁ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅁㅁㅡㅡㅡㅡㅡ　　　　ㅁ　　ㅁ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else {

						continue;
					}
				}
				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　　ㅁ　　ㅁ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅁㅁㅡㅡㅡㅡㅡ　　　　ㅁ　　ㅁ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}
		}

		else if (attack_motion == 3) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　　ㅁ　　ㅁ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅇㅇㅇㅇㅡㅡ　　　　ㅁ　　ㅁ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　　ㅁ　　ㅁ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅇㅇㅇㅇㅡㅡ　　　　ㅁ　　ㅁ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}
		}
	}

	return 0;
}

// 몬스터 뚱뚱한 슬라임 결투

int game_monster_03() {															// ㅍ로 이루어진 슬라임

	int Hp_monster = 30;											// 몬스터 체력	: 30
	int Power_monster = 10;											// 몬스터 공격력	: 10
	
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　　　　　　　　　　Stage %d\n", stage);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
	printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅍ　　ㅍ　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
	printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
	printf("야생의 삐쩍 마른 슬라임이 나타났습니다.\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	while (1) {

		srand(time(NULL));

		int attack_motion = (rand() % 3) + 1;
		int Critical = Power * 1.5;

		if (attack_motion == 1) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　　ㅍ　　ㅍ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅡㅡㅡㅡㅡㅡ　　　　ㅍ　　ㅍ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　　ㅍ　　ㅍ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅡㅡㅡㅡㅡㅡ　　　　ㅍ　　ㅍ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}
		}

		else if (attack_motion == 2) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　　ㅍ　　ㅍ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅁㅁㅡㅡㅡㅡㅡ　　　　ㅍ　　ㅍ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else {

						continue;
					}
				}
				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　　ㅍ　　ㅍ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅁㅁㅡㅡㅡㅡㅡ　　　　ㅍ　　ㅍ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}
		}

		else if (attack_motion == 3) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　　ㅍ　　ㅍ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅇㅇㅇㅇㅡㅡ　　　　ㅍ　　ㅍ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　　ㅍ　　ㅍ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅇㅇㅇㅇㅡㅡ　　　　ㅍ　　ㅍ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅍㅍ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					end_win();

				}
			}
		}
	}

	return 0;
}

// 몬스터 삐쩍 마른 슬라임 결투

int game_hidden_moster() {											// 촌장 슬라임

	int Hp_monster = 150;											// 몬스터 체력	: 150
	int Power_monster = 5;											// 몬스터 공격력	: 5

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　　　　　　　　　　Stage %d\n", stage);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
	printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
	printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
	printf("촌장 슬라임이 나타났습니다.\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	while (1) {

		srand(time(NULL));

		int attack_motion = (rand() % 3) + 1;
		int Critical = Power * 1.5;

		if (attack_motion == 1) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　에라이　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅡㅡㅡㅡㅡㅡ　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					srand(time(NULL));

					int percentage = (rand() % 100) + 1;

					if (1 <= percentage && percentage <= 40) {

						Hp_max += 50;
						Hp += 30;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　냠냠　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장을 먹어 최대 체력이 %d 으로 상승, %d를 회복하였습니다.\n", Hp_max, Hp);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (41 <= percentage && percentage <= 80) {

						Power += 10;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　몸에　좋은건　맛이　없다지　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　ㅁㅁㅁㅁ　촌장의　침　　　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장의 침을 먹어 공격력이 %d 상승하였습니다.\n", 10);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (81 <= percentage && percentage <= 100) {

						ending_02();

					}
				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　에라이　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅡㅡㅡㅡㅡㅡ　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					srand(time(NULL));

					int percentage = (rand() % 100) + 1;

					if (1 <= percentage && percentage <= 40) {

						Hp_max += 50;
						Hp += 30;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　냠냠　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장을 먹어 최대 체력이 %d 으로 상승, %d를 회복하였습니다.\n", Hp_max, Hp);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (41 <= percentage && percentage <= 80) {

						Power += 10;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　몸에　좋은건　맛이　없다지　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　ㅁㅁㅁㅁ　촌장의　침　　　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장의 침을 먹어 공격력이 %d 상승하였습니다.\n", 10);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (81 <= percentage && percentage <= 100) {

						ending_02();

					}
				}
			}
		}

		else if (attack_motion == 2) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　에라이　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅁㅁㅡㅡㅡㅡㅡ　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					srand(time(NULL));

					int percentage = (rand() % 100) + 1;

					if (1 <= percentage && percentage <= 40) {

						Hp_max += 50;
						Hp += 30;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　냠냠　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장을 먹어 최대 체력이 %d 으로 상승, %d를 회복하였습니다.\n",Hp_max, Hp);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (41 <= percentage && percentage <= 80) {

						Power += 10;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　몸에　좋은건　맛이　없다지　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　ㅁㅁㅁㅁ　촌장의　침　　　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장의 침을 먹어 공격력이 %d 상승하였습니다.\n", 10);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (81 <= percentage && percentage <= 100) {

						ending_02();

					}
				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　에라이　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅁㅁㅡㅡㅡㅡㅡ　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　ㅁ　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					srand(time(NULL));

					int percentage = (rand() % 100) + 1;

					if (1 <= percentage && percentage <= 40) {

						Hp_max += 50;
						Hp += 30;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　냠냠　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장을 먹어 최대 체력이 %d 으로 상승, %d를 회복하였습니다.\n", Hp_max, Hp);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (41 <= percentage && percentage <= 80) {

						Power += 10;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　몸에　좋은건　맛이　없다지　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　ㅁㅁㅁㅁ　촌장의　침　　　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장의 침을 먹어 공격력이 %d 상승하였습니다.\n", 10);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (81 <= percentage && percentage <= 100) {

						ending_02();

					}
				}
			}
		}

		else if (attack_motion == 3) {

			srand(time(NULL));

			int percentage = (rand() % 100) + 1;

			if (1 <= percentage && percentage <= 30) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Critical;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅁㅁ　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 굉장했다. 데미지 %d를 입혔다.\n", Critical);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　에라이　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅇㅇㅇㅇㅡㅡ　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					srand(time(NULL));

					int percentage = (rand() % 100) + 1;

					if (1 <= percentage && percentage <= 40) {

						Hp_max += 50;
						Hp += 30;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　냠냠　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장을 먹어 최대 체력이 %d 으로 상승, %d를 회복하였습니다.\n", Hp_max, Hp);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (41 <= percentage && percentage <= 80) {

						Power += 10;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　몸에　좋은건　맛이　없다지　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　ㅁㅁㅁㅁ　촌장의　침　　　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장의 침을 먹어 공격력이 %d 상승하였습니다.\n", 10);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (81 <= percentage && percentage <= 100) {

						ending_02();

					}
				}
			}

			else if (31 <= percentage && percentage <= 100) {

				if (0 < Hp_monster && Hp > 0) {

					Hp_monster -= Power;

					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　　　　　　　　　　Stage %d\n", stage);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅣ　　　　　　퉷　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅡㅡㅡㅡㅡㅡㅇ　　　ㅇ　　　ㅇ　　　ㅣ\n");
					printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
					printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
					printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
					printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
					printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
					printf("플레이어가 공격을 했다. 효과는 미미했다. 데미지 %d를 입혔다.\n", Power);
					printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

					Sleep(2000);
					system("cls");

					if (0 < Hp_monster) {

						Hp -= Power_monster;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　에라이　퉷　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　ㅇㅇㅇㅇㅇㅡㅡ　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　몬스터　체력　공격력ㅣ%d　%d\n", Hp_monster, Power_monster);
						printf("몬스터가 공격을 했다. 데미지 %d를 입었다.\n", Power_monster);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");
					}

					else {

						continue;
					}
				}

				else if (Hp <= 0) {

					end_death();

				}

				else if (Hp_monster <= 0) {

					srand(time(NULL));

					int percentage = (rand() % 100) + 1;

					if (1 <= percentage && percentage <= 40) {

						Hp_max += 50;
						Hp += 30;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　냠냠　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　ㅇ　　ㅇ　ㅁ　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　ㅇㅇ　ㅁㅁㅁ　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　ㅇ　　　ㅇ　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장을 먹어 최대 체력이 %d 으로 상승, %d를 회복하였습니다.\n", Hp_max, Hp);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (41 <= percentage && percentage <= 80) {

						Power += 10;

						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　　　　　　　　　　Stage %d\n", stage);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　　　몸에　좋은건　맛이　없다지　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅣ　　　　ㅇㅇ　　　　　　　ㅁㅁㅁㅁ　촌장의　침　　　　　　ㅣ\n");
						printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
						printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
						printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
						printf("　　　　　　　　　　　　　　　ㅣ\n");
						printf("슬라임 촌장의 침을 먹어 공격력이 %d 상승하였습니다.\n", 10);
						printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

						Sleep(2000);
						system("cls");

					}

					else if (81 <= percentage && percentage <= 100) {

						ending_02();

					}
				}
			}
		}
	}

	return 0;
}

// 히든 몬스터 1%확률 출현 슬라임 촌장 결투

int game_heal() {																// 체력 관련, 스탯 관련 이벤트 발생
																				// 이후 triple_road 호출
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　　　　　　　　　　Stage %d\n", stage);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　머지　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　ㅣ\n");
	printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
	printf("　　　　　　　　　　　　　　　ㅣ\n");
	printf("멀리서 누가 손짓합니다.\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	int heal = 10;													// 슬라임 애호가 힐량
	int power_up = 5;												// 눈이 안보이는 서포터 공격력 증가량
	int power_down = 3;												// 사령술사 공격력 감소량
	int Hp_over;													// 최대 체력 초과 대비 임의의 변수

	Hp_over = Hp + heal;

	srand(time(NULL));

	int percentage = (rand() % 4) + 1;

	switch (percentage) {

	case 1:																		// 1/4 확률 : 슬라임 애호가 조우
	
		if (Hp < Hp_max) {

			Hp += heal;

			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　　　　　　　　　　Stage %d\n", stage);
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　오예　　　　　　　　　　　힐받아라　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　ㅣ\n");
			printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
			printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
			printf("　　　　　　　　　　　　　　　ㅣ\n");
			printf("슬라임 애호가 신관을 만났다. 신관이 체력 %d를 회복해 주었다.\n", heal);
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			
			Sleep(2000);
			system("cls");

		}

		else if (Hp > Hp_max) {

			Hp = 50;
		
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　　　　　　　　　　Stage %d\n", stage);
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　오예　　　　　　　　　　　힐받아라　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　ㅣ\n");
			printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
			printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
			printf("　　　　　　　　　　　　　　　ㅣ\n");
			printf("슬라임 애호가 신관을 만났다. 최대 체력으로 회복했다.\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

			Sleep(2000);
			system("cls");

		}

		else if (Hp == Hp_max) {
		
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　　　　　　　　　　Stage %d\n", stage);
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　꺅　　　　　　　　　　　　　　오예　　　　　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　ㅣ\n");
			printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
			printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
			printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
			printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
			printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
			printf("　　　　　　　　　　　　　　　ㅣ\n");
			printf("슬라임 애호가 신관을 만났다. 전속력으로 도망쳤다.\n");
			printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

			Sleep(2000);
			system("cls");

		}



	break;

	case 2:																		// 1/4 확률 : 눈이 안보이는 서포터 조우

		Power += power_up;

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　　　　　　　　　　Stage %d\n", stage);
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　오예　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　버프받아라　ㅇ　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　ㅣ\n");
		printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
		printf("　　　　　　　　　　　　　　　ㅣ\n");
		printf("눈이 안보이는 서포터를 만났다. 서포터가 공격력 %d 상승합니다.\n", power_up);
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(2000);
		system("cls");

		break;

	case 3:																		// 1/4 확률 : 사령술사 조우

		Power -= power_down;

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　　　　　　　　　　Stage %d\n", stage);
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　흠칫　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　저주받아라　ㅇ　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　ㅣ\n");
		printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
		printf("　　　　　　　　　　　　　　　ㅣ\n");
		printf("사령술사를 만났다. 사령술사의 저주로 공격력 %d 하락합니다.\n", power_down);
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(2000);
		system("cls");

		break;

	case 4:																		// 1/4 확률 : 아무일도 일어나지 않았다.

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　　　　　　　　　　Stage %d\n", stage);
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇㅇ　　　ㅣ\n");
		printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
		printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　　ㅇ　　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("　　　　플레이어　체력　공격력ㅣ%d　%d\n", Hp, Power);
		printf("　　　　　　　　　　　　　　　ㅣ\n");
		printf("자세히 보니 허수아비였습니다. 쓸쓸해 보입니다.\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(2000);
		system("cls");

		break;

	}

	game_triple_road();

	return 0;
}

// 힐러와의 조우

int end_win() {																	// 전투 승리 화면
																				// 이후 stage 10미만일 경우 triple_road 호출 10이상일 경우 ending_01 호출

	int count = 0;

	while (count <= 1) {

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　승리하셨습니다　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　야호　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　ㅇㅇ　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　ㅇ　　ㅇ　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　ㅇㅇ　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁ\n");
		printf("ㅇ　　　　　　　　　　　축하드립니다　　　　　　　　　　　　ㅇ\n");
		printf("ㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(500);
		system("cls");

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　승리하셨습니다　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　ㅇㅇ　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　ㅇ　　ㅇ　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　ㅇㅇ　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　ㅣㅣ　폴짝　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇ\n");
		printf("ㅁ　　　　　　　　　　　축하드립니다　　　　　　　　　　　　ㅁ\n");
		printf("ㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇㅁㅇ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(500);
		system("cls");

		count += 1;

	}

	if (stage < 6) {

		game_triple_road();

	}

	else {

		ending_01();

	}

	return 0;
}

// 결투 승리시 화면

int end_death() {																// 전투 패배, 체력 0이하 죽는 화면
																				// 이후 처음 화면 다시진행 backgroud 호출
	int count = 0;

	while (count == 1) {
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　사망하셨습니다　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　흐느적　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　ㅇ　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　ㅇ　ㅇㅇㅇㅇ　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ\n");
		printf("ㅋ　　　　　　　　　　　사망하셨습니다　　　　　　　　　　　ㅋ\n");
		printf("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(500);
		system("cls");

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　사망하셨습니다　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　흐느적　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　ㅇ　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　ㅇㅇㅇ　ㅇㅇ　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ\n");
		printf("ㅋ　　　　　　　　　　　사망하셨습니다　　　　　　　　　　　ㅋ\n");
		printf("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(500);
		system("cls");

		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　사망하셨습니다　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　흐느적　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　ㅇ　　　　ㅇ　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　ㅇㅇㅇㅇ　　　　　　　　　　　　ㅣ\n");
		printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
		printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ\n");
		printf("ㅋ　　　　　　　　　　　사망하셨습니다　　　　　　　　　　　ㅋ\n");
		printf("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		Sleep(500);
		system("cls");

		count += 1;

	}

	start_backgroud();

	return 0;
}

// 죽었을경우 화면

int ending_01() {																// 스테이지 10이상일 경우 발생
																				// 이후 처음 화면 다시진행 backgroud 호출
	system("cls");

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　플레이　해주셔서　감사합니다　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　엄마　　　　　　　　어디갔다가　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　이제　들어와　　ㅇㅇ　　　　ㅣ\n");
	printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n");
	printf("ㅁ　　　　　　　　　　집에　돌아왔습니다　　　　　　　　　　ㅁ\n");
	printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	stage = 0;														// stage 0 초기화
	Hp = 50;														// 체력 50 초기화
	Hp_max = 50;													// 최대 체력 50 초기화
	Power = 10;														// 공격력 10 초기화

	start_backgroud();

	return 0;
}

// 스테이지 클리어 엔딩

int ending_02() {																// 히든 몬스터 처치시 20% 확률로 발생
																				// 이후 처음 화면 다시진행 backgroud 호출
	system("cls");

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　플레이　해주셔서　감사합니다　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　공주님　　　　　　　　　　살려줘　　　　　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
	printf("ㅣ　　　ㅇ　　ㅇ　　　　　　　　　　　　　　　ㅇ　　ㅇ　　　ㅣ\n");
	printf("ㅣ　　　　ㅇㅇ　　　　　　　　　　　　　　　　　ㅇㅇ　　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n");
	printf("ㅁ　　　　　갇혀있던　슬라임공주를　구출하였습니다　　　　　ㅁ\n");
	printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　플레이　해주셔서　감사합니다　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　ㅁ　ㅁ　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　ㅁ　ㅁ　ㅁ　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　ㅁ　ㅁ　　　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　쪽　　　ㅁ　　　쪽　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　ㅇㅇ　　　ㅇㅇ　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　ㅇ　　ㅇ　ㅇ　　ㅇ　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　ㅇㅇ　　　ㅇㅇ　　　　　　　　　　　ㅣ\n");
	printf("ㅣ　　ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ　　ㅣ\n");
	printf("ㅣ　　　　　　　　　　　　　　　　　　　　　　　　　　　　　ㅣ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n");
	printf("ㅁ　　　　공주님과　결혼하여　행복하게　살았습니다　　　　　ㅁ\n");
	printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	Sleep(2000);
	system("cls");

	stage = 0;														// stage 0 초기화
	Hp = 50;														// 체력 50 초기화
	Hp_max = 50;													// 최대 체력 50 초기화
	Power = 10;														// 공격력 10 초기화

	start_backgroud();

	return 0;

	return 0;
}

// 히든 몬스토 처치 엔딩