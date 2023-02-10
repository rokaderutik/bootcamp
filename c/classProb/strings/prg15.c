#include <stdio.h>
int strlen(char *str);
int mystrcmpi(char *str1, char *str2){
        if(strlen(str1) != strlen(str2))
                return -1;
        while(*str1 != '\0'){
                if(*str1 == *str2 || *str1 - *str2 == 32 || *str1 - *str2 == -32){
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
        char *str2 = "RuNaN";
        char *str3 = "rUnAn";

        int diff = mystrcmpi(str1, str2);
        if(diff == 0)
                printf("Same\n");
        else
                printf("not same\t%d\n",diff);

        diff = mystrcmpi(str3, str2);
        if(diff == 0)
                printf("Same\n");
        else
                printf("not same\n");
}
