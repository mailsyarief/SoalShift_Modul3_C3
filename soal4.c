#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void* factorial(void* oper)
{
    int count = (int*) oper;
    int total = 1;
    int i;
    for(i=0;i<count;i++)
    {
        total *= i;
    }
    printf("Hasil %d = %d\n", count, total);
}


int main(int argc, char** argv)
{
    pthread_t t[argc];
    int i, convert;

    for(i=0;i<argc;i++)
    {
        convert = atoi(argv[i]);
        pthread_create(&(t[i]),NULL,&factorial,(void*)convert);
    }
  for(i=0;i<argc; i++)
  {
    pthread_join(t[i], NULL);
  }
}
