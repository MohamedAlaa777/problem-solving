#include <iostream>

using namespace std;

int main()
{
    long long days,number_of_days,years,months;
    cin>>number_of_days;

    years = number_of_days / 365;


    months = (number_of_days - years *365) / 30;


    days = (number_of_days - years * 365 - months*30);
cout<<years<<" years"<<endl<<months<<" months"<<endl<<days<<" days";



    return 0;
}
