#include<stdio.h>
#define M 10
void input(int *a)
{
	int i=0;
	printf("\n enter no:");
	while(i<M)
	{
		scanf("%d",(a+i));
		i++;
	}
}
void display(int *a,int flg)
{
	int i=0;
	if(flg==0)
	   printf("\n before sorting:");
	else
	   printf("\n after sorting:");
	while(i<M)
	   printf("%4d",a[i++]);
}
void shell(int *a)
{
	int i,h,w,curr;
	i=(M-1)/2;
	while(i>0)
	{
		for(curr=i;curr<M;curr++)
		{
			h=a[curr];
			w=curr-i;
			while(w>=0 && h<a[w])
			{
				a[w+i]=a[w];
				w=w-i;
				
			}
			a[w+i]=h;
		}
		i=i/2;
	}
}
void main()
{
	int x[M];
	input(x);
	display(x,0);
	shell(x);
	display(x,1);
	return;
}
