#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int mes, dia;
	
	printf("Digite o seu dia de nascimento\n");
	scanf("%d",&dia);
	
	printf("Digite o seu mês de nascimento\n");
	scanf("%d",&mes);
	
	switch(mes){
		case 1:
			if((dia >= 1) && (dia <= 19))
				printf("Seu signo é Capricórnio!");
			else
				printf("Seu signo é Aquário!");
				
			break;
		
		case 2:
			if((dia >= 1) && (dia <= 18))
				printf("Seu signo é Aquário!");
			else
				printf("Seu signo é Peixes!");
				
			break;
				
		case 3:
			if((dia >= 1) && (dia <= 20))
				printf("Seu signo é Peixes!");
			else
				printf("Seu signo é Áries!");
				
			break;
				
		case 4:
			if((dia >= 1) && (dia <= 19))
				printf("Seu signo é Áries!");
			else
				printf("Seu signo é Touro!");
				
			break;
				
		case 5:
			if((dia >= 1) && (dia <= 20))
				printf("Seu signo é Touro!");
			else
				printf("Seu signo é Gêmeos!");
				
			break;
				
		case 6:
			if((dia >= 1) && (dia <= 21))
				printf("Seu signo é Gêmeos!");
			else
				printf("Seu signo é Câncer!");
				
			break;
				
		case 7:
			if((dia >= 1) && (dia <= 21))
				printf("Seu signo é Câncer!");
			else
				printf("Seu signo é Leão!");
				
			break;
				
		case 8:
			if((dia >= 1) && (dia <= 22))
				printf("Seu signo é Leão!");
			else
				printf("Seu signo é Virgem!");
				
			break;
				
		case 9:
			if((dia >= 1) && (dia <= 22))
				printf("Seu signo é Virgem!");
			else
				printf("Seu signo é Libra!");
				
			break;
				
		case 10:
			if((dia >= 1) && (dia <= 22))
				printf("Seu signo é Libra!");
			else
				printf("Seu signo é Escorpião!");
				
			break;
				
		case 11:
			if((dia >= 1) && (dia <= 21))
				printf("Seu signo é Escorpião!");
			else
				printf("Seu signo é Sagitário!");
				
			break;
				
		case 12:
			if((dia >= 1) && (dia <= 21))
				printf("Seu signo é Sagitário!");
			else
				printf("Seu signo é Capricórnio!");
			
			break;
		
		default:
			printf("Mês inválido!");
			break;
	}
}