#include <stdio.h>

int main() {
    float side, area;

    // Input: Side length of the square
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Calculate area
    area = side * side;

    // Output: Area of the square
    printf("Area of the square with side %.2f is: %.2f\n", side, area);

    return 0;
}