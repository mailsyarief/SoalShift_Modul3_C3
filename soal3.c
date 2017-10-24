#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

int StatusLohan = 100;
int StautsKepiting = 100;
int opsi;


void* lohan()
{
	while(1)
	{
		sleep(10);
		StatusLohan -= 15;
		
	}
}


void* kepiting()
{
	while(1)
	{
		sleep(20);
		StautsKepiting -= 10;
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
	}
	else if (maam==2)
	{	
		StautsKepiting += 10;
	}
}

int main()
{
	pthread_t lohan_t;
	pthread_t kepiting_t;

	
	printf("1. menu 2. status lohan, 3. Status kepiting\n");
	scanf("%d", &opsi);
	while(1)
	{
	if(opsi==1)
	{
		makan();

	}
	else if(opsi==2)
	{
		printf("Status lohan = %d\n", StatusLohan);
		continue;
			
	}
	else if(opsi ==3)
	{
		printf("Status kepiting = %d\n", StautsKepiting);		
		continue;
	}
	else
	{
		break;
	}
	}

	pthread_create(&(lohan_t),NULL,&StatusLohan,NULL);
	pthread_create(&(kepiting_t),NULL,&StautsKepiting,NULL);
	
}
