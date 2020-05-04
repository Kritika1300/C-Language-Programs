#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    int i,j,flag=0,c;
    for(i=0;str1[i]!='\0';i++)
    {
        c=i;
        for(j=0;str2[j]!='\0';j++)
        {
            
            if(str1[i]==str2[j])
            {  
                
                flag=1;
                i++;
            }
            else
            {
                flag=0;
                break;
            }
            
        }
        if(flag==1)
        break;
    }
    if(flag==1)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
    
    
}




