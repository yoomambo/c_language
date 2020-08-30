#include <stdio.h>

int main()
{
	int num , n , i;
	int count=0;
	unsigned int bin = 0x80000000;

	scanf("%d %d", &num, &n);

	while(count<32)
	{
		if(bin & num)
			printf("1");
		else
			printf("0");
		bin>>=1;
		count++;
	}
	printf("\n");
	bin = 0x80000000;

	for(i=0; i<n; i++)
	{
		if(bin & num)
		{
			num<<=1;
			num++;
		}
		else
			num<<=1;
	}

	bin = 0x80000000;
	count=0;
	
	while(count<32)
	{
		if(bin & num)
			printf("1");
		else
			printf("0");
		bin>>=1;
		count++;
	}

	printf("\n");

	return 0;
}
