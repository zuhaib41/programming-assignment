//Name : syedzuhaib farooq
//Roll-no : ECE-22-41
//Assignment for Mid-Term
#include<stdio.h>
int main()
{
	int number, digit, sum=0;
	printf("Enter any 4 digit number: \n");
	scanf("%d", &number);
	digit = number % 10;
    sum += digit;
    number /= 10;
    digit = number % 10;
    sum += digit;
    number /= 10;
    digit = number % 10;
    sum += digit;
    number /= 10;
    digit = number % 10;
    sum += digit;
	printf("%d is sum.",sum);
}
