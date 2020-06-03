#include<stdio.h>
  int main()
 { 
	 	int a, b,hcf, lcm,rem,num,deno;
 	printf("Enter two numbers\n");
 	scanf("%d\n%d",&a,&b); 
 printf("%d\n%d\n",a,b);
 if(a>b)
{
 num=a;
 deno=b;
}
else
{
 num=b;
 deno=a;
}
 rem=num%deno;
  while(rem!=0)
 	{ 		
  num=deno;
 		deno=rem;
 		rem=num%deno;
	} 	
 hcf=deno;
 	lcm=(a*b)/hcf;
 	printf("hcf of %d and %d=%d\n",a,b,hcf);
 	printf("lcm of %d and %d=%d\n",a,b,lcm);
 }