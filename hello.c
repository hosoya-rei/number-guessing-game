#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int ans;
  int choice;
  int count = 0;
  srand((unsigned int)time(NULL));
  ans = rand() %9 +0;
  while (1) {
    count ++;
    printf("0~9の数字を入力:"); scanf("%d", &choice);
    if (ans == choice) {
	printf("正解です。");
	break;
    }else if (count == 5) {
	printf("残念、終了です。\n");
	break;
    }else if (ans < choice) {
	printf("もっと小さい。\n");
    }else {
	printf("もっと大きい。\n");
    } 
  }
 return 0;
}


