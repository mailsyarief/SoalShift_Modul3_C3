#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *Search(void *arg)
{
	FILE *f;
	f=fopen("Novel.txt", "r");
	char kata[100];
	strcpy(kata,arg);
	int count;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	while(getline(&line, &len, f)!= -1){
		if(strstr(line, kata)!=NULL){
		count++;
		}
	}
	printf("%s: %d\n",kata, count);
}



int main(int argc, char** argv[])
{

	pthread_t t[argc];
	int i;
	for(i=0;i<argc;i++)
	{
		pthread_create(&(t[i]), NULL, &Search, (void*)argv[i]);
	}
	for(i=0;i<argc;i++){
		pthread_join(t[i], NULL);	
	}

	return 0;
}
