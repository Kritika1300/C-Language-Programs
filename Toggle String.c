// Sample code to perform I/O:(HACKEEARTH PROBLEM)
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}



// Write your code here
int main()
{
	char s[101];
	int i=0;
	scanf("%s",&s);

	while(s[i]!='\0')
	{
		
		if(s[i]>='a' && s[i]<='z')
        {
            s[i] = s[i] - 32;
            
            i++;
        }
        
        else if(s[i]>='A' && s[i]<='Z')
        {
            s[i] = s[i] + 32;
            i++;
        }
    }
       
      printf("%s",s);
}