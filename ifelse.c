#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z' || ch>='A' && ch<='Z'))
	{
		printf("%c is an alphabet",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is a digit",ch);
	}
	else
	{
		printf("%c is a special character",ch);
	}
	return 0;
}



#include<stdio.h>
int main()
{
	float num;
	printf("Enter the number");
	scanf("%f",&num);
	if(num>0)
	{
		printf("%2f is a positive number",num);
	}
	else if(num<0)
	{
		printf("%f is a negative number",num);
	}
	else
	{
		printf("Number is zero");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("%c is an uppercase alphabet",ch);
	}
	else
	{
		printf("%c is a lowercase alphabet",ch);
	}
	return 0;
}




#include<stdio.h>
int main()
{
	char ch;
	int lowervowel, uppervowel;
	printf("ENter any alphabet");
	scanf("%c",&ch);
	lowervowel = (ch == 'a'  || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
	uppervowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
	if(lowervowel || uppervowel)
	printf("%c is a vowel",ch);
	else
	printf("%c is a consonant",ch);
	return 0;

}



#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if((num % 5 == 0) && (num % 11 == 0))
	printf("\nNumber is divisible by 5 and 11",num);
	else
	printf("\nNumber is not divisible by 5 and 11",num);
	return 0;
}



#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is an even number",num);
	}
	else
	{
		printf("%d is a negative number",num);
	}
	return 0;
}




#include<stdio.h> 
int main() 
{
    int year;    
    printf("Enter a year: ");
    scanf("%d", &year);
    if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}



#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
	{
		printf("Highest number is a = %d",a);
	}
	else
	{
		printf("Highest number is c = %d",c);
	}
    }
	else
	{
		if(b>c)
		{
			printf("Highest number is b = %d",b);
		}
		else
		{
					printf("Highest number is c = %d",c);
		}
		return 0;
	}
}



#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)printf("greatest is = %d",a);
	else
	printf("greatest is = %d",b);
	return 0;
}



#include<stdio.h>
int main()
{
	int sp,cp,amt;
	printf("Enter cost price\n");
	scanf("%d",&cp);
	printf("Enter selling price\n");
	scanf("%d",&sp);
	if(sp > cp)
	{
	    amt = sp - cp;
	    printf("Profit = %d\n",amt);
    }
    else if(cp > sp)
    {
    	amt = cp - sp;
    	printf("Loss = %d\n",amt);
	}
	else
	{
		printf("NO PROFIT NO LOSS");
	}
	return 0;
}



#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter three sides of a triangle: \n");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1 == s3 && s2 == s3)
	printf("The given triangle is equilateral\n");
	else if(s1 == s2 || s2 == s3 || s1 == s3)
	printf("The given triangle is isosceles\n");
	else
	printf("The give triangle is scalene");
	return 0;
}



#include <stdio.h>

int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;
    
    /* Initialize all notes to 0 */
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


    /* Input amount from user */
    printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    /* Print required notes */
    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);

    return 0;
}



#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float a1,a2;
	printf("Input the values of a,b & c: ");
	scanf("%d%d%d",&a,&b,&c);
	d = b*b-4*a*c;
	if(d == 0)
	{
		printf("Both roots are equal.\n");
		a1 = -b/(2.0*a);
		a2 = a1;
		printf("First root = %f\n",a1);
		printf("Second root = %f\n",a2);
	}
	else if(d > 0)
	{
		printf("Both roots are real and different\n");
		a1 = (-b+sqrt(d))/(2*a);
		a2 = (-b-sqrt(d))/(2*a);
		printf("First root = %f\n",a1);
		printf("Second root = %f\n",a2);
	}
	else
	printf("Roots are imaginary\nNo solution.\n");
	return 0;
}



#include<stdio.h>
int main()
{
	int a1,a2,a3,sum;
	printf("Enter three angles of a traingle: \n");
	scanf("%d%d%d",&a1,&a2,&a3);
	sum = a1+a2+a3;
	if(sum == 180 && a1 > 0 && a2 > 0 && a3 > 0)
	{
		printf("Traingle is valid");
	}
	else
	{
		printf("Traingle is not valid");
	}
	return 0;
}



#include<stdio.h>
int main()
{
	int	month;
	printf("Enter the month number (1-12): ");
	scanf("%d",&month);
	if(month == 1)
	{
		printf("31 days");
	}
	else if(month == 2)
	{
		printf("28 or 29 days");
	}
	else if(month == 3)
	{
		printf("31 days");
	}
	else if(month == 4)
	{
		printf("30 days");
	}
	else if(month == 5)
	{
		printf("31 days");
	}
	else if(month == 6)
	{
		printf("30 days");
	}
	else if(month == 7)
	{
		printf("31 days");
	}
	else if(month == 8)
	{
		printf("31 days");
	}
	else if(month == 9)
	{
		printf("30 days");
	}
	else if(month == 10)
	{
		printf("31 days");
	}
	else if(month == 11)
	{
		printf("30 days");
	}
	else if(month == 12)
	{
		printf("31 days");
	}
	else
	{
		printf("Invalid Input! Please enter the month number between (1-12),");
	}
	return 0;
}




#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter three sides o a triangle: \n");
	scanf("%d%d%d",&s1,&s2,&s3);
	if((s1+s2)>s3)
	{
		if((s2+s3)>s1)
		{
			if((s1+s3)>s2)
			{
				printf("Triangle is valid");
			}
			else
			{
				printf("Triagle is not valid");
			}
		}
		else
		{
			printf("Triangle is not valid");
		}
	}
		else
		{
			printf("Triangle is not valid");
		}
		return 0; 
}




#include<stdio.h>
int main()
{
	int week;
	printf("Enter week number (1-7): ");
	scanf("%d",&week);
	if(week == 1)
	{
		printf("Monday");
	}
	else if(week == 2)
	{
		printf("Tuesday");
	}
	else if(week == 3)
	{
		printf("Wednesday");
	}
	else if(week == 4)
	{
		printf("Thrusday");
	}
	else if(week == 5)
	{
		printf("Friday");
	}
	else if(week == 6)
	{
		printf("Saturday");
	}
	else if(week == 7)
	{
		printf("Sunday");
	}
	else
	{
		printf("Invalid Input! Please enter the week number between 1-7.");
	}
	return 0;
}

