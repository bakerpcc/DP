#include<stdio.h>
#include<stdlib.h>

//searching for LIS(longest increasing subsequence)

int main()
{
	int a,i,j,len;
	int *p,*d;
	len=1;
	scanf("%d",&a);
	p=(int*)malloc(a);
	d=(int*)malloc(a);
	for(i=0;i<a;i++)
		scanf("%d",&p[i]);
	for(i=0;i<a;i++){
		d[i]=1;
		for(j=0;j<i;j++)
		{
			if(p[j]<=p[i]&&d[j]+1>d[i])
				d[i]=d[j]+1;
		}
		if(len<d[i]) len=d[i];
	}
	printf("result:%d\n",len);
}