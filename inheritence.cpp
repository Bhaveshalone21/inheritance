#include <iostream>
using namespace std;
class person{
    private:
    char name [20];
    char dob [10];
    public:
    void getdata(){
        cout<<"enter the name";
        cin>>name;
        cout<<"Enter the dob";
        cin>>dob;
    }
    void display(){
        cout<<"Nmae="<<name<<endl;
        cout<<"DOB="<<dob<<endl;
    }
};
class employe: public person{
    private:
    int  empid[10];
    float salary;
    public:
    
    void get1(){
      cout <<"Enter emp id"<<endl;
     for (int i=0; i<10; i++){
      cin>>empid [i];
     }
      cout<<"Enter the salary of employe"<<endl;
      cin>>salary;
    }
    void show(){
        cout<<"employee id"<<endl;
        
            for (int i=0; i<10; i++){
        
        cout <<empid[i]<<" ";
        }
        cout <<"salary="<<salary<<endl;
    }
    };
int main()
{
    employe ob;
    ob .getdata();
    ob.get1();
    ob .display();
    ob.show();
    return 0;
}

