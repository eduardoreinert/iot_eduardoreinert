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
			
			if(salario < 500){		
				imposto = salario * 5/100;
				printf("O valor do imposto sobre o salário ficou: %0.2f",imposto);
			} else if((salario >= 500) && (salario <= 850)) {
				imposto = salario * 10/100;
				printf("O valor do imposto sobre o salário ficou: %0.2f",imposto);
			} else {
				imposto = salario * 15/100;
				printf("O valor do imposto sobre o salário ficou: %0.2f",imposto);
			}
			break;
				
		case 2:
			printf("Digite o salário: \n");
			scanf("%f",&salario);
			
			if(salario > 1500){
				novoSalario = salario + 25;
				printf("O valor do salário com reajuste ficou: %0.2f",novoSalario);
			} else if((salario >= 750) && (salario <= 1500)){
				novoSalario = salario + 50;
				printf("O valor do salário com reajuste ficou: %0.2f",novoSalario);
			} else if((salario >= 450) && (salario <= 749)){
				novoSalario = salario + 75;
				printf("O valor do salário com reajuste ficou: %0.2f",novoSalario);
			} else
				novoSalario = salario + 100;
				printf("O valor do salário com reajuste ficou: %0.2f",novoSalario);
			break;
				
		case 3:
			printf("Digite o salário: \n");
			scanf("%f",&salario);
			if(salario <= 700){
				printf("Você é mal remunerado!");
			} else {
				printf("Você é bem remunerado!");
			}
			break;
		
		default:
			printf("Opção escolhida é inválida!");
			break;
			
	}
}