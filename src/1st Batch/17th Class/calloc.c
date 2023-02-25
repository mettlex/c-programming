#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int *nums = calloc(n, sizeof(int));

    int sum = *nums;

    printf("Enter %d numbers to sum: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", nums + i);
        sum += *(nums + i);
    }

    printf("sum = %d\n", sum);

    free(nums);

    return 0;
}