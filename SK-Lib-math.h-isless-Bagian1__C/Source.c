#include <stdio.h>      /* printf */
#include <math.h>       /* isless, log */
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    double hasil;
    hasil = log(10.0);

    if (isless(hasil, 0.0)) {
        printf("log(10.0) is negative");
    } else {
        printf("log(10.0) is not negative");
    }
        
    _getch();
    return 0;
}