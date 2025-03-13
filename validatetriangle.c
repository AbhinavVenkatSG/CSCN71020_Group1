#inlcude <bool.h>
#include "validatetriangle.h"


bool validateOfTriangle(float sideA, float sideB, float sideC) {

    //Validate
    if (sideA + sideB > sideC && sideB + sideC > sideA && sideA + sideC > sideB) {

        return true;

    else {

        printf("Not a Triangle");

    }

}