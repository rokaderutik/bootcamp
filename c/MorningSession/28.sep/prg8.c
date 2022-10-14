/*prg8
 *WAP to  print frequency of each unique digit from the no. provided by user
 i/p: 1231234
 o/p: freq. of 1 is 2
      freq. of 2 is 2
      freq. of 3 is 2
      freq. of 4 is 1
*/
#include<stdio.h>
void main(){
	int num;
	printf("Enter a no.\n");
	scanf("%d",&num);

	int count=0, n1=num;
	while(n1!=0){
		count++;
		n1=n1/10;
	}

	int arr1[count];
	int n2=num;
	for(int i=0; i<count; i++){
		arr1[i]=n2%10;
		n2=n2/10;
	}

	int arr2[]={0,0,0,0,0,0,0,0,0,0};
	for(int i=0; i<count; i++){
		int cnt=1;
		for(int j=i+1; j<count; j++){
			if(arr1[i]==arr1[j]){
				cnt++;
			}
		}
		if(arr2[arr1[i]]==0){
			arr2[arr1[i]]=cnt;
		}
	}

	for(int i=0; i<10; i++){
		if(arr2[i]!=0){
			printf("Frequency of %d is %d\n",i,arr2[i]);
		}
	}
}
