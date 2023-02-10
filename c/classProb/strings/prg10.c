#include <stdio.h>
int strcmp(char *str1, char *str2);
void main(){
	char *str1 = "Rutik";
	char *str2 = "Runan";
	char *str3 = "Runan";

	int diff = strcmp(str1, str2);
	if(diff == 0)
		printf("Same\n");
	else
		printf("not same\t%d\n",diff);

	diff = strcmp(str3, str2);
        if(diff == 0)
                printf("Same\n");
        else
                printf("not same\n");

}
