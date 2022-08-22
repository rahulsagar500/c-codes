#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n;
    cout<<"Enter the term for which you want the fibonocci value:"<<endl;
    cin>>n;
    cout<<"The value of the term "<<n<<" in the fibonocci sequence is "<<fib(n);
    return 0;
}