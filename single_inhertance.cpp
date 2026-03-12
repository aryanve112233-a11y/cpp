#include <iostream>
using namespace std;
class enployee{
    protected:
    string name;
    public:
    employee(string n){
        name=n;
    }};
    class faculty:public employee{
       public:
       faculty(string n):employee(n){}
         void display(){
              cout<<"name of the faculty is "<<name;
         }};
         int main(){
             faculty f("john");
             f.display();
         return 0;
         }