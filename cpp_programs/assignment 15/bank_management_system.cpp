# include <bits/stdc++.h>
using namespace std;

//creating accounts, depositing and withdrawing money, transferring funds, and maintaining account records.

class Bank{
    
};

class Account : public Bank{

};

class SavingsAccount : public Account{

};

class CurrentAccount: public Account{

};

int main(){
    int input;
    cin>>input;
    int condition=(input>0 && input<6);
    if(condition){
        
        while(condition){
            cout<<"welcome to the Bank"<<endl;
        }
    }

    else{
        cout<<"please select the correct option";
    }
    
    return 0;
}