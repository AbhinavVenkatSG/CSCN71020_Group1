#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "validatetriangle.h"
#include <stdlib.h>

#define NUMLIMIT 20

void calculate_angles(float, float, float, double*, double*, double*);

double clamp(double value, double min, double max) {
    if (value < min) return min;
    if (value > max) return max;
    return value;
}

bool get_triangle_input() {
    printf("Triangle\n\n");

    char sideA[NUMLIMIT];
    char sideB[NUMLIMIT];
    char sideC[NUMLIMIT];

    // Side A Input
    printf("Enter the first side: ");
    scanf("%s", sideA);
    
    int sideALength = strlen(sideA);
    bool isValid = true;
    int dotCount = 0;
    for (int i = 0; i < sideALength; i++) {
        if (!isdigit(sideA[i])) {
            if (sideA[i] == '.' && dotCount == 0) {
                dotCount++;  
            } else {
                isValid = false;
                break;
            }
        }
    }
    if (!isValid) {
        printf("Invalid Input\n");
        return;
    }

    // Side B Input
    printf("Enter the second side: ");
    scanf("%s", sideB);
    
    int sideBLength = strlen(sideB);
    for (int i = 0; i < sideBLength; i++) {
        if (!isdigit(sideB[i]) && sideB[i] != '.') {
            printf("Invalid Input\n");
            return;
        }
    }
    
    // Side C Input
    printf("Enter the third side: ");
    scanf("%s", sideC);
    
    int sideCLength = strlen(sideC);
    for (int i = 0; i < sideCLength; i++) {
        if (!isdigit(sideC[i]) && sideC[i] != '.') {
            printf("Invalid Input\n");
            return;
        }
    }

    float numA = strtof(sideA, NULL);
    float numB = strtof(sideB, NULL);
    float numC = strtof(sideC, NULL);

    // Validate triangle inequality
    if (numA + numB > numC && numB + numC > numA && numA + numC > numB) {
        double angle_A, angle_B, angle_C;
        calculate_angles(numA, numB, numC, &angle_A, &angle_B, &angle_C);
    } else {
        printf("Not a Triangle\n");
    }
}

void calculate_angles(float sideA, float sideB, float sideC, double* angle_A, double* angle_B, double* angle_C) {
    double cos_A = (sideB * sideB + sideC * sideC - sideA * sideA) / (2 * sideB * sideC);
    double cos_B = (sideA * sideA + sideC * sideC - sideB * sideB) / (2 * sideA * sideC);
    double cos_C = (sideA * sideA + sideB * sideB - sideC * sideC) / (2 * sideA * sideB);

    cos_A = clamp(cos_A, -1.0, 1.0);
    cos_B = clamp(cos_B, -1.0, 1.0);
    cos_C = clamp(cos_C, -1.0, 1.0);

    *angle_A = acos(cos_A) * (180.0 / 3.14);
    *angle_B = acos(cos_B) * (180.0 / 3.14);
    *angle_C = acos(cos_C) * (180.0 / 3.14);

    printf("The angles of the triangle are: %.2lf, %.2lf, %.2lf\n", *angle_A, *angle_B, *angle_C);
}


   void get_rectangle_input() {
       int test; 
    printf("Rectangle\n");


}

int main() {
    int choice;
    bool ProgramOn = true;
    while (ProgramOn) {
        printf("\nMenu:\n1. Triangle Feature\n2. Rectangle Feature\n3. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);
        
        switch (choice)
        {
        case 1:
           ProgramOn = get_triangle_input();
            break;
       
        case 2:
            get_rectangle_input();
            break;

        case 3:
            ProgramOn = false;

        default:
            printf("Invalid choice. Try again.\n");
        }
   }
    return 0;
}
