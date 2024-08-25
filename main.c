#include<stdio.h>

void main(){
    int a[3][4]= {   {5,7,9,11},
                    {13,15,17,19},
                    {21,23,25,27} };

            printf("\n%d %d %d", *((a+0)+1)+1 , a[1], a[2]+1);
}