#include<stdio.h>

int add(int a , int b){
    return a+b;
}

int operate(int a , int b , int (*op)(int , int)){
    return op(a ,b);
}

typedef struct Student {

    int age;
    char* name;
    void (*print)(struct Student *s)

}Student;


void print(struct Student *s){
    printf("Age is %d and Name is %s\n" , s->age , s->name);
};


int main(){
    Student *stud;
    stud->age = 24;
    stud->name = "Maina";
    stud->print = print;
    stud->print(stud);
    // printf("%d\n" , operate(1,2,add));
    return 0;
}