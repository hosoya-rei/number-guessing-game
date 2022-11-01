#include "logic.h"


//char型の配列の中身を表示
void p_ch_array(char x[], size_t a) {
  for (i = 0; i < a; i++) {
	putchar(x[i]);
  }printf("\n");
}

//0~9のランダムな4桁の数を指定した配列に代入
void rnum(int x[]) {
  srand((unsigned int)time(NULL));
  for (i = 0; i < DIGITS; i++) {
    x[i] = rand() %9 +0;
  }
} 


//0~9のランダムな4桁で被らない数を指定した配列に代入
void no_cv_rnum(int x[]) {
  srand((unsigned int)time(NULL));
  while (1) {
    x[i] = rand() %9 +0;
    if (x[0] == 0) {
	continue;
    }
    if (i > 0) {
        for (k = 0; k < i; k++) {
	    if (x[i] == x[k]) {
		i--;
	    }
	}
    }
    if (i == DIGITS) {
	break;
    }
    i++;
  }
}


//DIGITS分だけ配列の中身を出力
void p_array(int x[]) {
  for (i = 0; i < DIGITS; i++) {
    printf("%d", x[i]);
  }printf("\n");
}

//userの数字入力を分解して配列に入れる（4桁）
void split_num(double you, int cho[]) {
	double x = you / POINT;
	double c = (x - (int)x) * POINT + point;
	double y = (int)x / POINT;
	double l = (y - (int)y) * POINT + point;
	double o = (int)y / POINT;
	double s = (o - (int)o) * POINT + point; 
	
	int array[] = {o, s, l, c};

	for (i = 0; i < 4; i++) {
		cho[i] = array[i];
	}
}

