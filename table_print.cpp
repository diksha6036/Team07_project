# include <iostream>
using namespace std;

//code made by diksha 
int main(){
     int i,n,j,t;
     j=1;
     cout<<"Print Table of: ";
     cin>>n;
     i=n;
     t=n;

     while(i<=n*12 && j<=12){
         cout<<t<<"*"<<j<<"="<<i<<endl;
         i+=n;
         j++;
     }
    return 0;
}
