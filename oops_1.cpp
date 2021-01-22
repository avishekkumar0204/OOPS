#include<bits/stdc++.h>
using namespace std;
class Employee
{
    private:
        //Note:1-->Private member cannot be accessed directly from outside the class.Inside the class it can be accessed directly.
        int salary,bonus;

    public:
        //Note:2--> This can be accessed directly inside and outside the class.
        int empId;
        string name;
        // Defining here but will write the fuction outside the class.
        void setDetails(int sal,int bns);
        void getDetails()
        {
            cout<<"Salary::"<<salary<<endl;
            cout<<"Bonus::"<<bonus<<endl;
            cout<<"Employee Id::"<<empId<<endl;

            // In this function we can see that salary,bonus which is private member can be used directly. See Note:1.
        }
};

// Defining the function setDetails() which we have only declared inside the class Employee

void Employee:: setDetails(int sal,int bns)
{
    //Even here we can use private member directly. Since it is already declared in the class Employee.
    salary=sal;
    bonus=bns;
}

int main()
{
    // Creating a object emp1 of class Employee that will have all the variable and fuction of Employee class 
    Employee emp1;
    // emp1.salary=200000;
    // emp1.bonus=20000;
    // The above 2 line will give us error as private member cannot be accessed directly from outside the class.

    emp1.name="Avishek";
    emp1.empId=4;
    // The above 2 line will not give any error as name and empId are public varibale,which can be accessed from outside the class 
    // directly.It will set the name of emp1 as Avishek and empId as 4.

    // So what if we want to set salary and bonus?
    // We need to pass salary and bonus of emp1 to the setDetails() function which is public and this function will set salary 
    // and bonus.
    emp1.setDetails(200000,20000);
    // The above line will set salary=200000 and bonus=20000 for emp1.

    emp1.getDetails();
    //The above line will print following lines.
    // Salary::200000
    // Bonus::20000
    // Employee Id::4
}
