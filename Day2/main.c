#include <stdio.h>

size_t my_strlen(const char *str)
{
    size_t len = 0;

    while (*str != '\0')
    {
        len += 1;
        str++;
    }

    return len;
}

char *my_strcpy(char *dest, const char *src)
{

    char *start = dest;

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
    return start;
}
int main()
{

    printf("%ld\n", my_strlen("Hello"));
    char dest[10];
    my_strcpy(dest, "hello");
    printf("%s\n", dest);

    return 0;
}