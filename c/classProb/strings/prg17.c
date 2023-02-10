#include <stdio.h>

char *mystrupr(char *str){
        while(*str != '\0'){
                if(*str >= 97 && *str <= 122)
                        *str = *str - 32;

                str++;
        }
        return str;
}
void main(){
        char *str1 = "rutik";
        char *str2 = "RUNan";

        puts(str1);
        puts(str2);

        mystrupr(str1);
        mystrupr(str2);

        puts(str1);
        puts(str2);
}

