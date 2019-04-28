#include<stdio.h>
int print(char );
void main()
{
	void (*vp) (char)=print;
	
	vp('c');
//	printf("%u",&vp);
}
int print(char c)
{
	printf("%c\n",c);
}
