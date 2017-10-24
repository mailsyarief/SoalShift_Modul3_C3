#include<stdio.h>
#include<string.h>

const char* stok[7]={"MP4A1", "PM2-V1" , "SPR-3", "SS2-V5", "SPG1-V3", "MINE"};
int jumlah[7];

void lihat(){
	for(int i=0;i<6;i++){
		printf("%s :%d\n", stok[i], jumlah[i]);	
	}
}

void beli(){
	printf("Barang yang ingin dibeli: \n");
	printf("1. MP4A1\t2. PM2-V1\n");
	printf("3. SPR-3\t4. SS2-V5\n");
	printf("5. SPG1-V3\t6. MINE\n");
	char h[100]; int beli;
	scanf("%s %d", h, &beli);
	//printf("%s %d\n", h, beli);
	if(strcmp(h, "MP4A1")==0){
		if((jumlah[0]-beli)<0){
			printf("Anda hanya bisa membeli %d\n", jumlah[0]);
			jumlah[0]=0;
		}
		else{jumlah[0]=jumlah[0]-beli;}
	}
	if(strcmp(h, "PM2-V1")==0){
		if((jumlah[1]-beli)<0){
			printf("Anda hanya bisa membeli %d\n", jumlah[1]);
			jumlah[1]=0;
		}
		else{jumlah[1]=jumlah[1]-beli;}
	}
	if(strcmp(h, "SPR-3")==0){
		if((jumlah[2]-beli)<0){
			printf("Anda hanya bisa membeli %d\n", jumlah[2]);
			jumlah[2]=0;
		}
		else{jumlah[2]=jumlah[2]-beli;}
	}
	
	if(strcmp(h, "SS2-V5")==0){
		if((jumlah[3]-beli)<0){
			printf("Anda hanya bisa membeli %d\n", jumlah[3]);
			jumlah[3]=0;
		}
		else{jumlah[3]=jumlah[3]-beli;}
	}

	if(strcmp(h, "SPG1-V3")==0){
		if((jumlah[4]-beli)<0){
			printf("Anda hanya bisa membeli %d\n", jumlah[4]);
			jumlah[4]=0;
		}
		else{jumlah[4]=jumlah[4]-beli;}
	}

	if(strcmp(h, "MINE")==0){
		if((jumlah[5]-beli)<0){
			printf("Anda hanya bisa membeli %d\n", jumlah[5]);
			jumlah[5]=0;
		}
		else{jumlah[5]=jumlah[5]-beli;}
	}
}

int main(){
	int m;
	for(int i=0;i<6;i++) jumlah[i]=99;
	printf("Menu : \n1. Lihat Stock\t 2. Beli Senjata\n");
	while(scanf("%d", &m)&&m!=3){ 	
		if(m==1){
			//printf("liat stok\n"); 
			lihat();
	  	}
	  	if (m==2){
	    		//printf("beli hehe\n");
			beli();
	  	}
		printf("Menu : \n1. Lihat Stock\t 2. Beli Senjata\n");
	}
}
