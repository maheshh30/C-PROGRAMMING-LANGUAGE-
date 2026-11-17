/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
   char a='g';
    int b=10;
    float c=6.622;
    double d=6668252365;
    printf("size of char is:%zu\n",sizeof(a));
    printf("size of integer is:%zu\n",sizeof(b));
    printf("size of float is:%zu\n",sizeof(c));
    printf("size of double is:%zu\n",sizeof(d));
    return 0;
}
