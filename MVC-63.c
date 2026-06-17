//MVC-63

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-63 - Soma usando +=                           *");
printf("\n**************************************************************\n");

   int v[5], positivos = 0;
   int i;
   
   printf("DIGITE 5 NUMEROS:   ");
   
    for(i = 0; i < 5; i++) {
        scanf("%d", &v[i]);

        if(v[i] > 0) {
            positivos++;
        }
    }

    printf("Positivos: %d\n", positivos);

    return 0;
}






