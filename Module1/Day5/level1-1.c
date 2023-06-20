#include<stdio.h>

struct box{
    float l;
    float b;
    float h;
};

typedef struct box box;

void values(box*, float, float, float);
float disp(box*);

int main(){
    box b1;
    box* ptr = &b1;
    values(ptr,4,4,4);
    disp(ptr);
    return 0;
}


void values(box* ptr, float len, float breadth, float height){
    ptr->l = len;
    ptr->b = breadth;
    ptr->h = height;
}

float disp(box* ptr){
    float volume = ptr->l*ptr->b*ptr->h;
    float TSA = 2*((ptr->l*ptr->b)+(ptr->b*ptr->h)+(ptr->l*ptr->h));
    printf("volume: %.2f\t,TSA: %.2f\n",volume, TSA);
}