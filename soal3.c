#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

int hewan[2];

void *inikepiting(void *arg){
	while(1){
		sleep(20);
		hewan[1]=hewan[1]-10;
		if(hewan[1] <= 0 || hewan[1] > 100 || hewan[0] <= 0 || hewan[0] > 100){
			//printf("Game berkahir\n");
			exit(EXIT_FAILURE);		
		}
		/*else{
		printf("Lohan: %d\tKepiting: %d\n", hewan[0], hewan[1]);
		}*/
	}
}

void *inilohan(void *arg){
	while(1){
		sleep(10);
		hewan[0]=hewan[0]-15;
		if(hewan[1] <= 0 || hewan[1] > 100 || hewan[0] <= 0 || hewan[0] > 100){
			//printf("Game berakhir\n");
			exit(EXIT_FAILURE);
		}
		/*else{
		printf("Lohan: %d\tKepiting: %d\n", hewan[0], hewan[1]);
		}*/
	}
}

void makan(){
	printf("Anda akan memberi makan hewan.\n");
	printf("Hewan yang ingin diberi makan\n");
	printf("1. Lohan\t2.Kepiting\n");
	int maam; scanf("%d", &maam);
	if(maam==1){
		hewan[0]+=10;
		printf("Lohan: %d\tKepiting: %d\n", hewan[0], hewan[1]);
	}
	if(maam==2){
		hewan[1]+=10;
		printf("Lohan: %d\tKepiting: %d\n", hewan[0], hewan[1]);	
	}
}

int main()
{
	hewan[0]=100;
	hewan[1]=100;
	pthread_t lohan_t, kepiting_t;
	pthread_create(&lohan_t,NULL,&inilohan,NULL);
	pthread_create(&kepiting_t,NULL,&inikepiting,NULL);	

	int opsi;

	while(1)
	{
		if(hewan[1] <= 0 || hewan[1] > 100 || hewan[0] <= 0 || hewan[0] > 100){
			printf("Status lohan = %d\n", hewan[0]);
			printf("Status kepiting = %d\n", hewan[1]);
			exit(EXIT_FAILURE);
		}
		else{			
			printf("1. Beri Makan 2. Status\n");
			scanf("%d", &opsi);

			if(opsi==1){
				makan();
			}
			else if(opsi==2){
				printf("Status Lohan: %d\n", hewan[0]);
				printf("Status Kepiting: %d\n", hewan[1]);
			}	
		}
	}
}
