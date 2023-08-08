#include <iostream>

// Example class with setters and getters
class Person {
private:
    std::string name;
    int age;

public:
    // Setter for name
    void setName(const std::string& newName) {
        name = newName;
    }

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Setter for age
    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            std::cout << "Invalid age input." << std::endl;
        }
    }

    // Getter for age
    int getAge() const {
        return age;
    }
};

class BankAccount {
private:
    double balance;

public:
    // Setter for balance with validation
    void setBalance(double newBalance) {
        if (newBalance >= 0) {
            balance = newBalance;
        } else {
            std::cout << "Invalid balance input." << std::endl;
        }
    }

    // Getter for balance
    double getBalance() const {
        return balance;
    }
};



int main()
{
    Person person;
    person.setName("Alice");
    person.setAge(30);

    std::cout << "Name: " << person.getName() << std::endl;   // Output: Name: Alice
    std::cout << "Age: " << person.getAge() << std::endl;     // Output: Age: 30

    BankAccount account;
    account.setBalance(1000.0);
    
    // Attempt to set negative balance will be rejected
    account.setBalance(-500.0);

    std::cout << "Account balance: $" << account.getBalance() << std::endl;   // Output: Account balance: $1000


    return 0;
}
