/*
Name Rizwana Nawaz
Father Name RAB NAWAZ
ROLL NO  57
class BSCS First samester
 */


#include<stdio.h>

int isPrime(int num)  // Finding Prime Number Function
{
	int result;
	
	if(num == 2 || num == 3)
	{
		result = 1;
	}
	
	else if(num%num == 0 && num%2 != 0 && num%3 != 0)
	{
		result = 1;
	}
	else
		result = 0;
	
	return result;
}


int main()  // Main Function
{
	int i, num;
	
	do
	{
		
		printf("Input a Number between 2 to 100 : ");
		scanf("%d",&num);
		
		if(num > 100 || num < 2)
		{
			printf("The number is out of Range - Press 1 to try again: ");
			scanf("%d",&i);
		}
		
		else if(num <= 100 && num >= 2)
		{
			printf("%d",isPrime(num));
			break;
		}
		
	}while(i==1);
	
	return 0;
}

