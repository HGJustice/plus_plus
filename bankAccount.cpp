#include <iostream>
#include <string>

class BankAccount {
    int account_number;
    int balance;
    public: std::string first_name;
    public: std::string last_name;

    BankAccount(std::string _first_name, std::string _last_name){
        int random = std::rand();
        account_number = random;
        int balance = 0;
        first_name = _first_name;
        last_name = _last_name;
    }

    protected: bool check_allowance(int _amount){
        int equals = balance - _amount;
        if (equals <= 0){
            return false;
        } else {
            return true;
        }
    };

    public: void deposit(int _amount){
        balance += _amount;
    };

    public: void withdraw(int _amount){
        bool result = check_allowance(_amount);
        if (result){
            balance -= _amount;
        } else {
            std::cout << "You domt have enough to withdraw" << "\n";
            exit(1);
        }
    };

    public: void check_balance(){
        std::cout << balance << "\n";
    }; 

    public: void get_account_id(){
        std::cout << balance << "\n";
    }; 


    public: void get_first_name(){
        std::cout << first_name << "\n";
    }

    public: void get_last_name(){
        std::cout << last_name << "\n";
    }

};


int main(){

    BankAccount simonsBank("simon", "tezwinski");

    simonsBank.check_balance();
    simonsBank.deposit(1000);
    simonsBank.check_balance();
    simonsBank.withdraw(700);
    simonsBank.check_balance();
    simonsBank.withdraw(700);

    return 0;
}