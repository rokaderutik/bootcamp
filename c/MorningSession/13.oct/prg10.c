#include<stdio.h>
#include<math.h>
double side(int x1,int y1,int x2,int y2){
	int length=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	double len=sqrt(length);
	return len;
}
void main(){
	int x1,y1,x2,y2,x3,y3;
	double AB, BC, AC;

	printf("Enter x1 & y1\n");
	scanf("%d%d",&x1,&y1);

	printf("Enter x2 & y2\n");
	scanf("%d%d",&x2,&y2);
	
	printf("Enter x3 & y3\n");
	scanf("%d%d",&x3,&y3);

	printf("AB=%lf\n",side(x1,y1,x2,y2));
	printf("BC=%lf\n",side(x2,y2,x3,y3));
	printf("AC=%lf\n",side(x1,y1,x3,y3));
}
