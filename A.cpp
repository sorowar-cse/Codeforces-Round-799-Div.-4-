#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    int c1=0;
    if(a<b){
        c1++;
    }
     if(a<c){
        c1++;
    }
     if(a<d){
        c1++;
    }
    cout<<c1<<" "<<endl;
}
 return 0;
}
