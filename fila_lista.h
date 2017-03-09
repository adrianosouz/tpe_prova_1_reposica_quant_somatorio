#ifndef FILA_LISTA_H_INCLUDED
#define FILA_LISTA_H_INCLUDED

typedef struct lista Lista;

typedef struct fila Fila;

Fila* fila_cria(void);

Fila* fila_insere(Fila* f,float v);

float fila_retira(Fila* f);

/*Fila* fila_concatena(Fila *f, Fila *f2);*/

Fila* fila_intercala(Fila *f1, Fila *f2,Fila *f3);

void fila_imprime(Fila* f);

int tamanho_fila(Fila* f);

void fila_somatorio(Fila* f);

void f_somatorio(Fila* f,int n);

void se_fila_vazia(Fila* f3, Fila* f);

/*void fila_imprime_inverte(Fila *f);*/

int fila_vazia(Fila* f);

void fila_libera(Fila* f);

/*void pilha_imprime_quant(Pilha* p);

void pilha_imprime_par(Pilha* p);

void pilha_imprime_quant_par(Pilha* p);

void pilha_imprime_impar(Pilha* p);

void pilha_imprime_par_impar(Pilha* p);

int reempilha(Pilha* p, Pilha* p_par, Pilha* p_impar);*/

#endif // FILA_LISTA_H_INCLUDED
