///Produtor Consumidor Simples
#include <stdio.h>
#include <windows.h>
#include <process.h>
#define TF 10000

int i = -1;
int vet[TF];

void produtor(void) {
    while(1) {
      if (i<TF) {
        i++;
        vet[i]=i;
        printf("\nProd: posicao %05d - valor %05d",i,vet[i]);
      }
    }
}

void consumidor(void) {
    while(1) {
      if (i>-1) {
        printf("\nCons: posicao %05d - valor %05d",i,vet[i]);
        vet[i]=0;
        i--;
      }
    }
}

void main(void)
{
    _beginthread(produtor,NULL,NULL);
    _beginthread(consumidor,NULL,NULL);
    getch();
}
