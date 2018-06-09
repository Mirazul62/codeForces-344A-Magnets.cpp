#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,n,s[1000000],count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            count+=1;
        }


    }


    cout<<count<<endl;


}
