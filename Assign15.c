#include<stdio.h>
//Q.1
/*int main()
{
    int i,j;
	for(i=1;i<100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j==i)
	  {
		printf("%d\n",i);
	  }
	}
    return 0;
}*/

//Q.2
/*int main()
{
    int i,j,a,b;
	printf("Enter the value a and b\n");
	scanf("%d %d",&a,&b);
	for(i=a;i<b;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			printf("%d\n",i);
		}
		
	}
	return 0;
}*/

//Q.3
/*int main()
{
    int i,j,a;
	printf("Entre a given number\n");
	scanf("%d",&a);
	for(i=a+1;i<=a+1;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			printf("%d",i);
			break;
		}
		a++;
	}
	return 0;
}*/

//Q.4
/*int main()
{
   int a,b,i;
	printf("Enter the two number\n");
	scanf("%d %d",&a,&b);
	for(i=a>b?a:b;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
		{
			printf("HCF of a and b is %d",i);
			break;
		}
	}
	return 0;
}*/

//Q.5
/*int main()
{
    int a,b,i,n;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);
    for(i=a>b?a:b;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            break;
        }
    }
    if(i==1)
	{
        printf("Co-prime number");
	}
	else
	{
		printf("Not co-primr");
	}
	
	return 0;
}*/
