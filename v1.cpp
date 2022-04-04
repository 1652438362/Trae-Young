#include <stdio.h>
void main()
{
	char strexp[]="1+2+2+1+2+5+4-1-3+4-8";
	int a=strexp[0]-'0';
	for( int i=0;i<20;i++)
	{
		if(strexp[i]=='+')
		{
			int b=strexp[i+1]-'0';
			a=a+b;
			i++;
		}
		else if(strexp[i]=='-')
		{
			int b=strexp[i+1]-'0';
			a=a-b;
			i++;
		}
	}
	printf("a=%d",a);
	//V1ДњТы
}
