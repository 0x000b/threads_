///Produtor Consumidor Mutexes
#include <stdio.h>
#include <windows.h>
#include <process.h>
#define TF 10000

int i = -1;
int vet[TF];

HANDLE mutex;

void produtor(void) {
    int pos, item;
    while(1) {
      WaitForSingleObject(mutex,INFINITE);
      if (i<TF) {
        i++;
        pos=vet[i]=i;
        item=vet[i];
        ReleaseMutex(mutex);
        printf("\nProd: posicao %05d - valor %05d",pos,item);
      }
      else {
        ReleaseMutex(mutex);
        SwitchToThread();
      }
    }
}

void consumidor(void) {
    int pos, item;
    while(1) {
      WaitForSingleObject(mutex,INFINITE);
      if (i>-1) {
        item=vet[i];
        pos=i;
        vet[i]=-1;
        i--;
        ReleaseMutex(mutex);
        printf("\nCons: posicao %05d - valor %05d",pos,item);
      }
      else {
        ReleaseMutex(mutex);
        SwitchToThread();
      }
    }
}

void main(void)
{
    mutex=CreateMutex(NULL,FALSE,NULL);
    _beginthread(produtor,NULL,NULL);
    _beginthread(consumidor,NULL,NULL);
    getch();
}
