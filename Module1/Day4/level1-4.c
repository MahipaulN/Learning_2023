#include<stdio.h>

int sumeven(int a[], int n);
int sumodd(int a[],int n);

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int eve = sumeven(a,n);
    int odd = sumodd(a,n);
    printf("evensum: %d, oddsum: %d", eve, odd);
}

int sumeven(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            sum+=a[i];
        }
    }
    return sum;
}

int sumodd(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            sum+=a[i];
        }
    }
    return sum;
}