#include<stdio.h>
#include<math.h>

struct Student {
    char* name;
    int age;
};
int main(){
    char* name = "Edward Kaboi";
    name[0] = 'j';
    printf("%s\n" , name);
    return 0;
}