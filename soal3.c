#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

int Lohan=99;
int Kepiting=99;

void *inikepiting(void *arg){
	while(1){
		sleep(20);
		Kepiting-=10;
		if(Kepiting <= 0 || Kepiting > 100){
			printf("Game berkahir\n");
			exit(EXIT_FAILURE);		
		}
	}
}

void *inilohan(void *arg){
	while(1){
		sleep(10);
		if(Lohan <= 10 || Lohan > 100){
			printf("Game berakhir\n");
			exit(EXIT_FAILURE);
		}
	}
}

void makan(){
	printf("Anda akan memberi makan hewan.\n");
	printf("Hewan yang ingin diberi makan\n");
	printf("1. Lohan\t2.Kepiting\n");
	int maam; scanf("%d", &maam);
	if(maam==1){
		printf("Lohan diberi makan\n");
	}
	if(maam==2){
		printf("Kepiting diberi makan\n");
	}
}

int main()
{
	pthread_t lohan_t, kepiting_t;
	pthread_create(&lohan_t,NULL,&inilohan,NULL);
	pthread_create(&kepiting_t,NULL,&inikepiting,NULL);	

	int opsi;

	while(1)
	{
		printf("Status lohan = %d\n", Lohan);
		printf("Status kepiting = %d\n", Kepiting);			
		printf("1. berimakan 2. status\n");
		scanf("%d", &opsi);

		if(opsi==1){
			makan();
		}
		else if(opsi==2){
			printf("Status Lohan: %d\n", Lohan);
			printf("Status Kepiting: %d\n", Kepiting);
		}	
		if(Lohan > 100 || Lohan <= 100 || Kepiting > 100 || Kepiting <= 100){
			printf("Game berakhir\n");			
			break;
		}

	}
}
