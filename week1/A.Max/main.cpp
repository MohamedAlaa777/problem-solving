#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int ma=0;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        if(ma<x)ma=x;
    }
    cout<<ma;

    return 0;
}
