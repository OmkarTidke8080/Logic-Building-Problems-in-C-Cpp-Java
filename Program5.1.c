// Write a program which accept number from user and print that number of $ & * on screen

#include<stdio.h>

void Pattern(int iNo)
{

    for(int i  = 1; i <= iNo; i++)
    {
        printf("$ *\t");
    }

}



int main()
{
   int iValue = 0;

   printf("Enter Number");
   scanf("%d",&iValue);

   Pattern(iValue);



    return 0;

}