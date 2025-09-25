#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1, num2, num3, maior;
	
	printf("Digite o primeiro número inteiro:\n");
	scanf("%d",&num1);
	
	printf("Digite o segundo número inteiro:\n");
	scanf("%d",&num2);
	
	printf("Digite o terceiro número inteiro:\n");
	scanf("%d",&num3);
	
	if(num1 >= num2 && num1 >= num3)
		printf("O primeiro número é o maior");
	else if(num2 >= num1 && num2 >= num3)
		printf("O segundo número é o maior");
	else
		printf("O terceiro número é o maior");
}
		