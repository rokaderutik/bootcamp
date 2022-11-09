//prg2
//take a no. ,seperate digits, put them in array & sort array in accending order
#include<stdio.h>
void main(){
	long int n;
	printf("Enter a number\n");
	scanf("%ld",&n);

	int len=0;
	long int num1=n,num2=n;
	while(num1!=0){
		len++;
		num1=num1/10;
	}

	int arr[len];
	for(int i=0; i<len; i++){
		arr[i]=num2%10;
		num2=num2/10;
	}

	for(int i=0; i<len-1; i++){
		for(int j=i+1; j<len; j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(int i=0; i<len; i++){
		printf("%d  ",arr[i]);
	}

}
