#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

int StatusLohan = 100;
int StautsKepiting = 100;


void* lohan()
{
	while(1)
	{
		sleep(10);
		StatusLohan -= 15;
		if(StatusLohan>100 || StautsKepiting>100 || StatusLohan<=0 || StautsKepiting <=0)
	{
		printf("Game Berakhir");
		exit(EXIT_FAILURE);
	}
		
	}
}


void* kepiting()
{
	while(1)
	{
		sleep(20);
		StautsKepiting -= 10;
		if(StatusLohan>100 || StautsKepiting>100 || StatusLohan<=0 || StautsKepiting <=0)
	{
		printf("Game Berakhir");
		exit(EXIT_FAILURE);
	}
	}

}

void makan()
{
	int maam;
	printf("Kasih makanan\n");	
	printf("1. lohan, 2. kepiting\n");
	scanf("%d", &maam);
	if(maam==1)
	{
		StatusLohan += 10;
		if(StatusLohan>100 || StautsKepiting>100 || StatusLohan<=0 || StautsKepiting <=0)
	{
		printf("Game Berakhir");
		exit(EXIT_FAILURE);
	}
	}
	else if (maam==2)
	{	
		StautsKepiting += 10;
		if(StatusLohan>100 || StautsKepiting>100 || StatusLohan<=0 || StautsKepiting <=0)
	{
		printf("Game Berakhir");
		exit(EXIT_FAILURE);
	}
	}
}


int main()
{
	pthread_t lohan_t, kepiting_t;
	pthread_create(&lohan_t,NULL,StatusLohan,NULL);
	pthread_create(&kepiting_t,NULL,StautsKepiting,NULL);	

	int opsi;

	while(1)
	{
	printf("Status lohan = %d\n", StatusLohan);
	printf("Status kepiting = %d\n", StautsKepiting);			
	printf("1. berimakan 2. status\n");
	scanf("%d", &opsi);

	if(opsi==1)
	{
		makan();

	}
	else if(opsi==2){
		printf("Status Lohan: %d\n", StatusLohan);
		printf("Status Kepiting: %d\n", StatusKepiting)
	}
	
	if(StatusLohan>100 || StautsKepiting>100 || StatusLohan<=0 || StautsKepiting <=0)
	{
		printf("Game Berakhir");
		exit(EXIT_FAILURE);
	}

	}

	
}
