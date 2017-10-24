#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

char namasenjata[5][10]={"MP4A1","PM2-V1","SPR-3","SS2-V5","SPG1-V3","MINE"};
int jumlahsejata[5];

void LihatStock()
{
	int opsi2;
	printf("1. MP4A1, 2. PM2-V1, 3. SPR-3, 4. SS2-V5, 5. SPG1-V3, 6. MINE\n");
	scanf("%d", &opsi2);
	if (opsi2==1)
	{
		printf("%s = %d\n", namasenjata[0], jumlahsejata[0]);
	}
	else if (opsi2==2)
	{
		printf("%s = %d\n", namasenjata[1], jumlahsejata[1]);
	}
	else if (opsi2==3)
	{
		printf("%s = %d\n", namasenjata[2], jumlahsejata[2]);
	}
	else if (opsi2==4)
	{
		printf("%s = %d\n", namasenjata[3], jumlahsejata[3]);
	}
	else if (opsi2==5)
	{
		printf("%s = %d\n", namasenjata[4], jumlahsejata[4]);
	}
	else if (opsi2==6)
	{
		printf("%s = %d\n", namasenjata[5], jumlahsejata[5]);
	}


void TambahStock()
{

}

void main()
{

	printf("1 = Lihat Stock , 2 = Tambah Stock\n");
	int opsi;
	scanf("%d", &opsi);
	if(opsi == 1)
	{

	}
	else if(opsi == 2)
	{

	}
	else
	{
		printf("Khawari salah input\n");
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
