#include<stdio.h>
#include "function.h"

int main(){
	int x, y;
	printf("enter x and y\n");
	scanf("%d %d", &x, &y);
	printf("odd: %d, even:%d\n", odd(x,y), even(x,y));
	return 0;
}
