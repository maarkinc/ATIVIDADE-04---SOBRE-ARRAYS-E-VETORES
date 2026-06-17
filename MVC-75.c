//MVC-75

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-75 - Preenchendo um vetor com FOR             *");
printf("\n**************************************************************\n");

int v[10];
int i;

    for(i = 0; i < 10; i++) {
        v[i] = i + 1;
    }

    for(i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}




