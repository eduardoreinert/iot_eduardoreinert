#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	
	//mostra a mensagem 
	printf("\nDigite a primeira nota: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&nota1);
	
	//mostra a mensagem 
	printf("\nDigite a segunda nota: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&nota2);
	
	//mostra a mensagem 
	printf("\nDigite a terceira nota: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("\n\nMédia final = %0.2f", media);
}