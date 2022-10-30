#include "logic.h"


int main(void) {
  int ans;
  int choice[CHOICENUM];
  int count = 0;
  srand((unsigned int)time(NULL));
  ans = rand() %1000 +0;
  while (1) {
    printf("0~1000の数字を入力(あと%d回):", CHOICENUM - count); scanf("%d", &choice[count]);
    count ++;
    if (ans == choice[count - 1]) {
	printf("正解です。\n");
	break;
    }else if (count == CHOICENUM) {
	printf("残念、終了です。");
	printf("正解は%dです。\n", ans);
	break;
    }else if (ans < choice[count - 1]) {
	printf("もっと小さい。\n");
    }else {
	printf("もっと大きい。\n");
    } 
  }
  put_num_log(choice, count, ans);
return 0;
}
