//structure assignment
//
#include<stdio.h>

struct movie{
        char mName[20];
        int noTickets;
        float price;
}movie1={"kantara",7,450.58};      //movie1 obj in Data section

void fun(){
	struct movie movie2={"Tiger mela ahe",2,1200.00};   //movie2 obj in fun stack frame

	printf("%s\n",movie2.mName);
        printf("%d\n",movie2.noTickets);
        printf("%f\n",movie2.price);

}
void main(){
        struct movie movie3={"Drisham",18,500.33};	//movie3 obj in main stack frame

        printf("%s\n",movie1.mName);
        printf("%d\n",movie1.noTickets);
        printf("%f\n",movie1.price);

	fun();

	printf("%s\n",movie3.mName);
        printf("%d\n",movie3.noTickets);
        printf("%f\n",movie3.price);

}

