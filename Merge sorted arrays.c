#include <stdio.h>
int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
   int a[n],b[m],i;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<m;i++)
   {
     scanf("%d",&b[i]);
   }
   int c=m+n;
   int p[c];
   for(i=0;i<n;i++)
   {    p[i]=a[i];
   }
   for(i=n;i<c;i++)
   {  
       p[i]=b[i-n];
    
   } int j;
   for(i=0;i<c-1;i++)
   {
       for(j=0;j<c-i-1;j++)
       { 
           if(p[j]>p[j+1])
           {
               int temp=p[j];
               p[j]=p[j+1];
               p[j+1]=temp;
           }
       
           
       }
      
   }
   for(i=0;i<c;i++)
   {
      printf("%d",p[i]);
   }
}

