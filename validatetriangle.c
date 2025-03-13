#inlcude <bool.h>
#include "validatetriangle.h"


bool get_triangle_input() {
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
            return false;
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
            return false;
        }

    }

   

    for (int i = 0; i < sideCLength;) {
        if (isdigit(sideC[i])) {
            i++;
        }
        // add if statement to check for decimal points
        else {
            printf("Input Invalid\n");
            return false;
        }
    }

    strtof(sideA, NULL);
    strtof(sideB, NULL);
    strtof(sideC, NULL);

    return true;
}

