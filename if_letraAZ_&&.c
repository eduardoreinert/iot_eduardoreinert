#include <stdio.h>

int main(){
	char ch;
	printf("Digite uma letra entre A e Z:\n");
	ch = getchar();
	if((ch >= 'A') && (ch <= 'Z'))
		printf("Você acertou!");
}