#include<stdio.h>
void main(){
	int arr1[]={1,2,3};
	int arr2[3]={1,2,3};

/*	if(arr1==arr2)
		printf("equal\n");
	else
		printf("Not equal\n");	*/

	if(arr1[0]==arr2[0] && arr1[1]==arr2[1] && arr1[2]==arr2[2])
		printf("Equal\n");
	else
		printf("not equal\n");


	int flag=0;
	for(int i=0;i<3;i++){
		if(arr1[i]==arr2[i])
			flag=1;
		else{
			flag=0;
			break;
		}
	}

	if(flag==1)
		printf("Equal\n");
	else
		printf("not equal\n");
}
