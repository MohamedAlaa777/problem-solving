#include <iostream>

using namespace std;

int main()
{
     int x;
    long long num,product;
    product=1;
    cin>>x;

    for(int i=1;i<=x;i++){
        cin>>num;
            for(int j=1;j<=num;j++){
                product*=j;

          }
          cout<<product<<endl;
          product=1;
    }

    return 0;
}
