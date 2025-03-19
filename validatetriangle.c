#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "validatetriangle.h"



//OK so here instead of having multiple function doing the same thing i just used rami's logic to create a function that can be used for all three inputs 
bool get_triangle_input(char* side) {
    int dot_counter = 0;  
    int length = strlen(side);  
    if (length == 0) {
        printf("Invalid Input: Empty input\n");
        return false;
    }
    for (int i = 0; i < length; i++) {
        if (isdigit(side[i])) {
            continue;
        }




        if (side[i] == '.') {
            dot_counter++;

            if (dot_counter > 1) {
                printf("Invalid Input: More than one decimal point\n");
                return false;
            }
            continue;
        }



        printf("Invalid Input: Non-numeric character\n");
        return false;
    }
    return true;
}


