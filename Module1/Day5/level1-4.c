#include<stdio.h>
#include<stdlib.h>

struct data{
    int id;
    char name[20];
    int age;
};

typedef struct data data;

int main(){
    int n;
    data* d;
    scanf("%d",&n);
    d = (data*)malloc(n*sizeof(data));
    printf("Scanning\n");
    for(int i=0;i<n;i++){
        scanf("%d",&d[i].id);
        scanf("%s",d[i].name);
        scanf("%d",&d[i].age);
    }
    printf("Displaying\n");
    for(int i=0;i<n;i++){
        printf("%d\t",d[i].id);
        printf("%s\t",d[i].name);
        printf("%d\t",d[i].age);
        printf("\n");
    }
    free(d);
}

