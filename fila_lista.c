#include <stdio.h>
#include <stdlib.h>
#include "fila_lista.h"


/*no da lista*/
struct lista
{
    float info;
    struct lista *prox;
};


/*estrutura da pilha*/
struct fila
{
    Lista* ini;
    Lista* fim;
};

Fila* fila_cria(void)
{
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

Fila* fila_insere(Fila* f,float v)
{
    Lista*n = (Lista*)malloc(sizeof(Lista));
    n->info = v;             /*armazena informacao*/
    n->prox = NULL;          /*novo noh passa a ser o ultimo*/
    if(f->fim != NULL)       /*verifica se lista nao esta vazia*/
        f->fim->prox = n;
    else                     /*fila estava vazia*/
        f->ini = n;
    f->fim = n;
    return f;            /*fila aponta para novo elemento*/
}

float fila_retira(Fila* f)
{
    Lista* t;
    float v;
    if(fila_vazia(f))
    {
        printf("fila vazia.\n");
        exit(1);/*aborta programa*/
    }
    t = f->ini;
    v = t->info;
    f->ini = t->prox;
    if(f->ini == NULL)
        f->fim = NULL;
    free(t);
    return v;
}


int tamanho_fila(Fila* f)
{
    Lista* p;
    int cont = 1;
    for(p = f->ini; p->prox!=NULL; p=p->prox)
    {
        cont++;
    }
    return cont;
}

void f_somatorio(Fila* f,int n)
{
    Lista* p;
    float c = 0;
    int conta = 1;
    float aux;

    if(p == NULL)
    {
        printf("fila vazia");
        exit(1);
    }

    if(n > tamanho_fila(f))
    {
        printf("o valor especificado eh maior que a fila");
    }
    else
    {
        for(p = f->ini; p->prox!=NULL ; p=p->prox,conta++)
        {

            c=c+p->info;

            if( n == conta)
            {
                printf("\n\no somatorio dos n elementos da fila eh:\n\n%.2f",c);
            }
        }

    }

}


void fila_somatorio(Fila* f)
{
    Lista* p;
    int aux,cont = 0;
    if(p == NULL)
    {
        printf("fila vazia");
        exit(1);
    }
    else
    {
        for(p = f->ini; p!=NULL; p=p->prox)
        {
            aux = p->info;
            cont+=aux;
        }
    }
    printf("o somatorio eh:\n\n%d",cont);

}
/*Fila* fila_concatena(Fila *f1, Fila *f2)
{
    Fila *p;

    for(p = f1 ; p->fim->prox!=NULL;p = p->fim->prox)
    {
    }
        p->fim->prox = f2->ini;

        return f1;
}*/


Fila* fila_intercala(Fila *f1, Fila *f2,Fila *f3)
{

    Lista* q = f1->ini;
    Lista* t = f2->ini;

    while(q!=NULL)
    {

        fila_insere(f3,q->info);
        q = q->prox;
        fila_insere(f3,t->info);
        t= t->prox;

    }



    return f3;
}

void se_fila_vazia(Fila* f3, Fila* f)
{
    Lista* aux = f->ini;
    while (aux != NULL)
    {
        Lista* t = aux;
        fila_insere(f3, aux->info);
        aux = aux->prox;
        free(t);
    }
}
/*void fila_imprime_inverte(Fila *f)
{
     Lista* q;
    for(q = f->fim; q>=f->ini; q--)
    {
        printf("\n%.2f",q->info);
    }

}
*/
void fila_imprime(Fila* f)
{
    Lista* q;
    for(q = f->ini; q!=NULL; q=q->prox)
        printf("%.2f\n",q->info);
}

int fila_vazia(Fila* f)
{
    return(f->ini==NULL);
}

void fila_libera(Fila* f)
{
    Lista* q = f->ini;
    while(q!=NULL)
    {
        Lista* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}
/*
static int decr (int i)
{
    return (i -1+N)%N;
}

void fila2_insere_ini(Fila* f, folat v)
{
    int prec;
    if(f->n == N)
    {
        printf("Capacidade da fila estourou.\n");
        exit(1);
    }
    /*insere elemento na posicao precedente ao inicio
    prec = (if->ini - 1 + N) % N;
    f->vet[prec] = v;
    f->ini = prec;/*atualiza indice para o inicio
    f->n++;
}

float fila2_retira_fila(Fila* f)
{
    int ult;
    float v;

    if(fila2_vazia(f))
    {
        printf("fila vazia.\n");
        exit(i);
    }
    /*retira elento da lista
    ult = (f->ini + f->n - 1) % N;
    v = f->vet[ult];
    f->n--;
    return v;
}


/*implementacao de fila dupla com lista

struct lista2
{
    int info;
    struct lista2 *ant;
    struct lista2 *prox;
};

struct fila2
{
    Lista2* ini;
    Lista2* fim;
};


/*funcao auxiliar:insere no iicio
static Lista2* ins2_ini(lista2* ini,float v)
{
    Lista2*n = (Lista2*)malloc(sizeof(Lista2));
    p->info = v;
    p->prox = ini;
    p->ant = NULL;
    if(ini != NULL)    /*verifica se a lista nao estava vazia
    ini->ant = p;
    return p;
}


/*funcao auxiliar:insere no fim
static Lista2* ins2_fim(lista2* fim,float v)
{
    Lista2*n = (Lista2*)malloc(sizeof(Lista2));
    p->info = v;
    p->prox = NULL;
    p->ant = fim;
    if(ini != NULL)   /*verifica se a lista nao estava vazia
    fim->prox = p;
    return p;
}


/*funcao auxiliar:retira do iicio
static Lista2* ret2_ini(lista2* ini)
{
    Lista2* p = ini->prox;
    if(p != NULL)             /*verifica se a lista nao ficou vazia
    p->ant = NULL;
    free(ini);
    return p;
}

/*funcao auxiliar:retira do fim
static Lista2* ret2_fim(lista2* fim)
{
    Lista2* p = fim->ant;
    if(p != NULL)            /*verifica se a lista nao ficou vazia
    p->prox = NULL;
    free(fim);
    return p;
}

void fila2_insere_ini(Fila2* f, float v)
{
    f->ini = ins2_ini(f->ini,v);
    if(f->fim==NULL)/*fila antes vazia?
    f->fim = f->ini;
}

void fila2_insere_fim(Fila2* f, float v)
{
    f->fim = ins2_fim(f->fim,v);
    if(f->ini==NULL)          /*fila antes vazia?
    f->ini = f->fim;
}

float fila2_retira_ini(Fila2* f)
{
    float v;
    if(fila2_vazia(f)){
        printf("fila vazia.\n");
        exit(1);              /*aborta programa
    }
    v = f->ini->info;
    f->ini = ret2_ini(f->ini);
    if(f->ini = NULL)         /*fila ficou vazia?
    f->fim = NULL;
    return v;
}

float fila2_retira_fim(Fila2* f)
{
    float v;
    if(fila2_vazia(f)){
        printf("fila vazia.\n");
        exit(1);              /*aborta programa
    }
    v = f->fim->info;
    f->fim = ret2_fim(f->fim);
    if(f->fim = NULL)         /*fila ficou vazia?
    f->ini = NULL;
    return v;
}*/



