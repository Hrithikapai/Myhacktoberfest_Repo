#include<bits\stdc++.h>
using namespace std;
bool check(int x,int y,int z){
    int a= max(x ,max(y,z)),b,c;
    if(a==x){
        b=y;
        c=z;
    }else if(a==y){
        b=x;
        c=z;
    }else{
        b=x;
        c=y;
    }
    if(a*a==(b*b+c*c)){
        return true;
    }else{
        return false;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter your triplets:-\n";
    cin>>a>>b>>c;
    if(check(a,b,c)){
        cout<<"Those are Pythagorian Triplets\n";
    }else{
        cout<<"Nope! not Pythagorian Triplets\n";
    }
    return 0;
}