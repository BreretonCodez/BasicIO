#include <iostream>

using namespace std;

string fname;
string lname;
int age;

int main(){
    
    cout << "First Name: ";
    cin >> fname;
    
    cout << "Last Name: ";
    cin >> lname;
    
    cout << "Age: ";
    cin >> age;
    
    cout << "Your data:" << endl;
    cout << "Your name: " << fname << " " << lname << endl;
    cout << "Age: " << age << endl;
    
    return 0;
} 
