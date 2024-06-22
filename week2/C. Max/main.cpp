#include <iostream>

using namespace std;

int main()
{      int x;
    long long num;
    cin>>x;
    long long ma=0;
    for(int i=1;i<=x;i++){
            cin>>num;
       if(ma<num){
        ma=num;
       }
    }
    cout<<ma;
    return 0;
}
