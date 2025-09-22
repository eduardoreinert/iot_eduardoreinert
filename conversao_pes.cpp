#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	float pes, polegadas, jardas, milhas;
	
	//mostra a mensagem 
	printf("\nDigite o valor em pés: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&pes);
	
	polegadas = pes * 12;
	jardas = pes / 3;
	milhas = pes / 5280;
	
	printf("\nValor em pés digitado = %0.2f", pes);
	printf("\nValor em polegadas = %0.2f", polegadas);
	printf("\nValor em jardas = %0.2f", jardas);
	printf("\nValor em milhas = %0.2f", milhas);
}