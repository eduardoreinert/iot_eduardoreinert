#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	
	float salario, bonusSalario, impostoSalario, novoSalario;
	//mostra a mensagem 
	printf("\nDigite o slário do funcionário: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&salario);
	//quanto sera retirado pelo imposto
	bonusSalario = salario * 5/100;
	//quanto sera adicionado pelo bonus
	impostoSalario = salario * 7/100;
	//novo salario
	novoSalario = salario - impostoSalario + bonusSalario;
	//print de varias informações
	printf("\nImposto pago = %0.2f", impostoSalario);
	printf("\nBonûs sobre o salário = %0.2f", bonusSalario);
	printf("\n\nSalário final = %0.2f", novoSalario);
}