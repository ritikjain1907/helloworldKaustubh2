#include<bits/stdc++.h>
using namespace std;

void checkOddEven(long n);

int main()
{
    long n;
    cout<<"Enter any number : ";
    cin>>n;
    checkOddEven(n);
}

void checkOddEven(long n)
{
    if(n%2)
    {
        cout<<n<<" is Odd";
    }
    else
    {
        cout<<n<<" is Even";
    }
}
