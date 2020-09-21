#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int diviseur =1;
    int sum =0;
    printf("please enter a number to check if it`s perfect or not\n");
    scanf("%d",&num);
    for(diviseur;diviseur<num;diviseur++)
    {
        if(num%diviseur==0)
           sum=sum+diviseur;

    }
    if (sum==num)
        printf("%d is perfect",num);
    else
        printf("%d is not perfect",num);


}
