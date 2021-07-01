#include<cs50.h>
#include<stdio.h>

void swap_max(int arr[], int l,int a)
{
  int lar=arr[a],j;
  for(int i=a;i<l;i++)
  {
    if(arr[i]>lar)
     {
       lar=arr[i];
       j=i;
     }
  }
  arr[j]=arr[a];
  arr[a]=lar;
}
  
  void ssort(int arr[], int l)
  {
   for(int i=0;i<l;i++)
   swap_max(arr,l,i);
  }
  
