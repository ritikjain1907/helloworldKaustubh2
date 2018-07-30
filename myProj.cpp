#include<bits/stdc++.h>
using namespace std;

bool checkOddEven(int n);

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    if(checkOddEven(n))
    {
        cout<<n<<" is Odd";
    }
    else
    {
        cout<<n<<" is Even";
    }
    return 0 ;
}

bool checkOddEven(int n)
{
    return n%2 ;
}
