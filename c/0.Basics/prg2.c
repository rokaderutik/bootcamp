//prg2

#include<stdio.h>
void main(){
	int x=9;
	int ans,ans1,ans2,ans3;
	ans= ++x + x++ + ++x;
	printf("ans=%d \t x=%d\n",ans,x);
	
	ans1= ++x + ++x + ++x + ++x;
	printf("ans1=%d \t x=%d\n",ans1,x);
	
	ans2= x++ + x++ + ++x + x++ + ++x;
	printf("ans2=%d \t x=%d\n",ans2,x);
	
	ans3= x++ + x++ + x++ + x++;
	printf("ans3=%d \t x=%d\n",ans3,x);
}
