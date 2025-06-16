#include<stdio.h>
int main()
{{
	float cel, foren;
	printf("Enter the celcius: ");
	scanf("%f", &cel);
	foren=(cel*9/5)+32;
	printf("Temperture in Fahrenheit is %.2f", foren);
	return 0;
}}
