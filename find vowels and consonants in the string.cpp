#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[100];
	int i, vol=0, con=0;
	printf("Enter the string: ");
	fgets(str,sizeof(str),stdin);
	for(i=0; str[i]!='\0'; i++)	
	{
		char ch=tolower(str[i]);
		if(ch>='a' && ch<='z')
		{
			if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			{
				vol++;
			}
			else
			{
				con++;
			}
		
		}
	}
	printf("Number of vowels is %d\n", vol);
	printf("Number of consonants is %d\n", con);
	return 0;
}
