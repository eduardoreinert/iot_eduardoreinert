#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	
	float salario, bonusSalario, impostoSalario, novoSalario;
	//mostra a mensagem 
	printf("\nDigite o slário do funcionário: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&salario);
	
	bonusSalario = salario * 5/100;
	
	impostoSalario = salario * 7/100;
	
	novoSalario = salario - impostoSalario + bonusSalario;
	
	printf("\nImposto pago = %0.2f", impostoSalario);
	printf("\nBonûs sobre o salário = %0.2f", bonusSalario);
	printf("\n\nSalário final = %0.2f", novoSalario);
}