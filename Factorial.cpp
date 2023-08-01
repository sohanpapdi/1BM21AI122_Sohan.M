#include<iostream>
using namespace std;

class fibo{

public:
    int n;
    int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    }

};



int main(){
    fibo t;
    int n;
    cout<<"enter number : ";
    cin>>t.n;
    int res=t.fact(n);
    cout<<"factorial of "<<n<<" is "<<res;


}
