/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int n=123;
    int res=0;
    while (n>0)
        {
            int rem=n%10;
            res=res+rem;
            n=n/10;
        }
    printf("%d",res);
    return 0;
}
