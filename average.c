#include <stdio.h>

int main() {
    float A, B, C, average;

    // Input: Three numbers
    printf("Enter three numbers (A, B, C): ");
    scanf("%f %f %f", &A, &B, &C);

    // Calculate average
    average = (A + B + C) / 3;

    // Output: Average of the three numbers
    printf("Average of %.2f, %.2f, and %.2f is: %.2f\n", A, B, C, average);

    return 0;
}
