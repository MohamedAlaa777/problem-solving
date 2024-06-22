#include <iostream>

using namespace std;

int main()
{
    int n,p;
    char choice;
    cin>>choice;
    switch(choice){
case '+':
cin>>n;
for(int q=1;q<=n;q++){
        cin>>p;
for(int i=1;i<=p;i++){
    cout<<'+';}
}
    break;
case '-':
    cin>>n;
for(int w=1;w<=n;w++){
        cin>>p;
for(int j=1;j<=p;j++){
    cout<<'-';}
}
    break;
case '*':
    cin>>n;
for(int e=1;e<=n;e++){
        cin>>p;
for(int a=1;a<=p;a++){
    cout<<'*';}
}
    break;
case '/':
     cin>>n;
for(int r=1;r<=n;r++){
        cin>>p;
for(int b=1;b<=p;b++){
    cout<<'/';}
}
    break;
    }
    return 0;
}
