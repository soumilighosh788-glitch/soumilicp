// W.C.P to check whether a number is prime or not using while and for loof 
#include<stdio.h>
int main()
{
	int n,i=2;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n){
        if(n%i==0){
        	break;
        	i++;
		}
	}
	if(n<=1){
     	printf("not a prime number");
    }
    else if(i==n){
    	printf("not a number");
	}
	else{
		printf("not a prime");
	}
	return 0;
}
