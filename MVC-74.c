//MVC-74

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-74 - Invertendo a ordem de exibição           *");
printf("\n**************************************************************\n");

int v[10];
int i;

printf("DIGITE 10 NUMEROS:  ");

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 9; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    return 0;
}



