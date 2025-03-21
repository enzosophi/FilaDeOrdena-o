/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main()
{
	int quantidade1, quantidade2, quantidade3, escolha;


	printf("1 - Leitura da fila1\n");
	printf("2 - Leitura da fila2\n");
	printf("3 - Leitura da fila3\n");
	printf("4 - ImpressC#o das 3 filas\n");
	printf("5 - CriaC'C#o do canal compartilhado\n");
	printf("6 - ImpressC#o do canal compartilhado\n");
	printf("Canal compartilhado: dado1, dado2, dado3\n");
	printf("7 - Sair\n");

	scanf("%d", escolha);
	if(escolha==1) {
		printf("Digite a quantidde na primeira fila \n");
		scanf("%d", quantidade1);
		for(int i =0; i<=quantidade1;i++) {
			Queue *fila = CreateQueue(quantidade1);
			i++;
		}
	}

	if(escolha==2) {
		printf("Digite a quantidde na primeira fila \n");
		scanf("%d", quantidade2);
		for() {
			Queue *fila2 = CreateQueue(quantidade2);
		}
	}

	if(escolha==3) {
		printf("Digite a quantidde na primeira fila \n");
		scanf("%d", quantidade2);
		for() {
			Queue *fila3 = CreateQueue(quantidade3);
		}
	}
	Queue *filaFluxo = CreateQueue(quantidade1+quantidade2+quantidade3);

	Queue *filaValores = CreateQueue(q; uantidade1+quantidade2+quantidade3);
	//inserir valores

	//para print
	printQueue(fila,1);
	printf("Removido: %d\n", dequeue(fila));
	enqueue(fila, 5);

	printQueue(fila, 1);
	return 0;
}
