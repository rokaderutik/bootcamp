//prg4
//Area of triangle= square root of(s(s-a)(s-b)(s-c))
//s=(a+b+c)/2
//R=Area/s
#include<stdio.h>
int sqRoot(int n){
	int sq=0;
	while(1){
		if(sq*sq==n){
			return sq;
		}
		sq=sq+1;
	}
	return 0;
}
void main(){
/*	int x1,y1,x2,y2,x3,y3;
	printf("Enter x1 & y1\n");
	scanf("%d%d",&x1,&y1);
	
	printf("Enter x2 & y2\n");
	scanf("%d%d",&x2,&y2);

	printf("Enter x3 & y3\n");
	scanf("%d%d",&x3,&y3);

	float a,b,c;
	float A,B,C;
	A=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	printf("%f\n",A);*/
	printf("%d\n",sqRoot(125));
}
