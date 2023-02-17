#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    /*
    // Branching:
    if (n % 2 == 0)
    {
        printf("%d is even.\n", n);
    }
    else
    {
        printf("%d is odd.\n", n);
    }
    */

    // Branchless:
    char *lines[] = {
        "%d is even.\n" /* index: 0 */,
        "%d is odd.\n" /* index: 1 */
    };

    printf(lines[n % 2], n);

    return 0;
}