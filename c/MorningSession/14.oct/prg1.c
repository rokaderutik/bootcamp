/*WAP to swap first & last digit from a number
 * i/p: 9421114232
 * o/p: 2421114239
 */
#include<stdio.h>
void main(){
	long int num;
	printf("Enter a no.\n");
	scanf("%ld",&num);

	int count=0,last=num%10,first;
	long int rev=0;
	while(num!=0){
		count++;
		rev=rev*10+ num%10;
		first=num%10;
		num=num/10;
	}
	int arr[count];
	for(int i=0; i<count; i++){
		if(i==0 || i==count-1){
			arr[0]=last;
			arr[count-1]=first;
			rev/=10;
		}else{
			arr[i]=rev%10;
			rev/=10;
		}
		printf("%d",arr[i]);
	}
}
