#include <stdio.h>
#include <math.h>
int main (){
	int a, b, c;
	scanf ("%d%d%d", &a, &b, &c);
	if(a==b+c||b==c+a){printf("Yes");}
	else if(c==a+b){printf("Yes");}
	else {printf("No");}
	return 0;
}
