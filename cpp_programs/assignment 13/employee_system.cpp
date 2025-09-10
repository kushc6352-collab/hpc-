//  Q2. Virtual Function in Employee System
//  Create a base class Employee with a virtual function display().
//  Derive two classes:
//  • Manager (stores number of teams handled)
//  • Developer (stores number of programming languages known)
//  Call display() through a base class pointer and observe dynamic binding.

# include <bits/stdc++.h>
using namespace std;

class Employee{
    protected:
    int id;
    string name;
    

    public:

    Employee(int i=0,string names="unnamed"):id(i),name(names)}{}

    virtual void display(){
        cout<<"the id of employee is "<<id;
        cout<<"the name of employee is "<<name;

    }
    

    

};

class manager : public Employee{
    protected:
    int number_of_teams_handeled;

    public:
    manager(int ids=1000,string namesE="manager1",int n=3):number_of_teams_handeled(n),Employee(id,name){}

    void display(){
        cout<<"the manager name is "<<name<<endl;
        cout<<"the id of manager is "<<id<<endl;
        cout<<"the number of teams handeled by the manager is "<<number_of_teams_handeled<<endl;
    }


};

class developer : public Employee{
    protected:
    int number_of_programming_languages_known;

    public:
    developer(int m=0):number_of_programming_languages_known(m),Employee(id,name){

    }

    


};

int main(){
    Employee *e1;
    manager m(10002,"manager 1",10);
    developer d(1005,"developer1",8);

    e1=&m;
    e1->display();




    return 0;
    
}
