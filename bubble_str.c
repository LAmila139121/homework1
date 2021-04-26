#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "headfile.h"
#define DATA_SIZE 1000000

int main(){
	FILE *fp=fopen("dataset2","r");
	char str[105];
	char *arr[DATA_SIZE];
	int i=0;
	while((fgets(str,105,fp))!=NULL){
		*(arr+i)=malloc(sizeof(char)*strlen(str));
		if (*(str + strlen(str) - 1) == '\n')
			*(str + strlen(str) - 1) = '\0';
		strcpy(arr[i], str);
		i++;
	}
	struct  timeval start, end;
	unsigned  long diff;
	gettimeofday(&start, NULL);
	bubble_str(arr, DATA_SIZE);
	gettimeofday(&end, NULL);
	diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
	printf("Sorting performance %ld us (equal %f sec)\n", diff, diff / 1000000.0);

	return 0;
}


