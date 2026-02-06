#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t)
    {
        long long w,h;
        cin>>w>>h;
        long long area=INT_MIN;
        for(int i=0;i<4;i++)
        {
            long long k;
            cin>>k;
            long long first,last;
            for(int i=0;i<k;i++){
                long long x;
                cin>>x;
                if(i==0){
                    first=x;
                }
                if(i==k-1){
                    last=x;
                }
            }
            long long best=last-first;
            if(i==0 || i==1)area=max(area,best*h);
            if(i==2|| i==3) area=max(area,best*w);
        }
        cout<<area<<endl;
        t--;
    }
}