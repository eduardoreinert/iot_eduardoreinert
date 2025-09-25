#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int opcao;
	float salario, novoSalario, imposto;
	
	printf("MENU DE OPÇÕES:\n\n 1. Imposto \n 2. Novo salário \n 3. Classificação \n\n Digite a opção desejada.");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			printf("Digite o salário: \n");
			scanf("%f",&salario);
			
			if(salario < 500)
				imposto = salario * 5/100;
				printf("O valor do imposto sobre o salário ficou: ",imposto);
			else if((salario >= 500) && (salario <= 850))
				imposto = salario * 10/100;
				printf("O valor do imposto sobre o salário ficou: ",imposto);
			else
				imposto = salario * 15/100;
				printf("O valor do imposto sobre o salário ficou: ",imposto);
				
		case 2:
			
	}
}