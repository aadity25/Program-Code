#include<stdio.h>
//Q.1
/*int main()
{
    int a=-1,b=1,c,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("Fibonacci series is %d",c);
    return 0;
}*/

//Q.2
/*int main()
{
    int a=-1,b=1,c,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}*/

//Q.3
/*int main()
{
   int a=-1,b=1,c,i,n;
   printf("Enter the value to be find\n");
   scanf("%d",&n);
   for(i=1;i<=n*2;i++)
   {
   	c=a+b;
   	if(c==n)
   	{
	   printf("Is fibonacci series");
	   break;   		
	}
   	a=b;
   	b=c;
   } 
   if(c!=n)
   	{
	   printf("Is not fibonacci series"); 		
	}
   return 0;
}*/

//Q.4
/*int main()
{
	int n,c=1,a,b=0,k,j,count=0,i,g;
	printf("Enter a number\n");
	scanf("%d",&n);
	g=k=n;
	while(k)
	{
		k=k/10;
		count++;
	}
	for(i=1;i<=count;i++)
	{
		a=n%10;
		for(j=1;j<=count;j++)
		{
			c*=a;
		}
		n=n/10;
		b+=c;
		c=1;
	}
	if(g==b)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not a Armstrong number");
    }
	return 0;
}*/

//Q.5
/*int main()
{
	int i,j,n,count,digit,a,sum=0,z;
	for(i=1;i<=1000;i++)
	{
		n=i;
		count=0;
		while(n)
		{
			n=n/10;
			count++;
		}
		n=i;
		sum=0;
		for(z=1;z<=count;z++)
		{
			a=n%10;
			n=n/10;
			for(j=1,digit=1;j<=count;j++)
			{
				digit*=a;
			}
			sum+=digit;
		}
		if(i==sum)
		{
			printf("%d\n",i);
		}
	}
}*/
