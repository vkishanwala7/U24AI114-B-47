#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//This program will do matrix multiplication using pointers
int main()
{
    int m, n, p;
    printf("Enter number of rows for matrix 1: ");
    scanf("%d", &m);
    printf("Enter number of columns for matrix 1 and rows for matrix 2 (Both are same): ");
    scanf("%d", &n);
    printf("Enter number of columns for matrix 2: ");
    scanf("%d", &p);
    
    int **ptr1 = (int **) malloc(m*sizeof(int *));
    for(int i=0; i<m; i++)
    {
        ptr1[i] = (int *)malloc(n*sizeof(int));
    }
    
    int **ptr2 = (int **) malloc(n*sizeof(int *));
    for(int i=0; i<n; i++)
    {
        ptr2[i] = (int *)malloc(p*sizeof(int));
    }
    
    int **result = (int **)malloc(m*sizeof(int *));
    for(int i=0; i<m; i++)
    {
        result[i] = (int *)malloc(p*sizeof(int));
    }
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter element [%d][%d] for matrix 1: ", i+1,j+1);
            scanf("%d", &ptr1[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("Enter element [%d][%d] for matrix 2: ", i+1,j+1);
            scanf("%d", &ptr2[i][j]);
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            result[i][j]=0;
            for(int k=0; k<n; k++)
            {
                result[i][j] += ptr1[i][k]*ptr2[k][j];
            }
        }
    }
    printf("\nResult Matrix\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<m; i++)
    {
        free(ptr1[i]);
    }
    free(ptr1);
    for(int i=0; i<n; i++)
    {
        free(ptr2[i]);
    }
    free(ptr2);
    for(int i=0; i<m; i++)
    {
        free(result[i]);
    }
    free(result);
    getch();
    return 0;
}