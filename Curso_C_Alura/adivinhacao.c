#include <stdio.h>
#include <stdlib.h>
#define TENTATIVAS 5

int main(){
    //imprime o cabecalho do jogo
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("x Bem vindo ao jogo de adivinhacao  x\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    int numSec = 42;
    //int TENTATIVAS = 5;
    int chute, tentativa;
    
    for(tentativa = 1; tentativa <= TENTATIVAS; tentativa++) {
        
        printf("Tentativa %d de %d.\n", tentativa, TENTATIVAS);
        printf("Qual é o seu chute?\n");
        scanf("%d", &chute);
        
        printf("Seu chute foi: %d.\n\n", chute);
        
        int acertou = (chute == numSec);
        int maior = chute > numSec;
        int menor = chute < numSec;
        
        if(chute == numSec){
        
        printf("Parabéns! Você acertou!\n\n");
        break;
        
        } 
        
        else if(maior){
                printf("Seu chute foi maior que o número secreto.\n\n");
        }
        
        else {
                printf("Seu chute foi menor que o número secreto.\n\n");
        }
    }
    
    printf("\n\nFim de jogo!");
}
