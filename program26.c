#include <stdio.h>
#include <math.h>

void inputSides(float *a, float *b, float *c) {
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", a, b, c);
}

int isValidTriangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Side lengths must be positive numbers.\n");
        return 0;
    }
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("The given lengths do not form a valid triangle.\n");
        return 0;
    }
    return 1;
}

float calculateArea(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
int main() {
    float a, b, c;
    inputSides(&a, &b, &c);

    if (isValidTriangle(a, b, c)) {
        float area = calculateArea(a, b, c);
        printf("Valid Triangle: Yes\nArea = %.2f\n", area);
    } else {
        printf("Valid Triangle: No\n");
    }

    return 0;
}

