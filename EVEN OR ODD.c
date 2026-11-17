/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
int n;
    int c=0;
    printf("enter your number\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("invalid");
    }
    else
    {
        for(int i=1;i<=n;i++)
            {
    if((n%i)==0)
        c=c+1;
}
if(c==2)
{
    printf("prime number");
}
else{
    printf("not a prime number");
}
    return 0;
}
}
