#include<stdio.h>

int avg(int a[], int n);

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int res = avg(a,n);
    printf("%d",res);
    return 0;
}

int avg(int a[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=a[i];
    }
    int average = sum/n;
    return average;
}