#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int alunos=1, alunosRep=0, alunosExm=0, alunosApr=0;
	float media, nota1, nota2, mediaTotal, somaMedias = 0;
	
	while(alunos <= 6){
		printf("Digite a primeira nota do %dº aluno: ",alunos);
		scanf("%f",&nota1);
		
		printf("Digite a segunda nota do %dº aluno: ",alunos);
		scanf("%f",&nota2);
		
		media = (nota1 + nota2) / 2;
		
		printf("A média do %d aluno é: %0.2f",alunos,media);
		
		somaMedias += media;
		
		if(media <= 3){
			printf("\nO aluno foi reprovado!\n\n");
			alunosRep++;
		} else if ((media > 4) && (media < 7)){
			printf("\nO aluno está de exame!\n\n");
			alunosExm++;
		} else {
			printf("\nO aluno foi aprovado!\n\n");
			alunosApr++;
		}
		
		alunos++;
		
	}
	printf("\nO número de alunos reprovados é: %d",alunosRep);
	printf("\nO número de alunos de exame é: %d",alunosExm);
	printf("\nO número de alunos aprovados é: %d",alunosApr);
	
	mediaTotal = somaMedias / 6;
	printf("\n\nA média total da classe é: %0.2f",mediaTotal);
}