#include <iostream>
using namespace std;

class Employee
{
    public:
    virtual void showDetails(){
        cout << "Employee Details" << endl;
    }
};

class Manager : public Employee{
    void showDetails() override {
        cout << " I am a manager I manage team";
    }
};

class Developer : public Employee{
    void showDetails () override {
        cout << " I am a developer I write code";
    }
};

int main(){

    Employee* m = new Manager;
    Employee* d = new Developer;



cout << "What type of employee would you like to create?: "<<endl;
cout << "1. Manager"<<endl;
cout << "2. Developer"<<endl;
cout << "Enter your Choice: ";
int choices;
cin >> choices;
if (choices == 1){
    m->showDetails();
}
else if (choices == 2){
    d->showDetails();
}
delete m;
delete d;

return 0;
}