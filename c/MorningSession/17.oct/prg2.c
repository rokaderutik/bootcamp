//prg2
//WAP that replaces every occurance of given digit by given digit
//i/p:942111423      replace 4 by 5
//if no. to be replace is not in present in no. then told user & re-enter no
#include<stdio.h>
void main(){
	long int n;
	printf("Enter a no.\n");
	scanf("%ld",&n);
	int d,r;
	printf("Enter digit to be replace & digit by which is replace\n");
	scanf("%d%d",&d,&r);

	int count=0;
	long int rev=0;
	while(n!=0){
		count++;
		rev=rev*10+n%10;
		n=n/10;
	}
	int arr[count],rem,flag=0;
}
