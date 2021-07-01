#include<stdio.h>
#include<stdlib.h>

void ssort(int arr[],intl)
{
 int i;
 for(i=0;i<l;i++)
 {
  swap_max(arr,l,i);
 }
}
void swap_max(int arr[],intl,intn)
{
 intj,k;
 int temp;
 for(j=k=n;j<l;j++)
 {
  if(arr[j]>arr[k])
  {
   k=j;
  }
 }
 temp=arr[n];
 arr[n]=arr[k];
 arr[k]=temp;
}
