#include<stdio.h>
#include<string.h>

struct Student {
    int age;
    char* name;
};

void update(struct Student* stud){
    stud->age = 25;
    stud->name = "Kaboi";
}
int main(){

    struct Student *s;
    s->age = 20;
    strcpy(s->name , "James");
    printf("Name and Age is %s , %d \n" , s->name , s->age);
    update(s);
    printf("Name and Age is %s , %d \n" , s->name , s->age);
    
    return 0;
}