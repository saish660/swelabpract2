#include<stdio.h>
void main()
{
     int i, n;
  float arr[100];

   printf("Enter total number of elements");
 scanf("%d",&n);


 for(i=0;i<n;i++)
 {
      scanf("%d",&arr[i]);

 }

  for(i=0;i<n;i++)
    {

    if(arr[0]<arr[i])
      arr[0]=arr[i];
}

printf("largest element is=%d ",arr[i]);


 }


