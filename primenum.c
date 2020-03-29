#include<stdio.h>
#include<math.h>

#define TRUE 1
#define FALSE 0
typedef int bool;

bool judge_prime(int num)
{
	int sqrtn = 0;
	int i = 0;
	if(num <= 3)
	{
		return num > 1 ? TRUE : FALSE;
	}
	sqrtn = (int)sqrt( num );
	for(i = 2; i <= sqrtn; i++)
	{
		if( num % i == 0)
		{
			return FALSE;
		}
	}
	return TRUE;
}

int find_min_prime(int num)
{
	int i = 1;
	int half = num / 2;
	while(i <= half)
	{
		if(TRUE == judge_prime(i))
		{
			if(num % i == 0)
			{
				return i;
			}
		}
		i++;
	}
	return 0;
}

int main()
{
	bool a = FALSE;
	int num = 0;
	int result = 0;
	int num_prime = 0;
	printf("input a num:");
	scanf("%d", &num);
	num_prime = find_min_prime(num);
	if(num_prime)
	{
		result = num / num_prime;
	}
	printf("%d\n", result);
	
	return 0;
}