#include <stdio.h>
int main()
{
 int c0,c1,c2,c3,x,y,z,result,r,a,b,flag=0,T;
 scanf("%d",&T);
 while(T--){
	 
 	scanf("%d %d %d %d",&c0,&c1,&c2,&c3);
 	// printf("%d %d %d %d\n",c0,c1,c2,c3);
 	flag=0;
 	for(x=0;x<2;x++){
 		for(y=0;y<2;y++){
 			for(z=0;z<2;z++){
 				if(x==0&&y==0)a=c0;
				 if(x==0&&y==1)a=c1;
				 if(x==1&&y==0)a=c2;
				 if(x==1&&y==1)a=c3;

				 if(a==0&&z==0)result=c0;
				 if(a==0&&z==1)result=c1;
				 if(a==1&&z==0)result=c2;
				 if(a==1&&z==1)result=c3;

				 if(y==0&&z==0)b=c0;
				 if(y==0&&z==1)b=c1;
				 if(y==1&&z==0)b=c2;
				 if(y==1&&z==1)b=c3;

				 if(x==0&&b==0)r=c0;
				 if(x==0&&b==1)r=c1;
				 if(x==1&&b==0)r=c2;
				 if(x==1&&b==1)r=c3;

				 if(result!=r)flag=1;
			 }
	 	}	
 	}
	 if(flag==1){
	 	printf("No\n");
	 }else{
	 	printf("Yes\n");
	 }
}
}
	