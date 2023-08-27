#include <stdio.h>
int main()
{
	int i,moreh=0,minw=0;
	int h[5],w[5];
	for (i=0;i<=4;i++)
	{
		printf("enter %dth height and weight:",i+1);
		scanf("%d %d",&h[i],&w[i]);
	}
	for (i=0;i<=4;i++)
	{
		if (h[i]>170)
		{
			moreh++;
		}
	}
	for (i=0;i<=4;i++)
	{
		if (w[i]<50)
		{
			minw++;
		}
	}

	printf("number of people having hieght more than 170:%d\n", moreh);
	printf("number of people having weight less than 50:%d\n", minw);
	
	return 0;
}