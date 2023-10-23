#include<stdio.h>
//Q.1
/*int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x>99 && x<1000)
        printf("Three digit number");
    else
        printf("not three digit number");
    return 0;    
}*/

//Q.2
/*int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);
    if(a==b)
        printf("a and b are same %d",a);
    else if(b>a)
        printf("b is greater %d",b);
    else    
        printf("a is greater %d",a);    
    return 0;        
}*/

//Q.3
/*int main()
{
    int d;
    printf("Enter the value of d\n");
    scanf("%d",&d);
    if(d>0)
       printf("real and distinct");
    else
       printf("real and equal");   
    return 0;   
}*/

//Q.4
/*int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%4==0)
        printf("Leap Year");
    else if(x%400==0)
        printf("Leap Year");
    else
        printf("NOT a Leap Year");  
    return 0;          
}*/

//Q.5
int mian()
{
    int a,b,c;
    printf("Enter two number\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
        printf("a is greater");
    else if(b>=a && b>=c) 
        printf("b is greater"); 
    else
        printf("c is greater");
    return 0;          
}      

