#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main() {
    int quantidade1, quantidade2, quantidade3, escolha;
    int tam1, tam2, tam3;

    Queue *fila1 = CreateQueue(quantidade1);
    Queue *fila2 = CreateQueue(quantidade2);
    Queue *fila3 = CreateQueue(quantidade3);

    do {
        printf("\n1 - Leitura da fila1\n");
        printf("2 - Leitura da fila2\n");
        printf("3 - Leitura da fila3\n");
        printf("4 - Impressão das 3 filas\n");
        printf("5 - Criação do canal compartilhado\n");
        printf("6 - Impressão do canal compartilhado\n");
        printf("7 - Sair\n");

        scanf("%d", &escolha);  

        if (escolha == 1) {
            printf("Digite a quantidade na primeira fila \n");
            scanf("%d", &quantidade1);  
            for (int i = 0; i < quantidade1; i++) {  
                printf("Digite o valor a ser enfileirado para fila 1: ");
                scanf("%d", &tam1);  
                enqueue(fila1, tam1); 
            }
        }

        if (escolha == 2) {
            printf("Digite a quantidade na segunda fila \n");
            scanf("%d", &quantidade2);  
            for (int i = 0; i < quantidade2; i++) {  
                printf("Digite o valor a ser enfileirado para fila 2: ");
                scanf("%d", &tam2); 
                enqueue(fila2, tam2);
            }
        }

        if (escolha == 3) {
            printf("Digite a quantidade na terceira fila \n");
            scanf("%d", &quantidade3);  
            for (int i = 0; i < quantidade3; i++) {  
                printf("Digite o valor a ser enfileirado para fila 3: ");
                scanf("%d", &tam3);  
                enqueue(fila3, tam3);
            }
        }

        if (escolha == 7) {
            printf("Saindo do programa...\n");
        }

    } while (escolha != 7); 

    return 0;
}
