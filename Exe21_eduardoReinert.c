#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int m[2][2], r[2][2], i,j, maior;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite o %d:%d número: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	maior=m[0][0];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(m[i][j] > maior){
				maior = m[i][j];
			}
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			r[i][j] = m[i][j] * maior;
		}
	}
	
	printf("Matriz R:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("|%d|",r[i][j]);
		}
		printf("\n");
	}
}