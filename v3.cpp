#include <stdio.h>
void main()
{
	char strexp[]="2+2*3+2/2-1";
	int i,a,b,c,d;
	a=strexp[0]-'0';
	b=(strexp[2]-'0')*(strexp[4]-'0');
	c=(strexp[6]-'0')/(strexp[8]-'0');
	d=strexp[10]-'0';
	i=a+b+c-d;
	printf("%d\n",i);
	//V3ДњТы
}
