#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, num4, soma;
	
	//mostra a mensagem 
	printf("\nDigite o primeiro número: ");
	//le o que o usuario inseriu
	scanf("%d%*c",&num1);
	
	//mostra a mensagem 
	printf("\nDigite o segundo número: ");
	//le o que o usuario inseriu
	scanf("%d%*c",&num2);
	
	//mostra a mensagem 
	printf("\nDigite o terceiro número: ");
	//le o que o usuario inseriu
	scanf("%d%*c",&num3);
	
	//mostra a mensagem 
	printf("\nDigite o quarto número: ");
	//le o que o usuario inseriu
	scanf("%d%*c",&num4);
	
	soma = num1 + num2 + num3 + num4;
	
	printf("\n\nResultado da soma = %d", soma);
}