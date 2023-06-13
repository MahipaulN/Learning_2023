#include<stdio.h>

#define max 100

int tot(int m,int p, int c){
	return m+p+c;
}
float per(int m,int p,int c){
	int maxm = 300;
	int a = (tot(m,p,c)/(float)maxm)*100;
	return a;
}

int main(){
	int m,p,c,roll;
	char name[max];
	scanf("%d",&m);
	scanf("%d",&p);
	scanf("%d",&c);
	scanf("%d",&roll);
	scanf("%s",name);
	int total = tot(m,p,c);
	float percentage = per(m,p,c);
	printf("Name: %s\nRoll Number: %d\nMaths: %d\nPhysics: %d\nChemistry: %d\nTotal: %d\nPercentage: %.2f\n",name,roll,m,p,c,total,percentage);
}

