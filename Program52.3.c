// Write a recursive function which displays below pattern

// Output :  5  4  3  2  1

#include<stdio.h>

void DisplayR(int iNo)
{

    if(iNo == 0)
    {
        return;
    }
  printf("%d\t",iNo);
  
  DisplayR(iNo - 1);

 

}
int main()
{
   int iValue = 0;
  
   printf("Enter the number of elements : ");
   scanf("%d",&iValue);

   DisplayR(iValue);




    return 0;
}