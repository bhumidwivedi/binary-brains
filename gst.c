#include <stdio.h>

int main() {
    float pencilCost, penCost, eraserCost, totalCost, gst;

    // Input: Cost of pencil, pen, and eraser
    printf("Enter the cost of the pencil: ");
    scanf("%f", &pencilCost);

    printf("Enter the cost of the pen: ");
    scanf("%f", &penCost);

    printf("Enter the cost of the eraser: ");
    scanf("%f", &eraserCost);

    // Calculate total cost without GST
    totalCost = pencilCost + penCost + eraserCost;

    // Calculate GST (18%)
    gst = 0.18 * totalCost;

    // Calculate total cost with GST
    totalCost += gst;

    // Output: Total cost with GST
    printf("Total cost (including 18%% GST) is: %.2f\n", totalCost);

    return 0;
}