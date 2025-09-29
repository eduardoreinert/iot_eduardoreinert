#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int produtos = 1, refrigeracao, categoria;
	float preco, precoTotal;
	float somaImpostos = 0, custoEstocagem, imposto, imposto2, somaEstocagem = 0;
	float maiorPrecoFinal = 0, menorPrecoFinal = 0;
	int ate20 = 0, entre20e100 = 0, acima100 = 0;

	while(produtos <= 3){
		printf("\n\nDigite o preço unitário do %dº: ",produtos);
		scanf("%f",&preco);

		custoEstocagem = 0;
		imposto = 0;
		imposto2 = 0;

		if(preco <= 20){
			printf("\n\nInsira a categoria do %dº produto:\n\n1. Alimentação\n2. Limpeza\n3. Vestuário\n",produtos);
			scanf("%d",&categoria);

			if(categoria == 1){
				custoEstocagem = 2;
			} else if (categoria == 2){
				custoEstocagem = 3;
			} else if (categoria == 3){
				custoEstocagem = 4;
			} else {
				printf("Categoria inválida!");
				break;
			}

			if(categoria == 1){
				imposto = preco * 0.04;
			} else {
				imposto = preco * 0.02;
			}

		} else if(preco > 20 && preco <= 50){
			printf("\n\nO %dº produto necessita de refrigeração?\n\n1. Não necessita\n2. Necessita\n",produtos);
			scanf("%d",&refrigeracao);

			if(refrigeracao == 2){
				custoEstocagem = 6;
				imposto = preco * 0.04;
			} else if(refrigeracao == 1){
				custoEstocagem = 0;
				imposto = preco * 0.02;
			} else {
				printf("Valor inserido inválido!");
				break;
			}

		} else if(preco > 50){
			printf("\n\nInsira a categoria do %dº produto:\n\n1. Alimentação\n2. Limpeza\n3. Vestuário\n",produtos);
			scanf("%d",&categoria);

			printf("\n\nO %dº produto necessita de refrigeração?\n\n1. Não necessita\n2. Necessita\n",produtos);
			scanf("%d",&refrigeracao);

			if(refrigeracao == 2 && categoria == 1){
				custoEstocagem = 5;
			} else if(refrigeracao == 2 && categoria == 2){
				custoEstocagem = 2;
			} else if(refrigeracao == 2 && categoria == 3){
				custoEstocagem = 4;
			} else if(refrigeracao == 1 && categoria == 1){
				custoEstocagem = 0;
			} else if(refrigeracao == 1 && categoria == 2){
				custoEstocagem = 1;
			} else if(refrigeracao == 1 && categoria == 3){
				custoEstocagem = 0;
			} else {
				printf("Categoria ou refrigeração inválida!");
				break;
			}

			if(categoria == 1){
				imposto = preco * 0.04;
			} else {
				imposto = preco * 0.02;
			}

			if(refrigeracao == 2){
				imposto2 = preco * 0.04;
			} else {
				imposto2 = preco * 0.02;
			}
		}

		precoTotal = preco + custoEstocagem + imposto + imposto2;

		somaEstocagem += custoEstocagem;
		somaImpostos += imposto + imposto2;

		
		if(produtos == 1){
			maiorPrecoFinal = precoTotal;
			menorPrecoFinal = precoTotal;
		} else {
			if(precoTotal > maiorPrecoFinal){
				maiorPrecoFinal = precoTotal;
			}
			if(precoTotal < menorPrecoFinal){
				menorPrecoFinal = precoTotal;
			}
		}

		
		if(preco <= 20){
			ate20++;
		} else if(preco > 20 && preco <= 100){
			entre20e100++;
		} else {
			acima100++;
		}

		
		printf("\n\nO custo de estocagem do %dº produto é: %.2f",produtos, custoEstocagem);
		printf("\nO custo de imposto do %dº produto é: %.2f",produtos, imposto + imposto2);
		printf("\nO custo geral do %dº produto é: %.2f\n",produtos, precoTotal);

		produtos++;
	}


	int totalProdutos = produtos - 1;
	float mediaEstocagem = somaEstocagem / totalProdutos;
	float mediaImpostos = somaImpostos / totalProdutos;


	printf("\n\nMÉDIAS DOS CUSTOS ADICIONAIS");
	printf("\nMédia do custo de estocagem: %.2f", mediaEstocagem);
	printf("\nMédia do custo de impostos: %.2f", mediaImpostos);

	printf("\n\nINFORMAÇÕES FINAIS:");
	printf("\nMaior preço final: R$%.2f", maiorPrecoFinal);
	printf("\nMenor preço final: R$%.2f", menorPrecoFinal);
	printf("\nTotal de impostos: R$%.2f", somaImpostos);

	printf("\n\nQUANTIDADE DE PRODUTOS POR FAIXA DE PREÇO:");
	printf("\nAté R$20,00: %d produto(s)", ate20);
	printf("\nEntre R$20,01 e R$100,00: %d produto(s)", entre20e100);
	printf("\nAcima de R$100,00: %d produto(s)\n", acima100);

	return 0;
}
