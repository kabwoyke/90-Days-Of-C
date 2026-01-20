#include<stdio.h>


int my_stcmp(const char* a , const char* b){
    while(*a && (*a == *b)){
        a++;
        b++;
    }

    return (unsigned char)*a - (unsigned char) *b;
}

int main(){

    printf("%d\n" , my_stcmp("kaboi" , "kabot"));

    return 0;
}