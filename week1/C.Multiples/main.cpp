#include <iostream>

using namespace std;

int main()
{
    long long num1,num2,n;
    cin>>num1>>num2;
    if(num1<num2){
            n=num1;
        num1=num2;
        num2=n;
    }
    if(num1%num2==0){
        cout<<"Multiples";
    }
    else
        cout<<"No Multiples";
    return 0;
}
