#include <stdio.h>
void main()
{

	int i, j, a,b,n=5;
	int arr1[5] = {0,0,0,0,0};
	int arr2[5] = {1,0,-1,0,0};

	for (i = 0; i < n; ++i)
	{
		for (j = i + 1; j < n; ++j)
		{
			if (arr1[i] > arr1[j])
			{

				a = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = a;
			}

			if (arr2[i] > arr2[j])
			{

				b = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = b;
			}
		}
	}
	int count = 0;
	for (int i = 0; i <= 4; i++)
	{
		if (arr1[i] != arr2[i])
		{
			printf("no");
			break;
		}
		else
		{
			count++;
		}
	}

	if(count==n){
		printf("yes");
	}
}

