#include <stdio.h>
#include <math.h>

int main() {
    double num, root;

    printf("Enter a number: ");
    scanf("%lf", &num);

    root = sqrt(num);

    printf("The square root of %lf is %lf\n", num, root);

    return 0;
}


