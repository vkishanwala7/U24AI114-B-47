#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Each voter has to vote from 1-5, if any voter votes any different number it will be considered spoilt\n");
    int n,c1=0,c2=0,c3=0,c4=0,c5=0,spoilt=0;
    printf("Enter number of voters: "); //Input of size
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) //Input of array and calculation of votes
    {
        printf("Voter %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]==1)
        {
            c1++;
        }
        else if(arr[i]==2)
        {
            c2++;
        }
        else if(arr[i]==3)
        {
            c3++;
        }
        else if(arr[i]==4)
        {
            c4++;
        }
        else if(arr[i]==5)
        {
            c5++;
        }
        else
        {
            spoilt++;
        }
    }
    for(int i=0; i<n; i++) //Output of voters votes in order
    {
        printf("%d ", arr[i]);
    }
    printf("\nCandidate 1 has got %d votes\n", c1);    //Output of votes of individual candidates
    printf("Candidate 2 has got %d votes\n", c2);
    printf("Candidate 3 has got %d votes\n", c3);
    printf("Candidate 4 has got %d votes\n", c4);
    printf("Candidate 5 has got %d votes\n", c5);
    printf("Number of spoilt votes are %d", spoilt);
    getch();
    return 0;
}