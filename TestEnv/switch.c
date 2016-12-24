#include<stdio.h>
void main ()
{
	int x,y,z,w;
	printf("welcome \nnumber of operation is \n1 for + \n2 for- \n3 for*\n4 for /\nenter number \n");
	scanf("%d",&x);
	printf("enter first number \nenter second number\n");
	scanf("%d%d",&y,&z);
	switch(x)
	{
case 1: w=y+z;	break;
case 2: w=y-z; break;
case 3: w=y*z;break;
case 4: w=y/z; break;
default: printf("you enter unknown number "); break;		
	}
	printf("the result is %d",w);
}
