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

        for(int i=0; i<len; i++){
                for(int j=0; j<len; j++){
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

