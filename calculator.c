#include <stdio.h>

/* ---------- ADDITION ---------- */
float add() {
    int n;
    printf("Enter total number of numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Enter at least 1 number\n");
        return 0;
    }

    float a[n], sum = 0;
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
        sum += a[i];
    }
    return sum;
}

/* ---------- SUBTRACTION ---------- */
float sub() {
    int n;
    printf("Enter total number of numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Enter at least 1 number\n");
        return 0;
    }

    float a[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }

    float result = a[0];
    for (int i = 1; i < n; i++) {
        result -= a[i];
    }
    return result;
}

/* ---------- MULTIPLICATION ---------- */
float mul() {
    int n;
    printf("Enter total number of numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Enter at least 1 number\n");
        return 0;
    }

    float a[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }

    float result = a[0];
    for (int i = 1; i < n; i++) {
        result *= a[i];
    }
    return result;
}

/* ---------- MODULUS ---------- */
int mod() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Error: Modulus by 0 not allowed\n");
        return 0;
    }
    return a % b;
}

/* ---------- DIVISION ---------- */
float divi() {
    float a, b;
    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);

    if (b == 0) {
        printf("Error: Division by 0 not allowed\n");
        return 0;
    }
    return a / b;
}

/* ---------- AVERAGE ---------- */
float avg() {
    int n;
    printf("Enter total number of numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Cannot calculate average\n");
        return 0;
    }

    float a[n], sum = 0;
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
        sum += a[i];
    }
    return sum / n;
}

/* ---------- MAIN ---------- */
int main() {
    int choice;
    char again;

    printf("Welcome to Isha's Customized Calculator\n");

    do {
        printf("\n----------------------------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Remainder\n");
        printf("5. Division\n");
        printf("6. Average\n");
        printf("----------------------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Result = %.2f\n", add()); break;
            case 2: printf("Result = %.2f\n", sub()); break;
            case 3: printf("Result = %.2f\n", mul()); break;
            case 4: printf("Result = %d\n", mod()); break;
            case 5: printf("Result = %.2f\n", divi()); break;
            case 6: printf("Result = %.2f\n", avg()); break;
            default: printf("Invalid choice\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("\nThank you for using the calculator 😊\n");
    return 0;
}
