#include <stdio.h>

int main()
{
	int n, eleni[200]={0}, obor[100]={0}, i, Rud=0;
	do
	{
		//printf("Vavedi broi eleni: ");
		scanf("%d",&n);
	}
	while(n%2==0 || n<=0 || n>200);
	for(i=1;i<=n;i++)
	{
		do
		{
			//printf("%d-ya elen spi v koshara No:",i);
			scanf("%d",&eleni[i]);
		}
		while(eleni[i]<1 || eleni[i]>100 || obor[eleni[i]]>1);
		obor[eleni[i]]++;
	}
	for(i=0;i<100;i++)
		if(obor[i]==1)
		{
			if(Rud==0)
				Rud=i;
			else
				return -1;
		}
	printf("%d\n",Rud);
	/*for(i=0;i<=n;i++)
		if(eleni[i]==Rud)
		{
			//printf("Rudolf e ")
			printf("%d",i);
			//printf("-yat elen.\n");
			return 0;
		}*/
	return -1;
}