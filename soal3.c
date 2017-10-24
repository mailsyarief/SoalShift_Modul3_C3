#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void lohan()
{
	int StatusLohan = 100;
	while(1)
	{
		sleep();
	}
}


void kepiting()
{
	int StautsKepiting = 100;
}

int opsi;
int main()
{
	printf("1. lohan, 2. kepiting\n");
	scanf("%d", opsi);
	if(opsi==1)
	{
		lohan();
	}
	else if(opsi==2)
	{
		kepiting();
	}
}