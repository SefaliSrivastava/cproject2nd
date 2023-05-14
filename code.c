#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Scientific Calculator\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square Root\n6. Power\n7. Logarithm\n8. Sine\n9. Cosine\n10. Tangent\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2f", result);
            break;
        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2f", result);
            break;
        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2f", result);
            break;
        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%f %f", &num1, &num2);
            result = num1 / num2;
            printf("Result: %.2f", result);
            break;
        case 5:
            printf("Enter a number to find square root: ");
            scanf("%f", &num1);
            result = sqrt(num1);
            printf("Result: %.2f", result);
            break;
        case 6:
            printf("Enter a number and its power: ");
            scanf("%f %f", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.2f", result);
            break;
        case 7:
            printf("Enter a number to find logarithm (base 10): ");
            scanf("%f", &num1);
            result = log10(num1);
            printf("Result: %.2f", result);
            break;
        case 8:
            printf("Enter an angle in degrees to find sine: ");
            scanf("%f", &num1);
            result = sin(num1 * M_PI / 180);
            printf("Result: %.2f", result);
            break;
        case 9:
            printf("Enter an angle in degrees to find cosine: ");
            scanf("%f", &num1);
            result = cos(num1 * M_PI / 180);
            printf("Result: %.2f", result);
            break;
        case 10:
            printf("Enter an angle in degrees to find tangent: ");
            scanf("%f", &num1);
            result = tan(num1 * M_PI / 180);
            printf("Result: %.2f", result);
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}
