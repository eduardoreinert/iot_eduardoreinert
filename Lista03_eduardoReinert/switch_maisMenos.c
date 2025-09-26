#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char op;
	float num1, num2;
	printf("Digite um numero, escolha um operador e digite outro numero\n");
	scanf("%f %c %f",&num1, &op, &num2);
	
	if(op == '/')
	
	switch(op){
		case '+':
			printf(" = %0.2f",num1+num2);
			break;
		case '-':
			printf(" = %0.2f",num1 - num2);
			break;
		case 'x':
			printf(" = %0.2f",num1 * num2);
			break;
		case '/':
			if((num1 == 0) || (num2 == 0)){
				printf("Não é possível dividir por 0");
				break;
			} else {
				printf(" = %0.2f",num1 / num2);
				break;
			}
		default:
			printf("Operador inválido!");
	}
}