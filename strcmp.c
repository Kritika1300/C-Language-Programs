#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    int i,j,flag=0;
    for(i=0;str1[i]!='\0' && str2[i]!='\0';i++)
{
 if(str1[i]!=str2[i])
     break;
}
printf("%d",str1[i]-str2[i]);
}

