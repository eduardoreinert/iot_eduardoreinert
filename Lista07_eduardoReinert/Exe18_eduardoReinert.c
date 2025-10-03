#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, indiceEconomico=0;
	float litros[5], consumo[5];
	char modelo[5][20];
	
	for(i=0; i < 5; i++){
		printf("Digite o %d modelo de carro: \n",i);
		scanf("%s",&modelo[i]);
		
		printf("Digite os quilometros que o %d carro faz por litro de gasolina: \n",i);
		scanf("%f",&consumo[i]);
	}
	
	for(i = 0; i < 5; i++){
		litros[i] = 1000.0 / consumo[i];
		if(consumo[i] > consumo[indiceEconomico]){
			indiceEconomico = i;
		}
	}
	
	printf("\nCarro mais econômico: %s (%0.2f km/1)\n\n",modelo[indiceEconomico], consumo[indiceEconomico]);
	
	for(i=0;i<5;i++){
		printf("%s consome %0.2f litros para percorrer 1000 km\n", modelo[i], litros[i]);
	}
	return 0;
}