#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

#define COORD_LIMIT 2

//#include "validatetriangle.h"

#define NUMLIMIT 100
char sideA[NUMLIMIT];
char sideB[NUMLIMIT];
char sideC[NUMLIMIT];


// OK, so I made sure the code is structured properly, but I'm still getting multiple errors in linking (Just KILL me atp).
// One of the errors was a typo in the include took me 2 hours to figure that one out.
// The code runs in a separate project, but for some stupid reason, it decided not to work here.
//For my own insanity i am going have the function in this main.c file apprantly the program is having problem in link our .h file.
//So if the function is in main it work perfectly fine code safe against most of the test cases we discussed include the double decimal 




bool get_triangle_input(char* side) {
    int dot_counter = 0;
    int length = strlen(side);
    if (length == 0) {
        printf("Invalid Input: Empty input\n");
        return false;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < length; i++) {
        if (isdigit(side[i])) {
            continue;
        }
        else {
            printf("Please Enter a Number as Input ");
                return false;
                exit(EXIT_FAILURE);
        }
        if (side[i] == '.') {
            dot_counter++;

            if (dot_counter > 1) {
                printf("Invalid Input: More than one decimal point\n");
                return false;
                exit(EXIT_FAILURE);
            }
            continue;
        }

        printf("Invalid Input: Non-numeric character\n");
        return false;
    }
    return true;
}


bool is_valid_input(char* input) {
    int dot_counter = 0;
    int length = strlen(input);


    if (length == 0) {
        printf("Invalid Input: Empty input\n");
        return false;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < length; i++) {
        if (isdigit(input[i])) {
            continue;
        }
        if ((i == 0) && (input[i] == '+' || input[i] == '-')) {
            continue;
        }
        if (input[i] == '.') {
            dot_counter++;
            if (dot_counter > 1) {
                printf("Invalid Input: More than one decimal point\n");
                return false;
                exit(EXIT_FAILURE);
            }
            continue;
        }
        printf("Invalid Input: Non-numeric character\n");
        return false;
        exit(EXIT_FAILURE);
    }

    return true;
}
float get_valid_input(char* prompt) {
        char input[NUMLIMIT]; 
        float value;
        while (1) {
            printf("%s", prompt);
            fgets(input, sizeof(input), stdin); 
            input[strcspn(input, "\n")] = 0;
            if (is_valid_input(input)) {
                value = (float)atof(input);  
                break; 
            }
            else {
                printf("Invalid input. Please enter a valid number.\n");
            }
        }
        return value;
    }

void RectangleFunction(float P1[COORD_LIMIT], float P2[COORD_LIMIT], float P3[COORD_LIMIT], float P4[COORD_LIMIT]) {
    // Initial 
    int x = 0;
    int y = 1;
                
   float Q1[COORD_LIMIT] = { P1[x],P1[y] };
   float Q2[COORD_LIMIT] = { P2[x],P2[y] };
   float Q3[COORD_LIMIT] = { P3[x],P3[y] };
   float Q4[COORD_LIMIT] = { P4[x],P4[y] };


    // Largest Y Value 
    float LargestY = Q1[y];

    if (LargestY < Q2[y]) {
        LargestY = Q2[y];
    }

    if (LargestY < Q3[y]) {
        LargestY = Q3[y];
    }

    if (LargestY < Q4[y]) {
        LargestY = Q4[y];
    }

    printf("The largest y is: %f\n", LargestY);


    // Lowest Y Value 
    float LowestY = Q1[y];

    if (LowestY > Q2[y]) {
        LowestY = Q2[y];
    }

    if (LowestY > Q3[y]) {
        LowestY = Q3[y];
    }

    if (LowestY > Q4[y]) {
        LowestY = Q4[y];
    }

    printf("The Lowest y is: %f\n", LowestY);


    // Largest X Value 
    float LargestX = Q1[x];

    if (LargestX < Q2[x]) {
        LargestX = Q2[x];
    }

    if (LargestX < Q3[x]) {
        LargestX = Q3[x];
    }

    if (LargestX < Q4[x]) {
        LargestX = Q4[x];
    }

    printf("The largest x is: %f\n", LargestX);

    // Lowest X Value 
    float LowestX = Q1[x];

    if (LowestX > Q2[x]) {
        LowestX = Q2[x];
    }

    if (LowestX > Q3[x]) {
        LowestX = Q3[x];
    }

    if (LowestX > Q4[x]) {
        LowestX = Q4[x];
    }

    printf("The largest x is: %f\n", LowestX);


    float BL[2] = { LowestX, LowestY };
    float TL[2] = { LowestX, LargestY };
    float BR[2] = { LargestX, LowestY };
    float TR[2] = { LargestX, LargestY };

    // BL and TL Share x values
    // BL and BR Share y values
    // BR and TR share x values
    // TR and TL share y values

    printf("Bottom Left: %f, %f\n", LowestX, LowestY);
    printf("Top Left: %f, %f\n", LowestX, LargestY);
    printf("Bottom Right: %f, %f\n", LargestX, LargestY);
    printf("Top Right: %f, %f\n", LargestX, LowestY);

    if (BL[x] == TL[x] && BL[y] == BR[y] && BR[x] == TR[x] && TR[y] == TL[y]) {

        printf("This is a rectangle\n");
    }

    else {

        printf("This is not a triangle\n");
    }

}
 int main() {
        int choice;
        bool program = true;;
      
        while (program) {
            printf("\nMenu:\n1. Triangle Feature\n2. Rectangle Feature\n3. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            getchar();

            if (choice == 1) {
                printf("Enter the length of the first side: ");
                scanf("%s", sideA);
                if (get_triangle_input(sideA)==false) {
                    program = false;
                }

                printf("Enter the length of the second side: ");
                scanf("%s", sideB);
                if (get_triangle_input(sideB)==false) {
                    program = false;
                }

                printf("Enter the length of the third side: ");
                scanf("%s", sideC);
                if (get_triangle_input(sideC)==false) {
                    program = false;
                }
                int sideA_int = atoi(sideA);                    
                int sideB_int = atoi(sideB);
                int sideC_int = atoi(sideC);
                if (sideA_int + sideB_int > sideC_int && sideB_int + sideC_int > sideA_int && sideA_int + sideC_int > sideB_int) {
                    return true;
                }
                else {
                    printf("Not a Triangle");
                    program = false;

                }
            }
            else if (choice == 2) {
                // Rectangle functionality (now implemented)
                
                float point1 = get_valid_input("Enter point1 (x): ");        
                float point2 = get_valid_input("Enter point2 (y): ");
                float point3 = get_valid_input("Enter point3 (x): ");
                float point4 = get_valid_input("Enter point4 (y): ");
                float point5 = get_valid_input("Enter point5 (x): ");
                float point6 = get_valid_input("Enter point6 (y): ");
                float point7 = get_valid_input("Enter point7 (x): ");
                float point8 = get_valid_input("Enter point8 (y): ");

                float corner1[2] = { point1, point2 };
                float corner2[2] = { point3, point4 };
                float corner3[2] = { point5, point6 };
                float corner4[2] = { point7, point8 };
                
                RectangleFunction(corner1, corner2, corner3, corner4);
                
                program = false;
            }
            else if (choice == 3) {
                program = false;
            }
            else {
                printf("Invalid choice. Try again.\n");
            }
        }

        return 0;
    }
