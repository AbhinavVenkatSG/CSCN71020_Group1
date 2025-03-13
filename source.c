
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#include "validatetriangle.h";

#define NUMLIMIT 100



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
