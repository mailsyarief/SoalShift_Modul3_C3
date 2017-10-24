#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

int main(int argc, char** argv)
{
    pthread_t t[argc];
    int i, convert;

    for(i=0;i<argc;i++)
    {
        convert = atoi(argv[i]);
        pthread_create(&(t[i]),NULL,&factorial,(void*)convert);
    }
}
