#include <iostream>

using namespace std;

int main()
{
    int n,i,min_num;
    cin>>n;
     int arr[n];
    for(i=0;i<n;i++){
       cin>>arr[i];
    }
    int num;
    min_num=10^6;//mafrod tbqa bra el loop
    for(i=0;i<n;i++){

        if(min_num>arr[i]){
            min_num=arr[i];
             num=i+1;
        }
    }
     cout<<min_num<<" "<<num;
    return 0;
}
