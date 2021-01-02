#include<stdio.h>
int main()
{
	int i,j,S,X,N,swap,distance=0,day=1;
	scanf("%d %d %d",&S,&X,&N);
	int T[N],Y[N];
	for(i=0;i<N;i++){
		scanf("%d %d",&T[i],&Y[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(T[j]>T[j+1])
			{ 
			swap=T[j];
			T[j]=T[j+1];
			T[j+1]=swap;
			swap=Y[j];
			Y[j]=Y[j+1];
			Y[j+1]=swap;
		    }
		}
	}
	i=0;
	for(day=1;distance<S&&day<S;day++){
		if(T[i]==day){
			distance+=Y[i];
			i++;	
		}else{
			distance+=X;
		}
	}
	printf("%d",day-1);
}