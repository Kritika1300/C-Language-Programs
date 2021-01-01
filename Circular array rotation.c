#include<iostream>
using namespace std;
int main()
{
    int n,k,q,i;
    cin>>n>>k>>q;
    int a[n];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    k %= n;
    for(i=0;i<q;++i){
        int m; 
        cin>>m;
        int p = m-k;
        if (p<0)
            p += n;
        cout<<a[p]<<endl;
    }
    return 0;
}
