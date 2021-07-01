void swap_max(int arr[], int l,int a)
{
  int lar=0,j;
  for(int i=0;i<l;i++)
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
  
  void ssort(int arr[], int)
  {
   for(int i=0;i<l;i++)
   swap_max(arr,l,i);
  }
  
