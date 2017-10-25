#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid1;
pthread_t tid2;

int status, skorA=0, skorB=0, sisaA=16, sisaB=16;
char nama1[100]; char nama2[100];
int boardA[20];
int boardB[20];
int turn=1;

void *playerA(void *arg){
	int bagian = 0, lubang;
	while(1){
		while(turn!=1){}
		if(bagian==0){
			printf("%s ingin memasukan ranjau sebanyak ", nama1);
			int m; scanf("%d", &m);
			if(m>4){printf("tidak boleh lebih dari 4, coba lagi\n"); continue;}
			
			printf("Masukan ranjau di lubang nomor ");
			while(m--){scanf("%d", &lubang); boardA[lubang]=1; sisaA--;}
			bagian=1;
			turn=2;		
		}
		if(bagian==1){
			printf("%s, ingin tebak ranjau milik %s\n", nama2, nama1);
			printf("Masukan 4 lubang mana yang terdapat ranjau!");
			int h=4;
			while(h--){
				scanf("%d", &lubang);
				if(boardA[lubang]==1) skorB++;
				else if(boardA[lubang]==0) skorA++;		
			}
			turn=2;
			bagian=0;
			
			printf("Skor Pemain: \n");
			printf("%s : %d\n", nama1, skorA);
			printf("%s : %d\n", nama2, skorB);
		}

		if(skorA == 10 || skorB == 10 || sisaA == 0 || sisaB == 0){
			printf("Permainan telah berakhir!\n");
			exit(EXIT_FAILURE);
		}		
	}
}

void *playerB(void *arg){
	int bagian = 0, lubang;
	while(1){
		while(turn!=2){}
		if(bagian==0){
			printf("%s ingin memasukan ranjau sebanyak ", nama2);
			int m; scanf("%d", &m);
			if(m>4){printf("tidak boleh lebih dari 4, coba lagi\n"); continue;}
			
			printf("Masukan ranjau di lubang nomor ");
			while(m--){scanf("%d", &lubang); boardB[lubang]=1; sisaB--;}
			bagian=1;
			turn=1;		
		}
		if(bagian==1){
			printf("%s, ingin tebak ranjau milik %s\n", nama1, nama2);
			printf("Masukan 4 lubang mana yang terdapat ranjau! ");
			int h=4;
			while(h--){
				scanf("%d", &lubang);
				if(boardB[lubang]==1) skorA++;
				else if(boardB[lubang]==0) skorB++;		
			}
			turn=1;
			bagian=0;
			
			printf("Skor Pemain: \n");
			printf("%s : %d\n", nama1, skorA);
			printf("%s : %d\n", nama2, skorB);
		}

		if(skorA == 10 || skorB == 10 || sisaA == 0 || sisaB == 0){
			printf("Permainan telah berakhir!\n");
			exit(EXIT_FAILURE);
		}		
	}
}

int main(){
	for(int i=1;i<=16;i++){
		boardA[i]=0;
		boardB[i]=0;
	}
	
	printf("Masukan nama Player 1 ");
	scanf("%s", nama1);
	printf("\nMasukan nama Player 2 ");
	scanf("%s", nama2);
	printf("\n");

	pthread_create(&(tid1), NULL , &playerA, NULL);
	pthread_create(&(tid2), NULL, &playerB, NULL);

	pthread_join(tid1,NULL);
	pthread_join(tid2, NULL);
}
