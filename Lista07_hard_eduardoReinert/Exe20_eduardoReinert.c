#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float preco[10], total[10], soma=0, comissao;
	int qtd[10], i, maisVendido=0;
	
	for(i=0;i<10;i++){
		printf("Digite o preço do objeto %d: R$ ",i+1);
		scanf("%f",&preco[i]);
		
		printf("Digite a quantidade vendida do objeto %d: ",i+1);
		scanf("%d",&qtd[i]);
	}
	
	for(i=0;i<10;i++){
		total[i] = preco[i] * qtd[i];
		soma += total[i];
		
		if(qtd[i] > qtd[maisVendido]){
			maisVendido = 1;
		}
	}
	
	comissao = soma * 0.05;
	
	for(i=0;i<10;i++){
		printf("Objeto %d: quantidade = %d | preço = R$ %0.2f | total = R$ %0.2f\n", i+1, qtd[i], preco[i], total[i]);
	}
	
	printf("\nValor geral das vendas: R$ %0.2f\n",soma);
	printf("\nComissão do vendedor (5%%): R$ %0.2f\n",comissao);
	printf("\nObjeto mais vendido: Objeto %d (quantidade: %d)\n",maisVendido+1, qtd[maisVendido]);

}