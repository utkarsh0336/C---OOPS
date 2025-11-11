#include <bits/stdc++.h>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complements(void);
    void display(void);
};

void binary :: read(){
    cout<<"Enter a binary number: ";
    cin >> s;
}

void binary :: chk_bin(){
    for(int i = 0;i < s.size(); i++){
        if(s[i] != '1' && s[i] != '0'){
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);    
        }
    }
}

void binary :: ones_complements(){
    for(int i = 0;i < s.size(); i++){
        if(s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }
}

void binary :: display(){
    cout<<"Displaying binary number"<<endl;
    for(int i = 0;i < s.size(); i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // OOPS - Classes and Objects

    // C++ --> initially called as C with Classes by Stroustroup
    // Class is an extension of structures in C
    // Structures had limitations -->
    //      --> Members are public
    //      --> No Methods

    /* Classes --> structures + more.

       Classes can have methods and properties.

       Classes can make few members as private or public.

       Structure in C++ are typedefed.

       You can declare objects along with the class declaration
       like this below :-
        class Employee {
                Class definition
        } harry , rohan , lovish;
        harry.salary = 8 makes no sense if salary is private.


        Nesting of member functions
    */

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_complements();
    b.display();


    return 0;
}