#include <stdio.h>

#include <stdlib.h>

void main()
{
 int matrix[3][3]={{1,2,3},
{4,5,6},{7,8,9}};
int columns,rows;
for(columns=0;columns<=2;columns++){
    for(rows=0;rows<=2;rows++){
        printf(" %d " ,matrix[columns][rows]);
    }
    printf("\n");
}
}
