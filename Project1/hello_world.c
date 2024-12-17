#include "stdio.h"
int main(){
	printf("\nHello world!\n");
	for (int i=0;i<10;i++){
		for (int d=0;d<i;d++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
