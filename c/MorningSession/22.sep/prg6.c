/*prg6	row=5
 *	1	2	3	4	5
 *	6	7	8	9	10
 *	12	18	20	21	24
 *	27	30	36	40	42
 *	45	48	50	54	60
 */
#include<stdio.h>
void main(){
	int row,k=1;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int count=0;
		for(int j=1; j<=row; ){
			int sum,rem,num;
			while(count<row){
				sum=0;
				num=k;
				while(num!=0){
					rem=num%10;
					sum+=rem;
					num=num/10;
				}
				if(k%sum==0){
					printf("%d\t",k);
					j++;
					count++;
				}
				k++;
			}
		}
		printf("\n");
	}
}
