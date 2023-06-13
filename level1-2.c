#include<stdio.h>

int grade(int m){
	if (m>=90 && m<=100){
		printf("A");
	}
	else if(m>=75 && m<=89){
		printf("B");
	}
	else if(m>=60 && m<=74){
		printf("C");
	}
	else if(m>=50 && m<=59){
		printf("D");
	}
	else{
		printf("F");
	}
	return 0;
}

int main(){
	int a;
	scanf("%d",&a);
	return grade(a);
}
