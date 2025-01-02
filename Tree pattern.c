#include<stdio.h>
int main() { int rows;

printf("Enter the number of rows :\t");
scanf("%d",&rows);

for(int row_inc = 0; row_inc<=rows; row_inc++){

    for(int space = 1; space<= rows-row_inc; space++){ printf(" ") ;}

    for(int star = 1; star<= row_inc; star++){ printf("🎄") ;}

    printf("\n");
}

return 0;
}
