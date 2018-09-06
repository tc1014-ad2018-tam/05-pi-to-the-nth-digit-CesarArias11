#include <stdio.h>
#include <math.h>

int main() {
    // Here I declare my variables, which are: n, that is the number of decimals the user wants; and pi which represents the number.
    int n;
    double pi;
    pi = 0;

    // Here I ask the user for the number of decimals he would like to see.
    printf("How many decimals of Pi would you like to know?\n");
    scanf("%i", &n);

    // The loop starts, repeating itself n number of times (given by the user).
    for(int num = 0; num <= n; num++) {
        pi += (pow(16.0, -num)) * ((4.0 / ((8 * num) + 1)) - (2.0 / ((8 * num) + 4)) - (1.0 / ((8 * num) + 5)) - (1.0 / ((8 * num) + 6)));
    }
    // This is were the programs displays the total number.
    printf("The value of pi at %i place is %.*f", n, n, pi);
    return 0;
}