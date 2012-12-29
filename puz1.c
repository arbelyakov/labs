#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,j,n,k;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
			if(a[i]>a[j])
			{ 
			k=a[j];
			a[j]=a[i];
			a[i]=k;
			}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);}
	for(i=0;i<n;i++){
		printf("%d\n",a[n-1-i]);}
	free(a);
	//getch();
}



