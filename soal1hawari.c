#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>


void LihatStock()
{
	int 
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