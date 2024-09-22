#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int result,n,p;

    //take values from user.
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the power you want to calculate:");
    scanf("%d",&p);

    //calculate the power.
    result=pow(n,p);

    printf("The %dth power of %d is :%d",p,n,result);
    
    return 0;
}
