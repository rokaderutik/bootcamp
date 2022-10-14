//WAP to print first 10 Automorphic no. (0,1,5,6,25,76,...)
//25-> 25*25=625 last two digits are 25

#include<stdio.h>
void main(){
	long int n=0;
	long int sq;
	for(int i=1; i<=10; ){
		int count=0,num=n;
		while(num!=0){
			count++;
			num=num/10;
		}
		if(n==0){
			printf("%d\n",n);
			i++;
		}else{
			long int p=1;
			for(int i=1; i<=count; i++){
				p=p*10;
			}
			sq=n*n;
			if(sq%p==n){
				printf("%d\n",n);
				i++;
			}
		}
		n++;
	}
}
