/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    float avgmarks;
    printf("enter avgmarks:\n");
    scanf("%f",&avgmarks);
    if((avgmarks>=80)&&(avgmarks<=100))
    {printf("grade=A\n");
    }
    else if((avgmarks>=70)&&(avgmarks<=79))
    {printf("grade=B\n");
        }
     else if((avgmarks>=50)&&(avgmarks<=69))
    {printf("grade=C\n");
        }
     else if((avgmarks>=35)&&(avgmarks<=49))
    {printf("grade=D\n");
        }
    else 
     {
         printf("you just fail");
     }
}
