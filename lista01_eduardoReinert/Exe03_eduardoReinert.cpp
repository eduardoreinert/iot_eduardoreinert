#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	float taxa, deposito, valorFinal, acrescimo;
	
	//mostra a mensagem 
	printf("\nDigite o valor do depósito: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&deposito);
	//mostra a mensagem 
	printf("\nDigite o valor da taxa de juros (número inteiro): ");
	//le o que o usuario inseriu
	scanf("%f%*c",&taxa);
	
	taxa = taxa/100;
	
	acrescimo = deposito * taxa;
	
	valorFinal = deposito + acrescimo;
	
	printf("\nDepósito feito = %0.2f", deposito);
	printf("\nTaxa aplicada = %0.2f", taxa);
	printf("\nAcrescimo a partir da taxa = %0.2f", acrescimo);
	printf("\n\nValor final = %0.2f", valorFinal);
}