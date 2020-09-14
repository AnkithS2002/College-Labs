#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("Enter a and b values\n");
	scanf("%d %d",&a,&b);
	printf("\nThe values of a and b before swapping are %d %d",a,b);
	swap(&a,&b);
	printf("\nThe values of a and b after swapping are %d %d",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	int t=0;
	t=*x;
	*x=*y;
	*y=t;
}
