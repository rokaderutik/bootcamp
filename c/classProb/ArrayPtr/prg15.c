#include<stdio.h>
void main(){
	int arr1[]={10,20,30};
	int arr2[]={10,20,40};

	int flag=0;
	for(int i=0; i<3;i++){
		if(arr1[i]!=arr2[i]){
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("Arrays are equal\n");
	else
		printf("Arays are not equal\n");
}
