#include<stdio.h>

int dtb(int m){
    int binarynum[32];
    int i=0;
    
    while(m>0){
        binarynum[i]=m%2;
        m=m/2;
        i++;
    }
	int k;
	printf("Binary representation:");
    for(k=i-1;k>=0;k--){
        printf("%d",binarynum[k]);
    }
    
}

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    dtb(a);

    return 0;
}
