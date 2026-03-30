Assignment No: 1

Name: Vaishnavi
USN: SG25CSE165
Department: Computer Science and Engineering
Date: 30/03/2026
  
--------------------------------------------------

Q.no2: Student Result System

Solution:
#include <stdio.h>

int calculateTotal(int m1, int m2, int m3, int m4, int m5) {
    return m1 + m2 + m3 + m4 + m5;
}

float calculatePercentage(int total) {
    return total / 5.0;
}

int main() {
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = calculateTotal(m1, m2, m3, m4, m5);
    percentage = calculatePercentage(total);

    printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}

// Sample Input:
// 80 70 90 85 75

// Sample Output:
// Total = 400
// Percentage = 80.00

--------------------------------------------------

Q.no3: ATM PIN Verification

Solution:
#include <stdio.h>

int checkPIN(int pin) {
    if (pin == 1234)
        return 1;
    else
        return 0;
}

int main() {
    int pin;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if (checkPIN(pin))
        printf("Access Granted\n");
    else
        printf("Invalid PIN\n");

    return 0;
}

// Sample Input:
// 1234

// Sample Output:
// Access Granted

--------------------------------------------------

Q.no4: Palindrome Employee ID

Solution:
#include <stdio.h>

int main() {
    int num, original, reverse = 0, remainder;

    printf("Enter ID: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

// Sample Input:
// 121

// Sample Output:
// Palindrome

--------------------------------------------------

Q.no5: Fibonacci Series (Recursion)

Solution:
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

// Sample Input:
// 5

// Sample Output:
// 0 1 1 2 3

--------------------------------------------------

Q.no7: Prime Number Checker

Solution:
#include <stdio.h>

int isPrime(int num) {
    int i;

    if (num <= 1)
        return 0;

    for (i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}

// Sample Input:
// 7

// Sample Output:
// Prime
