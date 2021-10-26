#include<stdio.h>
#include<conio.h>
int a=1;
int b,temp;
char c;
void main()
{
	clrscr();
	printf("enter the two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("enter the choice\n");
	scanf("%s",c);
	for(a=0;a<10;a++)
	{
	    if(a==5)
	    {
	    continue;
	    }
	printf("%d\n",a);
	}
getch();
}

