#include <stdio.h>
int strlen(char *str);
int mystrcmp(char *str1, char *str2){
	if(strlen(str1) != strlen(str2))
		return -1;
	while(*str1 != '\0'){
		if(*str1 == *str2){
			str1++;
			str2++;
		} else {
			return *str1-*str2;
		}
	}
	return 0;
}
void main(){
        char *str1 = "Rutik";
        char *str2 = "Runan";
        char *str3 = "Runan";
	char *str4 = "Rokade";

        int diff = mystrcmp(str1, str2);
        if(diff == 0)
                printf("Same\n");
        else
                printf("not same\t%d\n",diff);

        diff = mystrcmp(str3, str2);
        if(diff == 0)
                printf("Same\n");
        else
                printf("not same\n");

	diff = mystrcmp(str3, str4);
        if(diff == 0)
                printf("Same\n");
        else
                printf("not same %d\n", diff);

}

