///Produtor Consumidor utilizando Mutexes
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define TF 10000
#define MAXTHREADS 2

int i = -1;
int vet[TF];

pthread_mutex_t mutex;
pthread_t t[MAXTHREADS];

void* produtor(void *arg) {
    int pos, item;
    while(1) {
      pthread_mutex_lock(&mutex);
      if (i<TF) {
        i++;
        pos=vet[i]=i;
        item=vet[i];
        pthread_mutex_unlock(&mutex);
        printf("\nProd: posicao %05d - valor %05d",pos,item);
      }
      else {
        pthread_mutex_unlock(&mutex);
	sched_yield();
      }
    }
}

void* consumidor(void *arg) {
    int pos, item;
    while(1) {
      pthread_mutex_lock(&mutex);
      if (i>-1) {
        item=vet[i];
        pos=i;
        vet[i]=0;
        i--;
        pthread_mutex_unlock(&mutex);
        printf("\nCons: posicao %05d - valor %05d",pos,item);
      }
      else {
        pthread_mutex_unlock(&mutex);
	sched_yield();
      }	
    }
}

void main(void)
{
    pthread_mutex_init(&mutex, NULL);
    pthread_create(&t[0], NULL, &produtor, NULL);
    pthread_create(&t[1], NULL, &consumidor, NULL);
    pthread_join(t[0], NULL);
    pthread_join(t[1], NULL);
    pthread_mutex_destroy(&mutex);
}

