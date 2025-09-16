#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int numeroSecreto, jogo;

  printf("Dígite um número de 1 a 3\n");
  printf("1 para Pedra, 2 para Papel e 3 para Tesoura\n");
  scanf("%d", &jogo);
  srand(time(NULL));

numeroSecreto = rand() % 3 + 1; 

printf("Computador escolheu: ");
    switch (numeroSecreto) {
        case 1: printf("Pedra\n"); break;
        case 2: printf("Papel\n"); break;
        case 3: printf("Tesoura\n"); break;}

  if(jogo == numeroSecreto){
    printf("você empatou o jogo");
  }
else if((jogo == 1) && (numeroSecreto == 3) ||
        (jogo == 2) && (numeroSecreto == 1) ||
        (jogo == 3) && (numeroSecreto == 2)){
            printf(" você venceu o jogo");
        }
 else if ((jogo == 3) && (numeroSecreto == 1) ||
        (jogo == 1) && (numeroSecreto == 2) ||
        (jogo == 2) && (numeroSecreto == 3)) {
            printf("você perdeu");
        }
  return 0;
}