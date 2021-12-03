/**
    Author  :   Ahmed Elsayed Elbanawi
    Date    :   3/12/2021
**/
/***********************************************************/
#include <stdio.h>
#include <malloc.h>
/***********************************************************/
unsigned short
Get_Min_Width(unsigned short* arr,
              unsigned short n,
              unsigned short h);
/***********************************************************/
int main()
{
    unsigned short n, h, *arr, Idx;
    scanf("%hu%hu", &n, &h);
    arr = malloc(sizeof(unsigned short) * n);
    for(Idx = 0; Idx < n; Idx++){
        scanf("%hu", arr + Idx);
    }
    printf("%hu", Get_Min_Width(arr, n, h));
    return 0;
}
/***********************************************************/
unsigned short
Get_Min_Width(unsigned short* arr,
              unsigned short n,
              unsigned short h)
{
    unsigned short Min = n, Idx;
    for(Idx = 0; Idx < n; Idx++){
        if(arr[Idx] > h){
            Min++;
        }
    }
    return Min;
}
/***********************************************************/
