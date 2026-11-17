/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n%3==0)
        {
            n=n/3;
        }
   if(n==1)
   {
       printf("true\n");
   }
    else
   {
       printf("false\n");
   }
    
    return 0;
}
