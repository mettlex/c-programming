#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // initialize random
    srand(time(NULL));

    printf("%d\n", rand());

    return 0;
}