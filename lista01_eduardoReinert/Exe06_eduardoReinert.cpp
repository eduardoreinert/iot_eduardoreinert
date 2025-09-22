#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, peso1, peso2, peso3, resultado1, resultado2, mediaPonderada;
	
	//mostra a mensagem 
	printf("\nDigite a primeira nota: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&nota1);
	
	//mostra a mensagem 
	printf("\nDigite o peso da primeira nota: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&peso1);
	
	//mostra a mensagem 
	printf("\nDigite a segunda nota: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&nota2);
	
	//mostra a mensagem 
	printf("\nDigite o peso da segunda nota: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&peso2);
	
	//mostra a mensagem 
	printf("\nDigite a terceira nota: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&nota3);
	
	//mostra a mensagem 
	printf("\nDigite o peso da terceira nota: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&peso3);
	
	resultado1 = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3);
	resultado2 = peso1 + peso2 + peso3;
	
	mediaPonderada = resultado1/resultado2;
	
	printf("\n\nMédia ponderada = %0.2f", mediaPonderada);
}