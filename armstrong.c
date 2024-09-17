#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int n=0,num,openum,result=0,remainder;
	
	printf("sir plz put a number :");
	scanf("%d",&num);
	
	openum=num;
	
	while(openum!=0){
		openum/=10;
		n++;
	}
	
	openum=num;
	
	while(openum!=0){
		remainder=openum%10;
		result+= pow(remainder,n);
		openum/=10;
	}
	
	if(result==num){
		printf("%d number is an armstrong no.", num);
	}else{
		printf("%d is not an armstrong no.",num);
	}
	
}
