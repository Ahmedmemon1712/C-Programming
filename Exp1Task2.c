 /*Aim: WAP to get student PCM marks from user and find the average. Use conditional operator to print if the student is eligible
 for admission .
 Eligibility criteria is 50% in pcm
Enter physics marks = 70
Enter chemistry marks = 58
 Enter maths marks = 69
 percentage =65
Eligible for admission */


#include<stdio.h>
int main()
{
int a,b,c,d,f;
printf("Enter physics marks=") ;
scanf("%d",&a);
printf("Enter chemistry marks=");
scanf("%d",&b);
printf("Enter maths marks=");
scanf("%d",&c);
d=a+b+c;
f=d/3;
printf("percentage =%d", f);
f>=50?printf("\nEligible for admission"): printf("\nNot Eligible for admission") ;
return 0;
}

