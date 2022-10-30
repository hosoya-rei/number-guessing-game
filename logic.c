#include "logic.h"


void put_num_log(int c[], int count, int ans) {
  printf("入力履歴:");
  for (int i = 0; i < count; i++) {
        printf("%4d %4d\n", c[i], ans - c[i]);
  }
}
