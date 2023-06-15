#include<stdio.h>

int sumofalter(int a[], int n){
	int i=0, sum = 0;
	for(i;i<n;i+=2){
		sum += a[i];
	}
	return sum;
}
int main(){
	int n, i=0;
	scanf("%d",&n);
	int a[n];
	for(i;i<n;i++){
		scanf("%d",&a[i]);
	}
	int res = sumofalter(a, n);
	printf("%d",res);
}
