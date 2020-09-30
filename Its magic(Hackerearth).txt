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
 
#include <stdio.h>
 
int main(){
    int n;
    long long int sum=0;
    scanf("%d",&n);
    int a[n];  
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int j=-1;
    for(int i=0;i<n;i++){
        if((sum-a[i])%7==0){
            if(j<0)j=i;// when j==-1 toh j ko set kiya kisi non-negative value main
            else{
                if(a[j]>a[i])j=i;//comparing if a[i]is smaller and satisfies the condn reqd
            }
        }
    }
    if(j==-1)printf("-1");
    else printf("%d",j);
}