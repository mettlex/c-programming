#include <stdio.h>

void change(int *arr) // pass by reference
{
    for (int i = 0; i < 3; i++)
    {
        arr[i]++;
    }
}

int main()
{
    int numbers[] = {10, 20, 30};

    // in case of derived data structure
    change(numbers); // no & is needed
    change(numbers); // no & is needed
    change(numbers); // no & is needed
    change(numbers); // no & is needed

    for (int i = 0; i < 3; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}