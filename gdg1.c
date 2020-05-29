/*
to find the correct index of the array elements
5
5
10
40
30
20
0 1 4 3 2 
*/
#include<stdio.h>
int main()
{
  int n,i,j,a[20],b[20],t,temp,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {scanf("%d",&a[i]);
     b[i]=a[i];
   }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
     if(a[i]>a[j])
     { 
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
    } 
 }
  for(i=0;i<n;i++)
   {
     if(a[i]==b[i])
        printf("%d ",i);
      else
      {
          for(j=0;j<n;j++)
          {if(a[j]==b[i])
             {printf("%d ",j);break;
             }
          }
      }
  }
  printf("\n");
  return 0;
}

