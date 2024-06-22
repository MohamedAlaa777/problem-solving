#include <iostream>

using namespace std;

int main()
{

      long long n,m,last_digit_n,last_digit_m,sum;

    cin>>n>>m;
    last_digit_n=n%10;
    last_digit_m=m%10;
    sum=last_digit_n+last_digit_m;
    cout<<sum;

    return 0;
}
