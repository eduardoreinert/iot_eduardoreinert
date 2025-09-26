#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, codigo, veiculos, acidentes, maior, menor, cidadeMaior, cidadeMenor, somaVeiculos = 0, somaAcidentes = 0, contMenor2000 = 0;
	
	for(i = 0; i < 5; i++){
		printf("\nCidade %d\n", i+1);
		
		printf("Código: ");
		scanf("%d", &codigo);
		
		printf("Número de veiculos: ");
		scanf("%d",&veiculos);
		
		printf("Número de acidentes: ");
		scanf("%d",&acidentes);
		
		if(i == 0){
			maior = acidentes;
			menor = acidentes;
			cidadeMaior = codigo;
			cidadeMenor = codigo;
		}
		
		if(acidentes > maior){
			maior = acidentes;
			cidadeMaior = codigo;
		}
		
		if(acidentes < menor){
			menor = acidentes;
			cidadeMenor = codigo;
		}
		
		somaVeiculos += veiculos;
		
		if(veiculos < 2000){
			somaAcidentes += acidentes;
			contMenor2000++;
		}
	}
	
	printf("\n\nMaior indice de acidentes: %d (Cidade %d)",maior,cidadeMaior);
	printf("\n\nMenor indice de acidentes: %d (Cidade %d)",menor,cidadeMenor);
	printf("\n\nMédia de veículos nas 5 cidades: %d (Cidade %d)",(float)somaVeiculos/5);
	
	if(contMenor2000 > 0)
		printf("\n\nMedia de acidentes nas cidades com menos de 2000 veículos: %0.2f",(float)somaAcidentes/contMenor2000);
	else
		printf("\nNão há cidades com menos de 2000 veículos!");
	
	return 0;
}