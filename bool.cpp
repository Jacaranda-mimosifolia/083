#include<stdio.h>
#include<string.h>
int expression;
int main()
{
	//(expression)�൱��expression!=0
	expression=true;
	if(expression)
	{
		printf("true\n");
	}
	
	//(!expression)�൱��expression==0
	expression=false;
	if(!expression)
	{
		printf("false\n");
	}
	
	if(true)//true!=0
	{
		printf("true\n");
	}
	if(!false)//flast==0
	{
		printf("flast\n");
	}
	
//	while(true)//true!=0
//	while(!false)//flast==0

	return 0;
}
