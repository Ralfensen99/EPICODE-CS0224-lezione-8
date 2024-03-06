#include <stdio.h>

void CalcoloMoltiplicazione(){
    int X,Y;
    printf("Inserisci il primo numero da moltiplicare");
    scanf("%d", &X);
    printf("Inserisci il secondo numero da moltiplicare");
    scanf("%d", &Y);
    printf("il risultato della moltiplicazione e': %d\n", (X*Y));
}
void CalcolaMedia(){
    int X,Y;
     printf("Inserisci il primo numero intero: ");
    scanf("%d", &X);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &Y);
    
    printf("La media e': %lf \n", (X+Y) / 2.0);
}

int main(){
    int scegli=0;
        while (1) {
        printf("\nScegli cosa vuoi fare:\n");
        printf("1. Calcola la moltiplicazione di due numeri\n");
        printf("2. Calcola la media di due numeri\n");
        printf("3. Esci\n");
        printf("Inserisci la tua scelta (1, 2, 3): ");
        scanf("%d", &scegli);

        switch(scegli) {
            case 1:
                 CalcoloMoltiplicazione();
                break;
            case 2:
                CalcolaMedia();
                break;
            default:
                printf("Not valid! try again.\n");
        }
              
            }
         
}
