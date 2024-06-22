#include <iostream>

using namespace std;

int main()
{
    char char1;
    cin>>char1;
    if(char1<97){
            int z =char1+32;
    char e =(char)z;
        cout<<e;
    }
    else{

    int x =char1-32;
    char y =(char)x;
        cout<<y;}
    return 0;
}
