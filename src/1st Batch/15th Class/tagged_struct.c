#include <stdio.h>

int main()
{
    struct Student // structure tag
    {
        char name[100];
        unsigned int id;
        unsigned short age;
        unsigned short class;
        char dept[100];
        char name_initial;
    };

    struct Student student1 = {
        "John",
        102,
        26,
        14,
        "SE",
        'J'};

    printf("%s is %d years old.\n", student1.name, student1.age);

    return 0;
}