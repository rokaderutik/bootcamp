//Good pair

#include <stdio.h>
void main(){
	int arr[] = {1,2,3,4};
	int B = 7;
	int N = sizeof(arr)/sizeof(arr[0]);

	int flag = 0;
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			if(arr[i] + arr[j] == B){
				flag = 1;
				break;
			}
		}
	}
	printf("%d\n",flag);
}
