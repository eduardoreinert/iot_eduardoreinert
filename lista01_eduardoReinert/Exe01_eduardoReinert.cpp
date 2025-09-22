#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	float salario, novosalario;
	//mostra a mensagem 
	printf("\nDigite o slário do funcionário: ");
	//le o que o usuario inseriu
	scanf("%f%*c",&salario);
	//conta para novo salario
	novosalario = salario + salario * 25/100;
	//mostra o novo salario
	printf("\nNovo salário = %0.2f", novosalario);
	
	getchar();
	return 0;
}