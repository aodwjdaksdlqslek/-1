// 2023-2 고급프로그래밍 과제: 쭈꾸미 게임
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "jjuggumi.h"

#define	DATA_FILE	"jjuggumi.dat"

int jjuggumi_init(void);

int intro(void);

int ending(void);

// low 이상 high 이하 난수를 발생시키는 함수
int randint(int low, int high) {
	int rnum = rand() % (high - low + 1) + low;
	return rnum;
}

int intro(void) {
	printf("    _  _                                   _ \n");
	printf("   (_)(_)                                 (_)\n");
	printf("    _  _ _   _  __ _  __ _ _   _ _ __ ___  _ \n");
	printf("   | || | | | |/ _` |/ _` | | | | '_ ` _  | |\n");
	printf("   | || | |_| | (_| | (_| | |_| | | | | | | |\n");
	printf("   | || | __,_| __, | __, | __,_|_| |_| |_|_|\n");
	printf("  _/ |/ |       __/ | __/ |                  \n");
	printf(" |__/__/       |___/ |___/                   \n");
	Sleep(1000);
	system("cls");
	return 0;
}

int jjuggumi_init(void) {
	srand((unsigned int)time(NULL));

	printf("플레이어 수: ");
	scanf_s("%d", &n_player);

	n_alive = n_player;
	for (int i = 0; i < n_player; i++) {
		player[i] = true;
	}
	return 0;
}

int ending(void) {
	
	printf("우승자: %d", n_alive);
	return 0;
}

int main(void) {
	intro();
	jjuggumi_init();
	//sample();
	mugunghwa();
	//nightgame();
	//juldarigi();
	//jebi();
	ending();
	return 0;
}
