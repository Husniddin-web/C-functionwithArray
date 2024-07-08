#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Husniddin.h"






int main(){
    int n;

    printf("Massivning elementlar sonini kiriting: ");
    scanf("%d", &n);

    int A[n];

    fillArray(A,n);
    
    displayFunction(A,n);
   
  

}