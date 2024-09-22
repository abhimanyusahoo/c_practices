#include<stdio.h>

int main(int argc, char const *argv[])
{
    int power=1,n,p;

    //take values from user.
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the power you want to calculate:");
    scanf("%d",&p);

    //calculate the power.
    for (int i = 1; i <= p; i++)
    {
        power=power*n;

    }

    printf("The %dth power of %d is :%d",p,n,power);
    
    return 0;
}
