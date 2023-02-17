#include <stdio.h>

int main()
{
    // type definition -> typedef
    typedef struct
    {
        char name[100];
        unsigned int id;
        unsigned short age;
        unsigned short class;
        char dept[100];
        char name_initial;
    } Student;

    Student student1 = {
        .name = "Jane",
        .age = 18,
        .dept = "CS",
        .name_initial = 'J',
        .id = 104,
        .class = 10};

    Student student2 = {
        .name = "John",
        .age = 26,
        .dept = "CS",
        .name_initial = 'J',
        .id = 103,
        .class = 14};

    printf("%s is %d years old.\n", student1.name, student1.age);
    printf("%s is %d years old.\n", student2.name, student2.age);

    return 0;
}