#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num[10],max,min;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter  number %d: ",i+1);
        scanf("%d",&num[i]);

    }
    
    max=min=num[0];

    for (int i = 0; i < 10; i++)
    {
        if(num[i]>max){
            max=num[i];
        }
        if(num[i]<min){
            min=num[i];
        }
    }

    printf("The greatest number among 10 numbers is : %d",max);
    printf("\nThe smallest number among 10 numbers is : %d",min);
    
    
    return 0;
}
