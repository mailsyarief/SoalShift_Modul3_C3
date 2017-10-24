#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
const char* stok[7]={"MP4A1","PM2-V1","SPR-3","SS2-V5","SPG1-V3","MINE"};
int jumlah[7];

void LihatStock()
{
	for(int i=0;i<6;i++){
		printf("%s %d\n", stok[i], jumlah[i]);
	}
}

int nambah = 0;
void TambahStock()
{
	char ns[100]; int nambah;
	scanf("%s %d", ns, nambah);
	if(strcmp(ns,"MP4A1")==0)
	{
		jumlah[0] += nambah;
	}
	else if(strcmp(ns,"PM2-V1")==0)
	{
		jumlah[1] +=  nambah;
		
	}
	else if(strcmp(ns,"SPR-3")==0)
	{
		jumlah[2] +=  nambah;

	}
	else if(strcmp(ns,"SS2-V5")==0)
	{
		jumlah[3] +=  nambah;
		
	}
	else if(strcmp(ns,"SPG-V3")==0)
	{
		jumlah[4] += nambah;
		
	}
	else if(strcmp(ns,"MINE")==0)
	{
		jumlah[5] += nambah;
	}
	else
	{
		printf("Stok tidak tersedia.\n");
	}

}

void main()
{
	key_t key = 1234;
	int *jumlah[7];

	int shmid = shmget(key, sizeof(int), IPC_CREAT | 0666);
	jumlah[7]=shmat(shmid,NULL,0);
	int m;
	for(int i=0;i<6;i++) *jumlah[i]=99;
	printf("Menu : \n1. Lihat Stock\t 2. Tambah Stock\n");
	while(scanf("%d", &m)&&m!=3){ 	
		if(m==1){
			//printf("liat stok\n"); 
			LihatStock();
	  	}
	  	if (m==2){
	    		//printf("beli hehe\n");
			TambahStock();	  	
		}
		printf("Menu : \n1. Lihat Stock\t 2. Tambah Stock\n");
	}
}





        /*key_t key = 1234;
        int *value;

        int shmid = shmget(key, sizeof(int), IPC_CREAT | 0666);
        value = shmat(shmid, NULL, 0);

        *value = 10;

        printf("Program 1 : %d\n", *value);

        sleep(5);

        printf("Program 1: %d\n", *value);
        shmdt(value);
        shmctl(shmid, IPC_RMID, NULL);*/

