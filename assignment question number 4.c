#include<stdio.h>
#include<conio.h>
int main()
{
float fahrenheit, celsius;
printf("entre temprature in fahrenheit");
scanf("%f", &fahrenheit);
celsius=(fahrenheit - 32)*5/9;
printf("%.2f fahrenheit is equal to %.2f celsius\n", fahrenheit, celsius);
getch();
}