//structure pointer
#include<stdio.h>

struct movie{
	char mName[20];
	int count;
	float price;
};

void main(){
	struct movie obj={"Thumbhad",5,450.00};

	struct movie *sptr=&obj;

	printf("%s\n",sptr->mName);
        printf("%d\n",(*sptr).count);
        printf("%f\n",sptr->price);

}
