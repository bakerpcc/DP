#include<stdio.h>
#include<stdlib.h>

//input a=3(3 different values of money), money(you want to gather this amout of money using a values), the input value[1],[2],[3]
int main()
{
	int a,money,i,j;
	//int value[20],min[20];
	int *value,*min;
	scanf("%d %d",&a,&money);
	value=(int*)malloc(a);
	min=(int*)malloc(money);

	for(i=0;i<a;i++)
		scanf("%d",&value[i]);
	for(i=0;i<=money;i++)
	{
		min[i]=i;
		for(j=0;j<a;j++)
		{
			if((value[j]<=i)&&(min[i-value[j]]+1<min[i]))
				min[i]=min[i-value[j]]+1;
		}
		printf("lcal min:%d\n",min[i]);
	}
	printf("final:%d\n",min[money]);
	return 0;
}