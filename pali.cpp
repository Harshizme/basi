#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"Enter the numbe to check";
    cin>>n;
    int org=n;
    int d=0;
    while(n>0){
        d=d*10+n%10;
        n/=10;
    }
    (d==org)?cout<<"true":cout<<"false";
    return 0;
}