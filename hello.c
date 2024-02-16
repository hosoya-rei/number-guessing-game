#include "logic.h"


//-----------------------main--------------------------------
int main(void) {
	int ans[DIGITS];
	double you;
	int choice[20];
	int hit = 0, blow = 0;
	int limit = 0;
	int judge = 0;
	char test[20];
	size_t len;
//--------------------------入力-------------------------------
	no_cv_rnum(ans);

	while (1) {
		printf("あと%d回\n", 10 - limit); 
		printf("4桁の数字を入力:"); scanf("%lf", &you);
		
		//桁数確認	
		snprintf(test, 20, "%d", (int)you);
		len = strlen(test);
		printf("test=%s\n", test);		
		if (len != 4) {
			printf("不正な数値です\n");
			continue;
		}
		
		//被ってないか確認	
		split_num(you, choice);
		for (i = 0; i < 4; i++) {
			for (k = 0; k < 4; k++) {
				if (choice[i] == choice[k]) {
					judge++;
				}
			}
		}
		if (judge > 4) {
			printf("不正な数値です。\n");
			continue;
		}
		judge = 0;		
		//hitとblowの判定
		for (i = 0; i < DIGITS; i++) {
			if (ans[i] == choice[i]) {
				hit++;
			}
			for (k = 0; k < DIGITS; k++) {
				if (ans[i] == choice[k]) {
					blow++;
				}
			}
		}
		if (hit == 4) { 
			printf("正解です。\n"); break; 
		}else {
			printf("Hit:%d   ", hit); printf("Blow:%d", blow); printf("\n");
		}
		if (limit == 10) {
			printf("残念、、終了です。\n");
			printf("answer is :");
			for (i = 0; i < 4; i++) {
				printf("%d", ans[i]);
			}printf("\n");
			break;
		}
		hit = 0;
		blow = 0;
		limit++;
 	}   
   
 
 return 0;
}
//------------------------main---------------------------------



