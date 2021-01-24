#include<bits/stdc++.h>
using namespace std;

// Static variable(class variable)--> When we declare a member of a class as static it means no matter how many objects of the class 
are created, there is only one copy of the static member.A static member is shared by all objects of the class. Default value of 
static member is 0. We can't put it in the class definition but it can be initialized outside the class , using the scope resolution 
operator :: to identify which class it belongs to.
// static function::By declaring a function member as static, you make it independent of any particular object of the class. A static 
member function can be called even if no objects of the class exist and the static functions are accessed using only the class name 
and the scope resolution operator ::. A static member function can only access static data member, other static member functions and
any other functions from outside the class.
class Student{
    int roll;
    string name;
    // Declaring here.
    static int totStudent;

    public:
    
        void setDetails()
        {
            cout<<"Enter name and roll number of student::";
            cin>>name>>roll;
            totStudent++;
        }
        void getDetails()
        {
            cout<<"Name::"<<name<<endl;
            cout<<"Roll::"<<roll<<endl;
            cout<<endl;
        }

        // Static function
        static void totNumStudent(){
            // cout<<name<<endl; // This will throw an error because static function can access static variables only.
            cout<<"Total number of student::"<<totStudent<<endl;
        }


};
int Student:: totStudent=0; // Default value is 0.
int main(){
    Student s1,s2,s3;
    s1.setDetails();
    s2.setDetails();
    s3.setDetails();

    s1.getDetails();
    s2.getDetails();
    s3.getDetails();

    // we can access static variable by doing this Student::totStudent, But in this case it will throw an error because static 
    variable is private.

    Student::totNumStudent();

}
