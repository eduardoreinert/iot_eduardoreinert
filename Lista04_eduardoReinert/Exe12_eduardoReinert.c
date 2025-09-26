#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int anoAtual,ano, diferenca, i;
	float porcentagem, novoSalario, aumento;
	
	printf("Salário inicial de 2018: 1.000,00");
	printf("\n\nDigite o ano atual: ");
	scanf("%d",&anoAtual);
	
	ano = 2018;
	diferenca = anoAtual - ano;
	porcentagem = 15;
	
	for(i = 1;i <= diferenca; i++){
		aumento = 1000 * (porcentagem/100);
		novoSalario = 1000 + aumento;
		printf("\n\nNo ano %d o salario aumentou em %0.2f resulatando em %0.2f",ano+i,aumento,novoSalario);
		porcentagem = porcentagem * 2;
	}
}