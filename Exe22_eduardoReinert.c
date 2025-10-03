#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Eduardo Borsato Reinert")
	
	char lojas[8][30], produtos[4][30];
	int i,j;
	float preco[8][4];
	
	printf("Digite o nome das 8 lojas: ");
	for(i=0;i<8;i++){
		printf("Loja %d: ",i+1);
		scanf("%s",lojas[i]);
	}
	
	printf("Digite o nome dos 4 produtos: ");
	for(j=0;j<4;j++){
		printf("Produto %d: ",j+1);
		scanf("%s",produtos[j]);
	}
	
	printf("\nDigite os preços de cada produto em cada loja:\n");
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			printf("Preco do produto %s na loja %s: ",produtos[j],lojas[i]);
			scanf("%f",preco[i][j]);
		}
	}
	
	printf("Produtos abaixo de 60: ");
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			if(preco[i][j] <= 60){
				printf("Produto: %s | Loja: %s | Preco: R$%0.2f\n",produtos[j],lojas[i],preco[i][j]);
			}
		}
	}
}