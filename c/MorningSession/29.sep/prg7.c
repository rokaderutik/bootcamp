/*prg7
 * WAP to calculate radius of circle from user provided area of circle
 * i/p:50.27
 * o/p:4
 */

#include<stdio.h>
void main(){
	float a;
	printf("Enter area of circle\n");
	scanf("%f",&a);

	int r=1,rsq;
	rsq=a*7/22;
	
	while(r*r!=rsq){
		r++;
	}
	printf("Radius of circle is %d\n",r);
}
