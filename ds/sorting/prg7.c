//sort according to length
#include<stdio.h>

int strlen(char *str);
char *strcpy(char *dest, char *src);

void bubbleSort(char (*arr)[10], int size){

	for(int i=0; i<size-1; i++){

		for(int j=0; j<size-1-i; j++){
		
			if(strlen(arr[j]) > strlen(arr[j+1])){
				char temp[strlen(arr[j])];
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[j+1]);
				strcpy(arr[j+1], temp);
			}
		}
	}
}

void main(){
	char arr[][10] = {"Ashish", "Kanha", "Rahul", "Raj", "Anuj", "Shashi"};

	for(int i=0; i<6; i++){
                puts(arr[i]);
        }

	bubbleSort(arr, 6);

	printf("sorted:\n");
	for(int i=0; i<6; i++){
		puts(arr[i]);
	}
}
