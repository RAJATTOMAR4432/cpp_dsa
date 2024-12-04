#include<iostream>
using namespace std;
int max(int , int );

int main()
{
    int a,b;
cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"Enter a number"<<endl;
    cin>>b;
    max(a,b);
    
    return 0;
}
int max(int a, int b )
{

    if(a>b)
    {
        cout<<"a is maximum"<<endl;
    }
    else
    {
        cout<<"b is maximun"<<endl;
    }
    return 0;
}
