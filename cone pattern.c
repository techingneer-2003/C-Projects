#include<stdio.h>
int main() { int rows;

printf("Enter the number of rows :\t");
scanf("%d",&rows);

for(int row_plus = 1; row_plus<=rows; row_plus++){

    for(int ind=1; ind<= row_plus; ind++){ printf(" ") ;}

    for(int cone = 1; cone<=  2*(rows-row_plus)+1;cone++){ printf("🍧") ;}

    printf("\n");
}

return 0;
}
