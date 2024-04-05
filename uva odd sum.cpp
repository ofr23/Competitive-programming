#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
   long long int i=0,j=0,sum,k,l,t,n,b;
     char c[2];
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>k>>l;sum=0;
        if((l-k+1)%2==1){
            if(k%2==1){
               n=((l-k+1)/2)+1;
              sum=(n*(2*k+(n-1)*2))/2;

            }
            else{
               n=((l-k+1)/2);
                sum=(n*(2*(k+1)+(n-1)*2))/2;
            }
        }
        else{
            n=((l-k+1)/2);
            if(k%2==1){
            sum=(n*(2*k+(n-1)*2))/2;
            }
            else{
             sum=(n*(2*(k+1)+(n-1)*2))/2;
            }
        }
        cout<<"Case "<<i<<": "<<sum<<endl;

    }



    }


