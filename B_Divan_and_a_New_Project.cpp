#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>vec(n+1,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        vector<pair<long long,long long> >p;
        for(int i=0;i<n;i++){
            p.push_back({vec[i],i});
        }
        sort(p.rbegin(),p.rend());
        long long c=1;
        long long m=0;
        vec[0]=0;
        for(int i=0;i<n;i++){
            vec[p[i].second+1]=c;
            m+=2*abs(c)*p[i].first;
            if(c<0){
                c=abs(c)+1;
            }else{
                c=-c;
            }       
        }
        cout<<m<<endl;
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" "; 
        }
        cout<<endl;
    }
}