#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Description: Get a random number and print the number and if it is positive, negative, or zero Return Zero */

int main() {
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
	printf("%d is positive\n", n);
    else if (n == 0)
	printf("%d is zero\n", n);
    else
	printf("%d is negative\n", n);
    return (0);
}
