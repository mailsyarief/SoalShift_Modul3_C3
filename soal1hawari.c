#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
char namasenjata[6][10]={"MP4A1","PM2-V1","SPR-3","SS2-V5","SPG1-V3","MINE"};
int jumlahsejata[6];

void LihatStock()
{

	if(jumlahsejata[0]>0)
	{
		printf("%s = %d\n", namasenjata[0], jumlahsejata[0]);
	}
	if(jumlahsejata[1]>0)
	{
		printf("%s = %d\n", namasenjata[1], jumlahsejata[1]);
	}
	if(jumlahsejata[2]>0)
	{
		printf("%s = %d\n", namasenjata[2], jumlahsejata[2]);
	}
	if(jumlahsejata[3]>0)
	{
		printf("%s = %d\n", namasenjata[3], jumlahsejata[3]);
	}
	if(jumlahsejata[4]>0)
	{
		printf("%s = %d\n", namasenjata[4], jumlahsejata[4]);
	}
	if(jumlahsejata[5]>0)
	{
		printf("%s = %d\n", namasenjata[5], jumlahsejata[5]);
	}

	printf("1 = Lihat Stock , 2 = Tambah Stock, 3.Quit\n");

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

	printf("1 = Lihat Stock , 2 = Tambah Stock, 3.Quit\n");
	int opsi;

while(1)
{
	nambah = 0;
	scanf("%d", &opsi);
	if(opsi == 1)
	{
		LihatStock();
	}
	else if(opsi == 2)
	{
		TambahStock();
	}
	else if(opsi == 3)
	{
		break;
	}
	else
	{
		printf("Bang hawari salah input\n");
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
}
