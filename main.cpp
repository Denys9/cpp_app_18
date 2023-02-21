#include <iostream> 
using namespace std;

int main()
{
    char* str = new char;
    int i;
    int length;
    int check = 0;
    cout << "enter a string - ";
    cin >> str;
    length = strlen(str);
    for (i = 0; i < length; i++) 
    {
        if (str[i] != str[length - i - 1]) 
        {
            check = 1;
            break;
        }
    }
    cout << "\n";
    if (check)
    {
        cout << str << " - is not a palindrome\n";
    }
    else
    {
        cout << str << " - is a palindrome\n";
    }
    return 0;
}