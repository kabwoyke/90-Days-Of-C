#include<stdio.h>
#include<stdlib.h>

typedef struct IntVector{

    int* data;
    size_t capacity;
    size_t size;
}IntVector;


void vector_init(IntVector* vec){
    vec->capacity = 4;
    vec->size = 0;

    vec->data = malloc(vec->capacity * sizeof(int));

    if(!vec->data){
        perror("Error in allocating memory\n");
        exit(1);
    }
}

void vector_push(IntVector* vec , int val){

    if(vec->size == vec->capacity){
        vec->capacity *= 2;
        int* temp = realloc(vec->data , vec->capacity * sizeof(int));

        if(!temp){
            free(vec->data);
            perror("Failed to reallocate memory");
            exit(1);
        }

        vec->data = temp;
    }

    vec->data[vec->size++] = val;

}

void vector_free(IntVector* v) {
    free(v->data);
    v->data = NULL;
    v->size = 0;
    v->capacity = 0;
}

int main() {
    IntVector vec;

    // 1️⃣ Initialize
    vector_init(&vec);

    // 2️⃣ Push some values
    for (int i = 0; i < 10; i++) {
        vector_push(&vec, i * 10);
    }

    // 3️⃣ Access elements
    for (size_t i = 0; i < vec.size; i++) {
        printf("%d ", vec.data[i]);
    }
    printf("\n");

    // 4️⃣ Free memory
    vector_free(&vec);

    return 0;
}