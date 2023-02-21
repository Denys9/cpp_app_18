#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    cout << "enter text - ";
    getline(cin, input);
    replace(input.begin(), input.end(), ' ', '\t');
    cout << "\nchanged string with tabs - " << input << endl;
    return 0;
}
