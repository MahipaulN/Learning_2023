#include<stdio.h>

struct data
{
    int id;
    int age;
};
typedef struct data data;

void val(data*, int, int);
void disp(data*);
void swap(data*, data*);

int main(){
    data d1,d2;
    val(&d1,15168,21);
    val(&d2,15229,20);
    swap(&d1,&d2);
    disp(&d1);
    disp(&d2);
}

void val(data* ptr,int no, int num){
    ptr->id = no;
    ptr->age = num;
}

void disp(data* ptr){
    printf("id: %d\t age: %d\n",ptr->id,ptr->age);
}


void swap(data* d1, data* d2){
    data temp = *d1;
    *d1 = *d2;
    *d2 = temp;
}