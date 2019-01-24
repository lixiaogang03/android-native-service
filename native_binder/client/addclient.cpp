
// addclent.cpp
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#include "SQR2.h"

using namespace android;

int main(int argc, char** argv) {

    SQR2 *sqr = new SQR2();

    int num1 = sqr->square(2, sqr);

    printf("square(2)=%d\n", num1);

    ALOGE("square(2)=%d\n", num1);

    int num2 = sqr->add(2, 3);

    printf("add(2, 3)=%d\n", num2);

    ALOGE("add(2, 3)=%d\n", num2);

    int num3 = sqr->mul(2, 3);

    printf("mul(2, 3)=%d\n", num3);

    ALOGE("mul(2, 3)=%d\n", num3);
    
    return 0;

}
