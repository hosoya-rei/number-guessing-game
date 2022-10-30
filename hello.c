#include "logic.h"


int main(void) {
  int ans;
  int choice[CHOICENUM];
  int count = 0;
  srand((unsigned int)time(NULL));
  ans = rand() %9 +0;
  while (1) {
    printf("0~9の数字を入力:"); scanf("%d", &choice[count]);
    count ++;
    if (ans == choice[count - 1]) {
	printf("正解です。\n");
	break;
    }else if (count == CHOICENUM) {
	printf("残念、終了です。\n");
	break;
    }else if (ans < choice[count - 1]) {
	printf("もっと小さい。\n");
    }else {
	printf("もっと大きい。\n");
    } 
  }
  put_num_log(choice, count);
return 0;
}


