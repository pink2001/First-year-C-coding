#include<stdio.h>
void main()
{
   int n,a[10],i,pos,ele;
   char ch;
   printf("Enter the size of array\n");
   scanf("%d",&n);
   printf("%d\n",n);
   printf("Enter the elements of array\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       printf("%d\t",a[i]);
   }
   printf("\nThe array elements are \n");
   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }
   printf("\nEnter the choice\n 1 for insertion \t 2 for deletion\n");
   scanf(" %c",&ch);
   printf(" %c\n",ch);
   switch(ch)   
   {
     case '1': printf("Enter the postion where new element is inserted\n");
            scanf("%d",&pos);
             printf("%d\n",pos);
             printf("Enter the element to be inserted\n");
             scanf("%d",&ele);
             printf("%d\n",ele);
             for(i=n-1;i>=pos;i--)
             {
                 a[i+1]=a[i];
             }
             a[pos]=ele;
             n++;
             printf("The array after insertion\n");
             for(i=0;i<n;i++)
             {
             scanf("%d",&a[i]);
             printf("%d\t",a[i]);
             }
             break;
             
     case '2':printf("Enter the position where element is deleted\n");
            scanf("%d",&pos);
            printf("%d\n",pos);
            printf("Enter the element to be deleted\n");
            scanf("%d",&ele);
            printf("%d\n",ele);
            ele=a[pos];
            for(i=pos;i<n-1;i++)
            {
                a[i]=a[i+1];
            } 
            n--;
            printf("The array after deletion of element\n");
            for(i=0;i<n;i++)
            {
                printf("%d\t",a[i]);
            } 
            break;
     default:printf("invalid choice");  
   }
}