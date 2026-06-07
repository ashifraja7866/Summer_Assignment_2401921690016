#include <iostream>
using namespace std;

// Interface
class LibraryUser
{
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
};

// Kid_User_Class
class KidUser : public LibraryUser
{
private:
    int age;
    string bookType;

public:
    KidUser(int K, string D)
    {
        age = K;
        bookType = D;
    }

    void registerAccount() override
    {
        if (age < 12)
        {
            cout << "You have successfully registered under a Kids Account" << endl;
        }
        else
        {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    void requestBook() override
    {
        if (bookType == "Kids")
        {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        }
        else
        {
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
    }
};

// Adult_User_Class
class AdultUser : public LibraryUser
{
private:
    int age;
    string bookType;

public:
    AdultUser(int K, string D)
    {
        age = K;
        bookType = D;
    }

    void registerAccount() override
    {
        if (age > 11)
        {
            cout << "You have successfully registered under an Adult Account" << endl;
        }
        else
        {
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }

    void requestBook() override
    {
        if (bookType == "Fiction")
        {
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        }
        else
        {
            cout << "Oops, you are allowed to take only adult Fiction books" << endl;
        }
    }
};

// Library_Interface_Demo
int main()
{

    cout << "-Test Case 1: KidUser" << endl;

    // Test Case 1
    KidUser kid1(10, "Kids");
    kid1.registerAccount();
    kid1.requestBook();

    KidUser kid2(19, "Fiction");
    kid2.registerAccount();
    kid2.requestBook();

    cout << "\nTest Case 2: AdultUser " << endl;

    // Test Case 2
    AdultUser adult1(9, "Kids");
    adult1.registerAccount();
    adult1.requestBook();

    AdultUser adult2(23, "Fiction");
    adult2.registerAccount();
    adult2.requestBook();

    return 0;
}