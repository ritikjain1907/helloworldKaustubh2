#include<bits/stdc++.h>
using namespace std;

void checkOddEven(int n);

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    checkOddEven(n);
}

void checkOddEven(int n)
{
    if(n%2){
        cout<<n<<" is Odd";
        cout << "Bye-Bye" ;
    }
    else
        cout<<n<<" is Even";
}
