#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid1;
pthread_t tid2;

int status, skorA, skorB;
const char* a[2];
int boardA[20];
int boardB[20];

void *playerA(void *arg){
	
}

void *playerB(void *arg){

}

int main(){
	for(int i=1;i<=16;i++){
		boardA[i]=0;
		boardB[i]=0;
	}
	
	pthread_create(&(tid1), NULL , &playerA, NULL);
	pthread create(&(tid2), NULL, &playerB, NULL);

	pthread_join(tid1,NULL);
	pthread_join(tid2, NULL);
}
