#pragma once

#include <stdbool.h>

bool get_triangle_input(char* side);



/*Validate
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
*/