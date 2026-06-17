//MVC-72

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-72 - Multiplicando por 2 usando atribuição    *");
printf("\n**************************************************************\n");


int v[6];
int i;

printf("DIGITE 6 NUMEROS:  ");

    for(i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 6; i++) {
        v[i] = v[i] * 2;
    }

    for(i = 0; i < 6; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}






