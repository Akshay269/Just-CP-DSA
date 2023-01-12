#include<stdio.h>
#include<stdlib.h>
int *add_numbers(int,int);
void main()
{
    int *p;
    p=add_numbers(1,3);
}
int *add_numbers(int a,int b){
    int * sum=(int *)malloc(16);
    *sum-a+b;
    return sum;
}

