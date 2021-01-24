#include<bits/stdc++.h>
using namespace std;
class Student
{
    int marks[5];
    public:
        string name;
        int i;
        Student(){
            i=0;
        }
        void setMarks();
        void displayDetails();
};

void Student:: setMarks(){
    for(int i=0;i<5;i++)
    {
        cout<<"Marks obtained in subject "<<i+1<<":";
        cin>>marks[i];
    }
}
void Student:: displayDetails(){
    cout<<name<<endl;
    for(int i=0;i<5;i++)
        cout<<"Marks obtained in subject "<<marks[i]<<" "<<endl;
}
int main()
{
    Student avi;
    avi.name="Avishek";
    avi.setMarks();
    avi.displayDetails();
}
