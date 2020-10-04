/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
int main()
{
	
 int l,k,r,i,count=0;
 scanf("%d %d",&l,&r);
 scanf("%d",&k);
 for(i=l;i<=r;i++)
 {
 	if(i%k==0)
 	{
 		count++;
	 }
 }
 printf("%d",count);
}