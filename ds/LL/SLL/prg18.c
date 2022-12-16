#include<stdio.h>
void main(){
	int arr[6];
	for(int i=0; i<6; i++){
		scanf("%d",arr+i);
	}
	int a,b,c;
	a=(arr[2]-arr[0])(arr[2]-arr[0])+(arr[3]-arr[1])(arr[3]-arr[0]);

	b=(arr[4]-arr[2])(arr[4]-arr[2])+(arr[5]-arr[3])(arr[5]-arr[3]);
	
	c=(arr[4]-arr[0])(arr[4]-arr[0])+(arr[5]-arr[1])(arr[5]-arr[1]);

	int s1,s2,s3;
	
	s1 = sqrt(a);
	s2 = sqrt(b);
	s3 = sqrt(c);

	if(s1+s2 == s3 || s1+s3==s2 || s2+s3==s1){
		printf("collinear");
	}else{
		printf("not colliear");
	}
}
