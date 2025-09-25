#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1, num2;
	
	printf("Digite o primeiro número:\n");
	scanf("%d",&num1);
	
	printf("Digite o segundo número:\n");
	scanf("%d",&num2);
	
	if(num1 > num2)
		printf("O primeiro número: ",num1,". É maior que o segundo número: ",num2,".");
	else
		printf("O segundo número: ",num2,". É maior que o primeiro número: ",num1,".");
}