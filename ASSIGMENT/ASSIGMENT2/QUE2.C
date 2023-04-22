#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    double base, height, radius, area;

    printf("Choose a shape to calculate its area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            area = PI * radius * radius;
            printf("The area of the circle is %.2lf", area);
            break;
        case 2:
            printf("Enter the base and height of the rectangle: ");
            scanf("%lf %lf", &base, &height);
            area = base * height;
            printf("The area of the rectangle is %.2lf", area);
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%lf %lf", &base, &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is %.2lf", area);
            break;
        default:
            printf("Error: Invalid choice!");
    }

    return 0;
}
