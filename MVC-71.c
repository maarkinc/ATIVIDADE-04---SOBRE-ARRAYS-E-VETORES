//MVC-71

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-71 - Encontrando o maior valor                *");
printf("\n**************************************************************\n");


int v[8];
int negativos = 0;
int i;

printf("DIGITE 8 NUMEROS:  ");

    for(i = 0; i < 8; i++) {
        scanf("%d", &v[i]);

        if(v[i] < 0) {
            negativos++;
        }
    }

    printf("Negativos: %d\n", negativos);

    return 0;
}






