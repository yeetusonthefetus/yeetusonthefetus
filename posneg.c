#include <stdio.h>
#include <math.h>

int main(){
    double num;
    printf("Enter a number: ");
    scanf("%lf",&num);
    if (num>0){
        printf("\nNumber is positive\n");
    }
    else if (num<0){
        printf("\nNumber is negative\n");
    }
    else {
        printf("\nNumber is equal to zero\n");
    }
    return 0;

}