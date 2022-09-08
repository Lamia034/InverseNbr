#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("entrer nbr:");
	scanf("%d",&a);
	b=a/100;
	c=(a%100)/10;
	d=a%10;
	e=d*100+c*10+b;
	printf("l'inverse c est:%d",e);
}
