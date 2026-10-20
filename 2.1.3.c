#include <stdio.h>
int main()
{
    int length = 0;

    printf("Enter length: ");
    scanf("%d", &length);

    int width = 0;

    printf("Enter width: ");
    scanf("%d", &width);

    int area = length * width;

    printf("Area: %d\n", area);

    int perimeter = 2 * (length + width);
    printf("Perimeter: %d\n", perimeter);
}