#include <stdio.h>
void main()
{
	char strexp[]="2*2/4*1/1*2*3/2";
	int a=strexp[0]-'0';
	for( int i=0;i<14;i++)
	{
		if(strexp[i]=='*')
		{
			int b=strexp[i+1]-'0';
			a=a*b;
			i++;
		}
		else if(strexp[i]=='/')
		{
			int b=strexp[i+1]-'0';
			a=a/b;
			i++;
		}
	}
	printf("a=%d\n",a);
	//V2ДњТы
}
