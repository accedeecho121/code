#include <stdio.h>

int main()
{
	int i;
	int x;
	int num=1;
	scanf("%d",&x);
for(i=1;i<=x;i++){
	num*=i;
}
	printf("x!=%d",num);
}
