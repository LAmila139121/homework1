#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble(int arr[],int len){
	int i, j;
	for (i = 0; i < len; i++){
		for (j = 0; j < len-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;	
			}
		}
	}
}

void selection(int *arr, int size){
	int *smallest;
	int i, j;
	for(i = 0; i < size; i++){
		smallest = arr + i;
		for(j = i + 1; j < size; j++){
			if(arr[j] < *smallest){
				smallest = arr + j;
			}
		} 
		int tmp = arr[i];
		arr[i] = *smallest;
		*smallest = tmp;
	} 
}

void insertion(int *arr,int size){
	for (int j = 1; j < size; j++){
	int k = j - 1;
	int key = arr[j];
	while (k >= 0 && arr[k] > key){
		arr[k + 1] = arr[k];
		k--;
	}
	arr[k + 1] = key;
	}
}


void bubble_str(char **arr,int len){
	int i, j;
	for (i = 0; i < len; i++){
		for (j = 0; j < len-i-1;j++){
			if(strcmp(*(arr+j),*(arr+j+1))>0){
				char tmp[105];
				strcpy(tmp, *(arr + j));
				strcpy(*(arr + j),*(arr+j+1));
				strcpy(*(arr + j + 1), tmp);
			}
		}
	}
}

void selection_str(char **arr, int size){
	char **smallest=malloc(sizeof(char)*105);
	int i, j;
	for(i = 0; i < size; i++){
		smallest=arr + i;
		for(j = i + 1; j < size; j++){
			if(strcmp(*(arr+j),*smallest)>0){
				smallest=arr+j;
			}
		}
		char tmp[105];
		strcpy(tmp, *(arr + i));
		strcpy(*(arr + i),*smallest);
		strcpy(*smallest, tmp);
	}
}

void insertion_str(char **arr,int size){
	for (int j = 1; j < size; j++){
		int k = j - 1;
		char key[105] ;
		strcpy(key,*(arr+j));
		while (k >= 0 && strcmp(*(arr+k),key)>0){
			strcpy(*(arr + k + 1), *(arr + k));
			k--;
		}
		strcpy(*(arr + k + 1), key);
	}
}
