#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int ans;
  int choice;
  srand((unsigned int)time(NULL));
  ans = rand() %9 +0;
  while (1) {
    printf("0~9の数字を入力:"); scanf("%d", &choice);
    if (ans == choice) {
	printf("正解!!\n");
	break;
    }else if (ans < choice) {
	printf("もっと小さい。\n");
    }else {
	printf("もっと大きい。\n");
    } 
  }
 return 0;
}
