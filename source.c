
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


#define NUMLIMIT 100


void get_triangle_input() {
    printf("Triangle\n\n");

    // Function 1:
  // Separate function to get side length input from user as floats
  // Separate function to validate, no characters, no special characters, no neg numbers

  // initialize variables as strings
    char sideA[NUMLIMIT];
    char sideB[NUMLIMIT];
    char sideC[NUMLIMIT];


// Side A

   // Side A Input
    printf("Enter the first side: "); 
    int sideASymbols = scanf("%s", sideA);

    int sideALength = strlen(sideA);

    for (int i = 0; i < sideALength;) {
        if (isdigit(sideA[i])) {
            i++;
        }
        // add if statement to check for decimal points
        else {
            printf("Input Invalid");
            return 1;
        }
    }

   
    // Side B Input
    printf("Enter the second side: ");
    int sideBSymbols = scanf("%s", sideB);

   int sideBLength = strlen(sideB);

   for (int i = 0; i < sideBLength;) {
        if (isdigit(sideB[i])) {
            i++;
        }
        // add if statement to check for decimal points
        else {
            printf("Invalid Input");
            return 1;
        }
        
    }
   
    // Side C Input
    printf("Enter the third side: ");
    int sideCSymbols = scanf("%s", sideC);

    int sideCLength = strlen(sideC);

    for (int i = 0; i < sideCLength;) {
       if (isdigit(sideC[i])) {
            i++;
        }
       // add if statement to check for decimal points
        else {
            printf("Input Invalid\n");
            return 1;
        }
    }

  strtof(sideA, NULL);
  strtof(sideB, NULL);
  strtof(sideC, NULL);

     //Validate
     if (sideA + sideB > sideC && sideB + sideC > sideA && sideA + sideC > sideB) {

        return sideA, sideB, sideC;
        calculate_angles(int* sideA, int* sideC, int* sideB, double* angle_A, double* angle_B, double* angle_C);

    else {
        
        printf("Not a Triangle");
    
    }

     //Function 2:
    // Final function to calculate the angle
    void calculate_angles(int *sideA, int* sideC, int* sideB, double* angle_A, double* angle_B, double* angle_C) {
    
        double cos_A = (*sideB) *(* sideB) + (*sideC) * (*sideC) - (*sideA) * (*sideA)) / (2 * (*sideB) * (*sideC));
        double cos_B = (*sideA) * (*sideB) + (*sideC) * (*sideC) - (*sideB) * (*sideB)) / (2 * (*sideA) * (*sideC));
        double cos_C = ((*sideA) * (*sideA) + (*sideB) * (*sideB) - (*sideC) * (*sideC)) / (2 * (*sideA) * (*sideB));


        cos_A = clamp(cos_A, -1.0, 1.0);
        cos_B = clamp(cos_B, -1.0, 1.0);
        cos_C = clamp(cos_C, -1.0, 1.0);

        *angle_A = acos(cos_A) * (180.0 / 3.14);
        *angle_B = acos(cos_B) * (180.0 / 3.14);
        *angle_C = acos(cos_C) * (180.0 / 3.14);

        printf("The angles of the triangles are:%d,%d,%d", *angle_A, *angle_B, *angle_C);
    }

}


   void get_rectangle_input() {
       int test; 
    printf("Rectangle\n");


}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n1. Triangle Feature\n2. Rectangle Feature\n3. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);
        if (choice == 1) {
            get_triangle_input();
        }
        else if (choice == 2) {
            get_rectangle_input();
        }
        else if (choice == 3) {
           // break;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
   }
    return 0;
}
