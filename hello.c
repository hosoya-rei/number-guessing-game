#include <stdio.h>


int main(void) {
  int ans = 5;
  int choice;
  while (1) {
    printf("0~9の数字を入力:"); scanf("%d", &choice);
    if (ans == choice) {
	printf("正解!!\n");
	break;
    }else if (ans < choice) {
	printf("もっと小さい。\n");
    }else if (ans > choice) {
	printf("もっと大きい。\n");
    } 
  }
 return 0;
}
