#include<stdio.h>

int largest(int a, int b){
    int res = (a>b)?a:b;
    printf("%d",res);
    
}

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    return largest(a,b);
}