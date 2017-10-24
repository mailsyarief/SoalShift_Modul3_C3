#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
//#include <sys/ipc.h>
//#include <sys/shm.h>
const char* namasenjata[7]={"MP4A1","PM2-V1","SPR-3","SS2-V5","SPG1-V3","MINE"};
int jumlahsejata[7];

void LihatStock()
{
	for(int i=0;i<6;i++){
		printf("%s %d\n", namasenjata[i], jumlahsejata[i]);
	}
}

int nambah = 0;
void TambahStock()
{
	printf("Masukan Nama senjata\n");
	char ns[100];
	scanf("%s", ns);
	if(strcmp(ns,"MP4A1")==0)
	{
		printf("Masukan jumlah stok tambahan\n");
		scanf("%d", &nambah);
		jumlahsejata[0] += nambah;

	}
	else if(strcmp(ns,"PM2-V1")==0)
	{
		printf("Masukan jumlah stok tambahan\n");
		scanf("%d", &nambah);
		jumlahsejata[1] +=  nambah;
		
	}
	else if(strcmp(ns,"SPR-3")==0)
	{
		printf("Masukan jumlah stok tambahan\n");
		scanf("%d", &nambah);
		jumlahsejata[2] +=  nambah;

	}
	else if(strcmp(ns,"SS2-V5")==0)
	{
		printf("Masukan jumlah stok tambahan\n");
		scanf("%d", &nambah);
		jumlahsejata[3] +=  nambah;
		
	}
	else if(strcmp(ns,"SPG-V3")==0)
	{
		printf("Masukan jumlah stok tambahan\n");
		scanf("%d", &nambah);
		jumlahsejata[4] += nambah;
		
	}
	else if(strcmp(ns,"MINE")==0)
	{
		printf("Masukan jumlah stok tambahan\n");
		scanf("%d", &nambah);
		jumlahsejata[5] += nambah;
		
		
	}
	else
	{
		printf("Bang Hawari salah input\n");
	}


	printf("1 = Lihat Stock , 2 = Tambah Stock, 3.Quit\n");

}

void main()
{
	int m;
	for(int i=0;i<6;i++) jumlahsejata[i]=99;
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

