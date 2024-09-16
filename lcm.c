#include<stdio.h>
//#inculde<conio.h>

int main(){
	int n1,n2;
	
	printf("enter the first number: ");
	scanf("%d", &n1);
	printf("enter the second number:");
	scanf("%d", &n2);
	
	int result=lcm(n1,n2);
	
	printf("the lcm of %d and %d is %d",n1,n2,result);
	
}

int lcm(int a, int b){
	return (a*b)/gcd(a,b);
}

int gcd(int a, int b){
	
	while (b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
