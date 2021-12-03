/**
    Author: Ahmed Elsayed Elbanawi
    Date:   3/12/2021
**/
/**************************************************/
#include <stdio.h>
#include <malloc.h>
/**************************************************/
#define NULL_CHAR '\0'
/**************************************************/
void
Display_Winner(char* Str);
/**************************************************/
int main()
{
    unsigned int n;
    char* Str;
    scanf("%u", &n);
    Str = malloc(sizeof(char) * (1 + n));
    scanf("%s", Str);
    Display_Winner(Str);
    return 0;
}
/**************************************************/
void Display_Winner(char* Str){
    unsigned int Anton = 0, Danik = 0;
    while(*Str != NULL_CHAR){
        if('A' == *Str){
            Anton++;
        }else{
            Danik++;
        }
        Str++;
    }
    if(Anton > Danik){
        printf("Anton");
    }else if(Danik > Anton){
        printf("Danik");
    }else{
        printf("Friendship");
    }
}
/**************************************************/
