#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

input[100];
int convert;
int main()
{
    pthread_t thread;
    while(scanf("%s",input)&&strcmp(input,"\n"))
    {
        convert = atoi(input);
        printf("%d", convert);
    }
}
