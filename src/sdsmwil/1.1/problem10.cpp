#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
	float y,n=3.2,m=-3.2;
	if(ceil(n)>ceil(m))
	y=ceil(n);
	else y=ceil(m);
	printf("��С��3.2��-3.2����С����=%d",(int)y);
	return 0;
}
