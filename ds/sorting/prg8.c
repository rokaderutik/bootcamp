//sort according to length, if length is same then sort according to alphabatically
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
                        
			}else if(strlen(arr[j]) == strlen(arr[j+1])){
                                int k=0;
			       	while(k != strlen(arr[j]) && arr[j][k] == arr[j+1][k]){
					k++;
				}

				if(arr[j][k] > arr[j+1][k]){
					char temp[strlen(arr[j])];
                          	        strcpy(temp, arr[j]);
                      	           	strcpy(arr[j], arr[j+1]);
					strcpy(arr[j+1], temp);
				}
                        }
                }
        }
}

void main(){
        char arr1[][10] = {"Ashish", "Kanha", "Rahul", "Raj", "Anuj", "Shashi"};
	//char arr1[][10] = {"A", "7", "Rutik", "Runan", "Sans", "Ashish"};
	//char arr1[][10] = {"Shashi", "Ashish", "Rahul", "Raj", "Anuj", "Kanha"};

        for(int i=0; i<6; i++){
                puts(arr1[i]);
        }

        bubbleSort(arr1, 6);

        printf("sorted:\n");
        for(int i=0; i<6; i++){
                puts(arr1[i]);
        }
}

