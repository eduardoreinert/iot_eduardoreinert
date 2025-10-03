#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int X[10][6];
	int i,j;
	
	for(i=0;i<10;i++)
	{
	for(j=0;j<6;j++){
		
	}
		printf("|%d|",X[i][j]);	
	}
}