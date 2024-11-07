#include <stdio.h>

int main()
{
		int i,position1=1;
          int j;
		printf("Enter a number :\n");
		scanf("%d",&i);
		for(j=0;j<=31;j++)
		{
				i = i & (position << j);
				i = i | (i <<= (31-j));
		}
		printf("%d\n",i);
		return 0;
}
	
