#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void co_chwoli(const char* B, int co_ch, int co_wo, int co_li);

int main()
{
    char A[100];
    int ch,wo,li;
    FILE *text = fopen("chwoli.txt", "r");
    co_chwoli("chwoli.txt", ch, wo ,li);

    fclose(text);

    return 0;
}

void co_chwoli(const char* B, int co_ch, int co_wo, int co_li)
{
     char A[100];
     co_ch =0;
     co_wo =1;
     co_li =1;

     FILE *file = fopen(B, "r");
     if (file != NULL)
     {
        while (fgets(A, sizeof(A), file) != NULL)
        {
            for (int i = 0; A[i] != '\0'; i++)
            {
                co_ch++;
            }

            for (int i = 0; A[i] != '\0'; i++)
            {
                if (A[i] == ' ' || A[i] == '\n')
                {
                    co_wo++;
                }
                
            }

            for (int i = 0; A[i] != '\0'; i++)
            {
                if (A[i] == '\n')
                {
                    co_li++;
                }
                
            }
        }
        
     }
    printf("No. of characters are %d\n", co_ch);
    printf("No. of words are %d\n", co_wo);
    printf("No. of Lines are %d\n", co_li);
    getch();
    return 0;
}