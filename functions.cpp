#include<iostream>
using namespace std;
int sum(int a,int b)  //This is called as function
{
    int c=a+b;
    return c;
}
void g()
{
    cout<<"\nHey hello there good morning";
}
int main()
{
    int n1,n2;
    cout<<"Enter the first number: "<<endl;
    cin>>n1;
    cout<<"Enter the second number: "<<endl;
    cin>>n2;
    cout<<"The sum of the given numbers is "<<sum(n1,n2);
    g();
    
    return 0;
}