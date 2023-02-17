#include <stdio.h>
#include <string.h>

int main()
{
    // Abstraction

    // unnamed/untagged structure
    struct
    {
        char name[100];
        unsigned int id;
        unsigned short age;
        unsigned short class;
        char dept[100];
        char name_initial;
    } s1, s2;

    strcpy(s2.name, "Sam"); // string copy

    s2.id = 101;
    s2.age = 23;
    s2.class = 12;

    strcpy(s2.dept, "CSE");

    s2.name_initial = 'S';

    printf("%s is %d years old.\n", s2.name, s2.age);

    return 0;
}