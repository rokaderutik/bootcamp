#include <stdio.h>

char *mystrlwr(char *str){
	while(*str != '\0'){
		if(*str >= 65 && *str <= 90)
			*str = *str + 32;

		str++;
	}
	return str;
}
void main(){
        char *str1 = "rutik";
        char *str2 = "RUNan";

	puts(str1);
	puts(str2);

	mystrlwr(str1);
	mystrlwr(str2);

	puts(str1);
	puts(str2);
}
