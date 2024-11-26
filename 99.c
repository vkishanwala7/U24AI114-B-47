#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void Vowels(const char* B, int *count)
{
    char V[] = "AEIOUaeiou";
    int vowel_count = sizeof(V) / sizeof(V[0]);  
    
    char A[100];
    *count = 0;

    FILE* file = fopen(B, "r");
    if (file != NULL)
    {
        while (fgets(A, sizeof(A), file)!= NULL)
        {
            printf("\nInput stored in the file was: %s", A);
            for (int i = 0; A[i] != '\0'; i++)
            {
                for (int j = 0; j < vowel_count ; j++)
                {
                    if (A[i] == V[j])
                    {
                    (*count)++;
                    break;
                    }
                } 
            }     
        }
    }
}
int main()
{   
    FILE *txt = fopen("Vowels.txt","w");
    int num;

    char A[100];
    fgets(A, sizeof(A), stdin);
    fputs(A, txt);
    fclose(txt);

    FILE *text = fopen("Vowels.txt","r");
    
    Vowels("Vowels.txt", &num);

    printf("\nThere are %d vowels in the file", num);
    
    fclose(txt);
    getch();
    return 0;
}