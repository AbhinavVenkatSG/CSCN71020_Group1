#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include "validatetriangle.h"

#define NUMLIMIT 100
char sideA[NUMLIMIT];
char sideB[NUMLIMIT];
char sideC[NUMLIMIT];

// OK, so I made sure the code is structured properly, but I'm still getting multiple errors in linking (Just KILL me atp).
// One of the errors was a typo in the include this  took me 2 hours to figure that one out.
// The code runs in a separate project, but for some stupid reason, it decided not to work here.
 int main() {
        int choice;

        while (1) {
            printf("\nMenu:\n1. Triangle Feature\n2. Rectangle Feature\n3. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            getchar();

            if (choice == 1) {
                printf("Enter the length of the first side: ");
                scanf("%s", sideA);
                if (get_triangle_input(sideA)==false) {
                    return 1;
                }

                printf("Enter the length of the second side: ");
                scanf("%s", sideB);
                if (get_triangle_input(sideB)==false) {
                    return 1;
                }

                printf("Enter the length of the third side: ");
                scanf("%s", sideC);
                if (get_triangle_input(sideC)==false) {
                    return 1;
                }
                int sideA_int = atoi(sideA);                    
                int sideB_int = atoi(sideB);
                int sideC_int = atoi(sideC);
                if (sideA_int + sideB_int > sideC_int && sideB_int + sideC_int > sideA_int && sideA_int + sideC_int > sideB_int) {
                    return true;
                }
                else {
                    printf("Not a Triangle");
                    return false;

                }



            }
            else if (choice == 2) {
                // Rectangle functionality (not implemented)
            }
            else if (choice == 3) {
                break;
            }
            else {
                printf("Invalid choice. Try again.\n");
            }
        }

        return 0;
    }
