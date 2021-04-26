#include <stdio.h>
#include <stdlib.h>
#define data_size  1000000

int main(){
	int data[data_size+5];
	for(int i=0;i<data_size;i++){
		data[i]=rand();
		printf("%d\n",data[i]);
	}
}


