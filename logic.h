#ifndef _LOGIC_H_
#define _LOGIC_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define POINT 10.000
#define point 0.001

#define  DIGITS 4
int i, k;

void rnum(int x[]);
void p_array(int x[]);
void no_cv_rnum(int x[]);
void p_ch_array(char x[], size_t a);
void user_choice(char choice[], size_t len);

void split_num(double you, int cho[]);

#endif //_LOGIC_H_
