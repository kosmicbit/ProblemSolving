#include<stdio.h>

int isAlpha(char ch)
{
	if( (ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
		return 1;
	else
		return 0; 
}

int wordCount(char sentence[])
{
	int length, i, count =0;

	for(length=0;sentence[length]; ++length);
	for(i=0;i<length;i++)
	{
		if( isAlpha(sentence[i]))
			continue;
		else if (!isAlpha(sentence[i-1])&& !isAlpha(sentence[i]))
			continue;
		else
			count++;
	}
	return count;
}

int main()
{
	char str[2000];
	while(gets(str))
	{
		printf("%d\n",wordCount(str));
	}
	return 0;
}
