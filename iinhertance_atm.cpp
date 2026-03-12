#include <iostream>
using namespace std;
class bank{
    protected:
double balance;
public:
bank(double b){
    balance=b;
}
void diposit(double amount){
    balance+=amount;
}
void widhraw(double amount){
    balance -=amount;

}
void checkbalance(){
    cout<<"balance is "<<balance<<endl;
}
};
class savingaccount: public bank{
    public:
    savingaccount(double b):bank(b){}
    void iterest(){
        balance += balance*0.05;
    }
};
int main(){
    savingaccount sa(1000);
    sa.checkbalance();
    sa.diposit(500);
    sa.checkbalance();
    sa.widhraw(200);
    sa.checkbalance();
    sa.iterest();
    sa.checkbalance();
    return 0;
}