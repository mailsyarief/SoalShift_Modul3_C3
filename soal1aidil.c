#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

const char* stok[7]={"MP4A1", "PM2-V1" , "SPR-3", "SS2-V5", "SPG1-V3", "MINE"};
int jumlah[7];

void lihat(){
	for(int i=0;i<6;i++){
		printf("%s :%d\n", stok[i], jumlah[i]);	
	}
}

void beli(){
	
}

int main(){
	int m;
	for(int i=0;i<6;i++) jumlah[i]=99;
	printf("Menu : \n1. Lihat Stock\t 2. Beli Senjata\n");
	while(scanf("%d", &m)&&m!=3){ 	
		if(m==1){
			printf("liat stok\n"); 
			lihat();
	  	}
	  	if (m==2){
	    		printf("beli hehe\n");
			beli();
	  	}
		printf("Menu : \n1. Lihat Stock\t 2. Beli Senjata\n");
	}
}
