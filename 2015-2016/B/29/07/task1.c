#include<stdio.h>

int main(){

	int a, b;
	scanf("%d %d",&a, &b);
	printf("%d",((b >> a) & 1));
	return 0;
}
