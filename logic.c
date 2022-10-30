#include "logic.h"


void put_num_log(int c[], int count) {
  printf("入力履歴:");
  for (int i = 0; i < count; i++) {
        printf("%d ", c[i]);
  }printf("\n");
}
