#include<stdio.h>
int main()
{
    int rowCount, columnCount, i,j;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10],[10];
    printf("Number Row");
    scanf("&d", &rowCount);

    printf("Number Column");
    scanf("%d", &columnCount);

    printf("Element of First Matrix: \n");
    for(i=0; i<rowCount; i++)
        for(j=0; j<columnCount; j++)
        scanf("%d", &firstMatrix[i][j]);

    Printf("Element Of SecondMatrix: \n");
    for(i=0; i<rowCount; i++)
        for(j=0; j<columnCount; j++)
        scanf("%d", &secondMatrix[i][j]);

    printf("Sum of entered Matrix: \n");

    for(i=0; i<rowCount; i++)
    {
        for(j=0; j<columnCount; j++)
        {

            resultMatrix[i][j]= firstMatrix[i][j]+secondMatrix[i][j];
            printf("%d\t", resultMatrix[i][j]);
        }
       printf("\n");
    }



    return 0;
}
