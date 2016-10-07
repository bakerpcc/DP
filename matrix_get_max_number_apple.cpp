#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j,m,n;
	int **S,**A;
	scanf("%d %d",&m,&n);
	S=(int**)malloc(m*sizeof(int*));
	A=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;i++){
		S[i]=(int*)malloc(n*sizeof(int));
		A[i]=(int*)malloc(n*sizeof(int));
	}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
			//printf("%d ",S[i][j]);
		}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		{
			if(i>0&&j>0){
			if(S[i][j-1]>S[i-1][j])
				S[i][j]=A[i][j]+S[i][j-1];
			else
				S[i][j]=A[i][j]+S[i-1][j];
			}
			else if(i==0&&j!=0) S[i][j]=A[i][j]+S[i][j-1];
			else if(j==0&&i!=0) S[i][j]=A[i][j]+S[i-1][j];
			else S[i][j]=A[i][j];
			printf("%d ",S[i][j]);
		}
	}
	printf("result:%d\n",S[m-1][n-1]);
	return 0;
}