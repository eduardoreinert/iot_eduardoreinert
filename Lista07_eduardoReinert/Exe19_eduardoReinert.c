#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numeros[10];
	int i, existe=0;
	
	for(i=0;i<10;i++){
		printf("Digite o %d° número: ",i+1);
		scanf("%d",&numeros[i]);
	}
	
	printf("\nNúmeros maiores que 50:\n");
	for(i=0;i<10;i++){
		if(numeros[i] > 50){
			printf("posição %d: %d\n",i,numeros[i]);
			existe=1;
		}
	}
	
	if(!existe){
		printf("Nenhum número maior que 50 foi encontrado.\n");
	}
}