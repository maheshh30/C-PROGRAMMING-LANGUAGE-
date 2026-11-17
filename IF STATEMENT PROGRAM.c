/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int target=10;
    int count=0;
    printf("enter the No.of days:\n");
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a>=target)
    {
        count=count+1;    
    }
    if(b>=target)
    {
        count=count+1;
    }
    if(c>=target)
    {
        count=count+1;
    }
    if(d>=target)
    {
        count=count+1;    
    }
    if(e>=target)
    {
        count=count+1;
    }
    printf("the no.of days:%d\n",count);
    return 0;
}
