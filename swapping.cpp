#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;               //swapping two numbers in cpp
    *a=*b;                   //direct swapping dosen't work here same as it dosent work in C
    *b=temp;
}
int main()    // call by reference by using pointers
{
    int a=4,b=6;
    cout<<"The value of a before swapping is "<<a<<endl;
    cout<<"The value of b before swapping is "<<b<<endl;
    swap(&a,&b);
    cout<<"The value of a after swapping is "<<a<<endl;
    cout<<"The value of b after swapping is "<<b<<endl;
    
    return 0;
}