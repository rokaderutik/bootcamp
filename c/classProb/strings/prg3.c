#include<stdio.h>
void main(){
	char pname[] = {'R','o','h','i','t','s','\0'};
	char *name = "ViratK";

	char pname1[] = {'R','o','h','i','t','s','\0','v','a','d','a'};

	for(int i=0; i<7; i++)
		printf("%c", pname[i]);

	printf("\n");

	for(int i=0; i<7; i++)
		printf("%c", name[i]);

	printf("\n");

	printf("%ld\n", sizeof(pname));
	printf("%ld\n", sizeof(name));
	printf("%ld\n", sizeof(pname1));

        for(int i=0; i<11; i++)
                printf("%c", pname1[i]);

        printf("\n");

}
