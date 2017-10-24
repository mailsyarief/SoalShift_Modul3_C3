#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>


void main()
{
	key_t key = 1234;
	int *jumlah;
	const char* stok[7]={"MP4A1","PM2-V1","SPR-3","SS2-V5","SPG1-V3","MINE"};
	int shmid = shmget(key, sizeof(int)*3, IPC_CREAT | 0666);
	jumlah=shmat(shmid,NULL,0);
	int m;
	printf("Menu : \n1. Lihat Stock\t 2. Tambah Stock\n");
	while(scanf("%d", &m)&&m!=3){ 	
		if(m==1){
			for(int i=0;i<6;i++){
				printf("%s %d\n", stok[i], jumlah[i]);
			}
	  	}
	  	if (m==2){
			char ns[100]; int nambah;
			scanf("%s %d", ns, &nambah);
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
		printf("Menu : \n1. Lihat Stock\t 2. Tambah Stock\n");
	}
	shmdt(value);
	shmctl(shmid, IPC_RMID, NULL);
}
