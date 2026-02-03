#include<stdio.h>
struct student{
    char name[20];
    int regno;
};
int main() {
    struct student std1 ={"Arun",1001}; //assigning data to pointer
    
    struct student *point = &std1; //pointing  to pointer variable
    
    printf("My name is %s \n",point -> name);
    printf("My name's memory address is %p \n",point -> name);
    
    printf("My reg no is %d \n", point -> regno);
    printf("My regno's memory address is %p \n", point -> regno);
    return 0;
}
