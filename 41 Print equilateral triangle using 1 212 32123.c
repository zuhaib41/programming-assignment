//Name : SYED ZUHAIB FAROOQ
//Roll-no : ECE-22-41
//Assignment for Mid-Term
#include<stdio.h>
int main()
{
	int i, q, row;
	printf("Enter valid data: \n");
	scanf("%d", &row);
	for(i=1;i<=row;i++)
	{
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
	    for(q=i;q>=1;q--)
	    {
			printf("%d",q);
		}
		for(q=2;q<=i;q++)
	    {
			printf("%d",q);
		}
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
		printf("\n");
	}
}
