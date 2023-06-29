// Accept number of rows and columns from user and display below pattern

/*
input iRow = 4
input iCol = 4

output :  *  *  *  *
          *  #  *  *
          *  *  $  *
          *  *  *  *

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 1;

    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if((j == 1) || (j == iCol) || (i == 1) || (i = iRow))
            {
                printf("*\t");
            }
            if(j >= i)
            {
                printf("#\t");
            }
            if(j > i )
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }    
        }
        printf("\n");
    }

}



int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns\n");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);



    return 0;

}