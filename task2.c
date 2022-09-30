#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, N=5, countNum = 0,temp=1;
	int a[5] = {3,9,-5,4,0};
	float sum = 0;
	float sum_mod = 0;
	printf("Masiv:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		sum += a[i];
	}
	printf("The middle of the Masiv: %0.2f\n", sum/N);
	for(i=0;i<5;i++)
	{
		if(a[i]>sum/N)
		{
			countNum ++;
		}
	}
	printf("Count of numbers which bigger then middle of the massive: %d\n", countNum);

	for(i=0;i<5;i++)
	{
		if(temp == 0)
		{
			sum_mod += a[i];
		}
		if(a[i]<0)
		{
			temp = 0;
		}
	}
	printf("Sum of moduls = %0.2f", sum_mod);
	getchar(); getchar();
	return 0;
}

