#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main(void)
{
	int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
	int b=0,c=1,d=1;
	int pass;
	size_t i;
	int hold;
	puts("Data items in original order");

	for (i = 0; i < SIZE;++i) 
	{
		printf("%4d",a[i]);
	}

	do{
		for (pass = 1; pass < SIZE; ++pass)
		{
		
		
			for (i = 0; i < SIZE - d; ++i)
			{
				if (a[i] > a[i + 1])
				{
					hold = a[i];
					a[i] = a[i + 1];
					a[i + 1] = hold;
					c++;
				}
				b++;
			}
		
		d++;
		}
	} while (c > b);
	puts("\nData items in ascending order");
	for (i = 0; i < SIZE;++i) 
	{
		printf("%4d",a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}