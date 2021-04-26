#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 1000000

int main(){
	char arr[105];
	for (int i = 0; i < DATA_SIZE; i++){
		for (int j = 0; j < 100;j++){
			int idx = (rand()) % 2;
			if(idx==0){
				arr[j] = ((rand()) % 26) + 'a';
			}
			else if(idx==1){
				arr[j] = ((rand()) % 26) + 'A';
			}
		}
		arr[101]='\0';
		printf("%s\n", arr);
	}
}


