#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long int i,j,sum,k,l,d,r,n,res,p,q;
    while(scanf("%lld%lld",&p,&q)==2&&p>0&&q>0)
    {   l=min(p,q);
        r=max(p,q);
        res=0;
        for(i=l;i<=r;i++){
            sum=0;
            k=i;
            if((l==1&&r==1)||(l==1&&r==2)){
                res=3;
                n=1;
            }
           else{
            while(k>1){
                if(k%2==0){
                    k=k/2;
                }
                else{
                    k=3*k+1;
                }
                sum++;
            }
            if(res<sum){
                res=sum;
                n=i;
            }
           }
        }
        cout<<"Between "<<l<<" and "<<r<<", "<<n<<" generates the longest sequence of "<<res<<" values."<<endl;

    }



}
















