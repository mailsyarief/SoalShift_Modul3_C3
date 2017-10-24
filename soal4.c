#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *faktorial(void *fak)
{
    int faktor = (int *) fak;
    for(i=1:i<faktor;i++)
    {
        total *= i;
    } 
    printf("hasil %d = %d\n", faktor, total);

}

int total=1;
int i;
input[100];
input1[100];
int convert,len;


int main()
{
    pthread_t thread;
    while(scanf("%s",input)&&strcmp(input,"\n"))
    {
        convert = atoi(input);
        printf("%d", convert);
    }
}
