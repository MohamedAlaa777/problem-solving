#include <iostream>

using namespace std;

int main()
{
    int n,m,last_digit_n,last_digit_m,sum;
    cout<<"Enter your two numbers";
    cin>>n>>m;
    last_digit_n=n%10;
    last_digit_m=m%10;
    sum=last_digit_n+last_digit_m;
    cout<<sum;

}
