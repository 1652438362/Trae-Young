#include <stdio.h>
void main()
{
	char strExp[]="3+4";
	printf("计算%s的结果\n",strExp);
	int i=strExp[0]-'0';
	int j=strExp[2]-'0';
	printf("%d\n",i+j);
}
    //V0代码
