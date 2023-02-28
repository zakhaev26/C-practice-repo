#include <stdio.h>
int main()
{

	int arr[5] = {0,0,0,0,0};
	int brr[5] = {1,0,-1,0,0};
	int p1=1;
	int p2=1;
	int s1=0;
	int s2=0,count=0;
	for (int i = 0; i <= 4; i++)
	{
		p1=arr[i]*p1;
		s1=arr[i]+s1;
		s2=brr[i]+s2;
		p2=brr[i]*p2;
		for(int j=0;j<5;j++)
		{
         if(arr[i]==arr[j])
		 count++;
          

		}

	}

	if ((s1==s2)&&(p1==p2)&&count==5)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}



