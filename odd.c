#include<stdio.h>
#include "function.h"

int odd(int x, int y){
	int i;
	int count = 0;
	for(i=x+1; i<y; i++){
		if(i%2==1){
			count++;
		}
	}
	return count;
}
