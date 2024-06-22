#include <iostream>

using namespace std;

int main()
{
    long long A,B,C;
    cin>>A>>B>>C;
    if(A<B&&A<C){
        cout<<A<<endl;
    }
     if(B<C){
        cout<<B;
    }
    if(B<C){
        cout<<C;
    }
    return 0;
}
