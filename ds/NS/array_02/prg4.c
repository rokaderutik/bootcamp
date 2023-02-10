#include <stdio.h>

int minorDigSum(int arr[4][4], int row, int col){
        int sum=0;
        for(int i=col-1; i<row*col-1; i=i+row-1){
                sum += *(*arr + i);
        }
        return sum;
}
void main(){
        int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	
        printf("%d\n",minorDigSum(arr,4,4));
}

