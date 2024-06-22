#include <iostream>

using namespace std;

int main()
{
    int x;


    cin>>x;

    for(int i=1;i<=x;i++){

            for(int j=x;j>=i;j--){

            cout<<'*';

          }
      cout<<endl;
    }
    return 0;
}
