#include<stdio.h>
#define MAX_SIZE 100
int main()
{
int arr[MAX_SIZE],freq[MAX_SIZE];
int size, i,j, count;
printf("Enter the size of the array\n");
 scanf("%d",&size);
printf("Enter the element in the array\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
freq[i]=-1;
}
for(i=0;i<size;i++)
{
count=1;
for(j=i+1;j<size;j++)
{
if(arr[i]== arr[j])
{
count++;
freq[j]=0;
}
}
if(freq[i]!=0)
{
freq[i]=count;
}
}
printf("Distinct elemente in the array:\n");
for(i=0;i<size;i++)
{
if(freq[i]==1)
{
printf("%d",arr[i]);
}
}
return 0;
}