//MVC-62

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-62 - Contagem regressiva usando --            *");
printf("\n**************************************************************\n");

       int i;

       for(i = 10; i >= 0; i--) {
        printf("%d  ", i);
    }

    return 0;
}

