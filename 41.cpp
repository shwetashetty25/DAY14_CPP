// 1.Create string using C style "Welcome to C++ program" PERFORM FOLLOWING OPERATIONS :1.Calculate total length of string 2.extract welcome from string 3.add "btech"in existing string.
// 2.Create string using string class (user input) and perform following function: 1. calucalte length 2. copy into another string variable i.e str2.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[25] = "Welcome to C++ program";

    int a = strlen(str);
    cout << "Length of string: " << a << endl;

    char b[8];
    strncpy(b, str, 7);
    b[7] = '\0';
    cout << "Extracted 'welcome': " << b << endl;

    strcat(str, " Btech");
    cout << "String after appending 'Btech': " << str << endl;

    return 0;
}