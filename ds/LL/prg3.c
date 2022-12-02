//self referential structure

#include<stdio.h>
#include<string.h>

typedef struct company{
        int empcnt;
        char name[25];
        float rev;
        struct company *next;  //self referential structure
}cmp;

void main(){
        cmp cmp1, cmp2, cmp3;

        cmp *head = &cmp1;      //head pointer

        //fill data
        head->empcnt = 50;
        strcpy(head->name, "KBR Investments");
        head->rev = 924.88;
        head->next = &cmp2;

        head->next->empcnt = 100;
        strcpy(head->next->name, "AKR Investments");
        head->next->rev = 875.45;
        head->next->next = &cmp3;

        head->next->next->empcnt = 500;
        strcpy(head->next->next->name, "ROKADE INDUSTRIES LTD.");
        head->next->next->rev = 9000.24;
        head->next->next->next = NULL;

        //access data
        printf("\n%d\n", head->empcnt);
        printf("%s\n", head->name);
        printf("%.2f\n", head->rev);

        printf("\n%d\n", head->next->empcnt);
        printf("%s\n", head->next->name);
        printf("%.2f\n", head->next->rev);

        printf("\n%d\n", head->next->next->empcnt);
        printf("%s\n", head->next->next->name);
        printf("%.2f\n", head->next->next->rev);

}

