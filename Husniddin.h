#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fillArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d chi indexdagi element kiriting : ", i);
        scanf("%d", &A[i]);
    }
}

int oddCount(int A[], int n) {
    int count = 0;
    int sum = 0 ; 
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) { // Odd numbers are those not divisible by 2
            sum+=A[i];
            count++;
        }
    }
    printf("%d ta toq son ",count);
    return  sum;
}
void oddNumbers(int A[], int n) {
       
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) { // Odd numbers are those not divisible by 2
            printf("%d ",A[i]);
        }
    }
    printf("\n");
}



int evenCount(int A[], int n) {
    int count = 0;
    int sum = 0 ; 
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) { // Odd numbers are those not divisible by 2
            sum+=A[i];
            count++;
        }
    }
    printf("%d ta juft son ",count);
    return  sum;
}
void evenNumbers(int A[], int n) {
       
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) { // Odd numbers are those not divisible by 2
            printf("%d ",A[i]);
        }
    }
    printf("\n");
}



int negativeCount(int A[], int n) {
    int count = 0;
    int sum = 0 ; 
    for (int i = 0; i < n; i++) {
        if (A[i] <  0) { // Odd numbers are those not divisible by 2
            sum+=A[i];
            count++;
        }
    }
    printf("%d ta manfiy son ",count);
    return  sum;
}
void negativeNumbers(int A[], int n) {
       
    for (int i = 0; i < n; i++) {
        if (A[i] <  0) { // Odd numbers are those not divisible by 2
            printf("%d ",A[i]);
        }
    }
    printf("\n");
}





int positiveCount(int A[], int n) {
    int count = 0;
    int sum = 0 ; 
    for (int i = 0; i < n; i++) {
        if (A[i] >   0) { // Odd numbers are those not divisible by 2
            sum+=A[i];
            count++;
        }
    }
    printf("%d ta musbat son ",count);
    return  sum;
}
void positiveNumbers(int A[], int n) {
       
    for (int i = 0; i < n; i++) {
        if (A[i] >   0) { // Odd numbers are those not divisible by 2
            printf("%d ",A[i]);
        }
    }
    printf("\n");
}







bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i< sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int primeCount(int A[], int n) {
    int count = 0;
    int sum = 0 ; 
    for (int i = 0; i < n; i++) {
        if (isPrime(A[i])) { // Odd numbers are those not divisible by 2
            sum+=A[i];
            count++;
        }
    }
    printf("%d ta tub son ",count);
    return  sum;
}
void primeNumbers(int A[], int n) {
       
    for (int i = 0; i < n; i++) {
        if (isPrime(A[i])) { // Odd numbers are those not divisible by 2
            printf("%d ",A[i]);
        }
    }
    printf("\n");
}


void displayFunction(int A[], int n) {
    const char* options[] = {
        "Massiv elementlarini toqlarini chiqaruvchi",
        "Massiv elementlarini toqlarini yig‘indisi va ularning sonini topish",
        "Massiv elementlarini juftlarini chiqarish",
        "Massiv elementlarini juftlarini yig‘indisi va ularning sonini topish",
        "Massiv elementlarini manfiylarini chiqarish",
        "Massiv elementlarini manfiylarini yig‘indisi va ularning sonini topish",
        "Massiv elementlarini musbatlarini chiqarish",
        "Massiv elementlarini musbatlarini yig‘indisi va ularning sonini topish",
        "Massiv elementlarini tublarini chiqarish",
        "Massiv elementlarini tublarini yig‘indisi va ularning sonini topish"
    };

    int length = sizeof(options) / sizeof(options[0]);

    printf("Assallomu Allaykum, xush kelibsiz!\n");

    while (1) {
        for (int i = 0; i < length; i++) {
            printf("%d > %s\n", i, options[i]);
        }
        printf("%d > Exit\n", length);

        int user_choice;
        printf("Tanlovingizni kiriting: ");
        scanf("%d", &user_choice);

        if (user_choice == length) {
            printf("Chiqish...\n");
            exit(0);
        }

        switch (user_choice) {
            case 1:
                printf("Toq sonlarning yigindisi: %d\n", oddCount(A, n));
                break;
            case 2:
                printf("Toq sonlar: ");
                oddNumbers(A, n);
                break;
            case 3:
                printf("Juft sonlarning yigindisi: %d\n", evenCount(A, n));
                break;
            case 4:
                printf("Juft sonlar: ");
                evenNumbers(A, n);
                break;
            case 5:
                printf("Manfiy sonlarning yigindisi: %d\n", negativeCount(A, n));
                break;
            case 6:
                printf("Manfiy sonlar: ");
                negativeNumbers(A, n);
                break;
            case 7:
                printf("Musbat sonlarning yigindisi: %d\n", positiveCount(A, n));
                break;
            case 8:
                printf("Musbat sonlar: ");
                positiveNumbers(A, n);
                break;
            case 9:
                printf("Tub sonlarning yigindisi: %d\n", primeCount(A, n));
                break;
            case 10:
                printf("Tub sonlar: ");
                primeNumbers(A, n);
                break;
            default:
                printf("Notogri tanlov. Iltimos, qaytadan urinib ko‘ring.\n");
                break;
        }
    }
}