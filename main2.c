#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main() {
    int option;

    do {
        printf("\n===== ACTIVITY MENU =====\n");
        printf("1 - Valid/Invalid grade\n");
        printf("2 - Even or odd number\n");
        printf("3 - Celsius -> Fahrenheit conversion (10 to 20)\n");
        printf("4 - Decrement down to zero\n");
        printf("5 - Circumference perimeter\n");
        printf("6 - Month by name\n");
        printf("0 - Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: {
                int grade;
                printf("Enter your grade from 0 to 20: ");
                scanf("%d", &grade);
                if (grade >= 0 && grade <= 20) {
                    printf("Your grade is valid.\n");
                } else {
                    printf("Your grade is invalid.\n");
                }
                break;
            }
            case 2: {
                int number;
                printf("Enter an integer: ");
                scanf("%d", &number);
                if (number % 2 == 0) {
                    printf("The number %d is even.\n", number);
                } else {
                    printf("The number %d is odd.\n", number);
                }
                break;
            }
            case 3: {
                int celsius = 10;
                float fahrenheit;
                while (celsius <= 20) {
                    fahrenheit = celsius * 1.8 + 32;
                    printf("%d C = %.2f F\n", celsius, fahrenheit);
                    celsius++;
                }
                break;
            }
            case 4: {
                int value;
                printf("Enter a positive integer: ");
                scanf("%d", &value);
                if (value <= 0) {
                    printf("Incorrect value entered. Program ends.\n");
                } else {
                    while (value > 0) {
                        value--;
                        printf("%d\n", value);
                    }
                }
                break;
            }
            case 5: {
                float radius, perimeter;
                printf("Enter the radius of the circumference: ");
                scanf("%f", &radius);
                perimeter = 2 * PI * radius;
                printf("The perimeter of the circumference is: %.2f\n", perimeter);
                break;
            }
            case 6: {
                int month;
                printf("Enter an integer corresponding to a month (1-12): ");
                scanf("%d", &month);
                switch (month) {
                    case 1:  printf("%d is January\n", month); break;
                    case 2:  printf("%d is February\n", month); break;
                    case 3:  printf("%d is March\n", month); break;
                    case 4:  printf("%d is April\n", month); break;
                    case 5:  printf("%d is May\n", month); break;
                    case 6:  printf("%d is June\n", month); break;
                    case 7:  printf("%d is July\n", month); break;
                    case 8:  printf("%d is August\n", month); break;
                    case 9:  printf("%d is September\n", month); break;
                    case 10: printf("%d is October\n", month); break;
                    case 11: printf("%d is November\n", month); break;
                    case 12: printf("%d is December\n", month); break;
                    default: printf("Invalid value. Enter a number between 1 and 12.\n");
                }
                break;
            }
            case 0:
                printf("Closing the program...\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }
    } while (option != 0);

    return 0;
}
