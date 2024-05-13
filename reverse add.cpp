#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[50];
    string s1,s2,s3,s4,st;
   long long int i,j,sum,k,t,r,n,res,a,b,d[50];
    cin>>t;
    for(k=1; k<=t; k++)
    {
        scanf("%s",s);
        s2="";
        for(i=0; i<strlen(s); i++)
        {
            s2+=s[i];
        }
        j=0;
        s3="0";
        st="1";

        while(s3!=st)
        {
            s1=s2;
            reverse(s2.begin(),s2.end());
            stringstream ss(s2);
            ss>>a;
            stringstream sh(s1);
            sh>>b;
            res=a+b;

            stringstream shh;
            shh<<res;
            st=shh.str();
            s3=st;
            reverse(s3.begin(),s3.end());

            j++;
            s2=st;
        }

        cout<<j<<" "<<st<<endl;
    }
}























