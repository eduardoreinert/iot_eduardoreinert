#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int primo[9], i;
	
	for(i=0; i < 9; i++){
		printf("Digite o %d número inteiro: \n",i);
		scanf("%d",&primo[i]);
		
		if((primo[i] / 1 == 1) && (primo[i] / primo[i] == 1)){
			printf("\nO número é primo!\n\n");
		} else {
			printf("\nO número não é primo!\n\n");
		}
	}
}