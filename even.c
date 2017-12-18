#include<stdio.h>
#include "function.h"

int even(int x, int y){
	int i;
	int count = 0;
	for(i=x+1; i<y; i++){
		if(i%2==0){
			count++;
		}
	}
	return count;
}
