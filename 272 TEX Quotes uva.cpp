#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
  long long  int i=0,j=0;
     char c[2];
    while(fgets(c,sizeof(c),stdin)!=NULL)
    {


       for(i=0;i<strlen(c);i++){
         if(c[i]=='"'){
            j++;
           if(j%2==0){
            printf("''");
           }
           else{
            printf("``");
           }
         }
         else{
          cout<<c[i];
         }

       }



    }
}


