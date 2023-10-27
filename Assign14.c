 #include<stdio.h>
//Q.1
/*int main()
{
    int n,i,fact=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      fact*=i;
    }
    printf("Factorial of number is %d",fact);
    return 0;
}*/

//Q.2
/*int main()
{
    int n,i=1,count=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(i<=n)
    {
       n=n/10;
       count++;
       i++;
    }
    printf("No of digit is %d",count);
    return 0;
}*/

//Q.3
/*int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Not prime number");
            break;
        }  
    }
    if(i==n)
    {
        printf("Prime number");
    }
    return 0;
}*/

//Q.4
/*int main()
{
    int a,b,i;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    for(i=a>b?a:b;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("LCM of %d and %d is %d",a,b,i);
            break;
        }
    }
    return 0;
}*/

//Q.5
int main()
{
    int i,n,a,count=0,k,c=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    k=n;
    while (k)
    {
        k=k/10;
        count++;
    }
    for(i=1;i<count;i++)
    {
        a=n%10;
        c+=a;
        c*=10;
        n=n/10;
    }
    c+=n;
    printf("The reverse value is %d",c);
    return 0;
}