#include<stdio.h>
#include<conio.h>

int main(){
	int num,n,reminder,revnum=0;
	printf("Enter a digit num:");
	scanf("%d",&num);
	n=num;
	
	while(n!=0){
			reminder=n%10;
			revnum=revnum*10+reminder;
			n=n/10;
		}
	printf("reverse number is %d \n", revnum);
	printf("%d \n",num);
	
	if(num==revnum){
		printf("number is palindrome \n");
	}else{
		printf("number is not palindrome \n");
	}
	
	
}

