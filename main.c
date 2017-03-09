#include <stdio.h>
#include <stdlib.h>
#include "fila_lista.h"
/*FILA: Sua ideia fundamental eh que soh podemos inserir um novo elemento no final da fila
e soh podemos retirar o elemento do inicio*/

int main()
{

    Fila* f;
    int x;

    f = fila_cria();


    if(fila_vazia(f) == 0)
        printf("A fila esta vazia");

    f = fila_insere(f,1);
    f = fila_insere(f,7);
    f = fila_insere(f,5);
    f = fila_insere(f,18);
    f = fila_insere(f,10);
    f = fila_insere(f,10);

    printf("\n\n");

    x = tamanho_fila(f);
    printf("a fila tem %d elementos\n\n",x);

    f_somatorio(f,3);

    fila_libera(f);


    return 0;
}


/*
int main()
{
    Fila* f = fila_cria();

    fila_insere(f,20.0);
    fila_insere(f,20.8);
    fila_insere(f,21.2);
    fila_insere(f,24.3);

    printf("\n\nPrimeiro elemento: %.2f\n\n",fila_retira(f));
    printf("Segundo elemento: %.2f\n\n",fila_retira(f));
    printf("Configuracao da fila:\n\n");
    fila_imprime(f);

    fila_retira(f);

    printf("Nova configuracao da fila:\n\n");
    fila_imprime(f);


     if(fila_vazia(f))
        printf("fila vazia");
     else
        printf("a fila nao esta vazia");


    fila_libera(f);

    return 0;
}*/

/*int main()
{

    Fila* f1;
    Fila* f2;
    Fila* f3;

    f1 = fila_cria();
    f2 = fila_cria();
    f3 = fila_cria();


    if(fila_vazia(f1) == 0)
        printf("A fila esta vazia");
    if(fila_vazia(f2) == 0)
        printf("A fila esta vazia");
    if(fila_vazia(f3) == 0)
        printf("A fila esta vazia");

    f1 = fila_insere(f1,1);
    f1 = fila_insere(f1,3);
    f1 = fila_insere(f1,5);
    printf("\n\nFila 1:\n\n");

    fila_imprime(f1);

    f2 = fila_insere(f2,2);
    f2 = fila_insere(f2,4);
    f2 = fila_insere(f2,6);

    printf("\n\nFila 2:\n\n");

    fila_imprime(f2);

    printf("\n\nFila3 concatenada e intercalada:\n\n");
    /*fila_concatena(f1,f2);*/
    /*fila_intercala(f1,f2,f3);
    fila_imprime(f3);



    fila_libera(f1);
    fila_libera(f2);
    fila_libera(f3);

    return 0;
}*/


/*
int main()
{
    Fila* f = fila_cria();

    fila_insere(f,20.0);
    fila_insere(f,20.8);
    fila_insere(f,21.2);
    fila_insere(f,24.3);

    printf("\n\nPrimeiro elemento: %.2f\n\n",fila_retira(f));
    printf("Segundo elemento: %.2f\n\n",fila_retira(f));
    printf("Configuracao da fila:\n\n");
    fila_imprime(f);

    fila_retira(f);

    printf("Nova configuracao da fila:\n\n");
    fila_imprime(f);


     if(fila_vazia(f))
        printf("fila vazia");
     else
        printf("a fila nao esta vazia");


    fila_libera(f);

    return 0;
}*/
