#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>

FILE *target;

void *Search()
{
	target = fopen("", r);




}



int main(int argc, char** argv[])
{

	pthread_t t[argc];
	int i;
	for(1=0;i<argc;i++)
	{
		pthread_create(&(t[i], NULL, &Search, (void*)argv[i]));
	}

	return 0;
}
