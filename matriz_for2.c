#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int x[3][4];
	int i,j;
	
	for(i=0;i<3;i++){
		printf("\nElementos da linha %d: ",i);
		for(j=0;j<4;j++){
			printf("|%d|",x[i,j]);
		}
	}
}