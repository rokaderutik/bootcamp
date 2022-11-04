//pointer to structure or structure pointer

#include<stdio.h>

struct movie{
	char mName[20];
	int count;
	float price;
}obj={"Thmbhad",8,450.00};

void main(){
	struct movie *sptr = &obj;

	printf("%s\n",obj.mName);
	printf("%d\n",obj.count);
	printf("%f\n",obj.price);

	//access using pointer
	printf("%s\n",sptr->mName);
        printf("%d\n",sptr->count);
        printf("%f\n",sptr->price);

}
