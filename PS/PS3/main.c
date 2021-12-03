/**
    Author: Ahmed Elsayed Elbanawi
    Date:   4/12/2021
**/
/***********************************************/
#include <stdio.h>
/***********************************************/
unsigned int
Get_Wrong_Sub(unsigned int n,
              unsigned int k);
/***********************************************/
int main()
{
    unsigned int n, k;
    scanf("%u%u", &n, &k);
    printf("%u", Get_Wrong_Sub(n,k));
    return 0;
}
/***********************************************/
unsigned int
Get_Wrong_Sub(unsigned int n,
              unsigned int k)
{
    while(k--){
        if(n % 10){
            n--;
        }else{
            n /= 10;
        }
    }
    return n;
}
/***********************************************/
