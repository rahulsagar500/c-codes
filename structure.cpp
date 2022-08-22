#include<iostream>
using namespace std;
 typedef struct student    //typedef key word is used to make things easy by assigning the new name to our structure
{
    int id;
    char section;
    int age;
    
    
}stu;
int main()
{
    stu rahul;
    rahul.id=500;
    rahul.section='C';
    rahul.age=19;
    cout<<"The id of the student is "<<rahul.id<<endl;
    cout<<"The section of the student is "<<rahul.section<<endl;
    cout<<"The age of the student is "<<rahul.age<<endl;
    return 0;
}