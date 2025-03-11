#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void get_triangle_input() {
    printf("Triangle\n\n");
  
    // Function 1:
  // Separate function to get side length input from user as floats
  // Separate function to validate, no characters, no special characters, no neg numbers

  // initialize variables as floats
    float sideA = 0;
    float sideB = 0;
    float sideC = 0;


// Side A

   // Side A Input
    printf("Enter the first side: ");
    int sideASymbols = scanf("%f", &sideA);
   
   // Side B Input
    printf("Enter the second side: ");
    int sideBSymbols = scanf("%f", &sideB);

   // Side C Input
    printf("Enter the third side: ");
    int sideCSymbols = scanf("%f", &sideC);

    // Validate
    if (sideASymbols != 1 || sideA < 0 || sideBSymbols != 1 || sideB < 0 || sideCSymbols != 1 || sideC < 0) {
        printf("Invalid Input.\n");
    }

    else {
        printf("Jasons function should be here");
        // Call Jasons Function
    }

    // Function 2:
    // Final function to calculate the angle

}


void get_rectangle_input() {
    printf("Rectangle\n");


}

int main() {
    int choice;
    //while (1) {
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
   // }
    return 0;
}
