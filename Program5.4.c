// Write a program which accepts N from user and print all odd numbers up to N

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d",iCnt);
        }

    }
}

int main()
{
    int iValue = 0;

    printf("ENter Number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);





    return 0;
}