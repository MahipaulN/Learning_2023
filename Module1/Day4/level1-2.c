#include<stdio.h>

int max(int a[], int n);
int min(int a[], int n);

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int maxi = max(a,n);
    int mini = min(a,n);
    printf("min: %d max: %d",mini, maxi);
    return 0;
}

int max(int a[], int n){
    int max = a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    return max;
}

int min(int a[], int n){
    int min = 0[a];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;
}