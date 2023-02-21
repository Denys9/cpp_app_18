#include <iostream> 
#include <ctype.h>
using namespace std;

int main() 
{
    char* str = new char;  
    int letters = 0;
    int numbers = 0;
    int symbols = 0;

    cout << "enter string - ";
    cin.getline(str, 1000);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (isdigit(str[i]))
        { 
            numbers++;
        }
        else if (isalpha(str[i]))
        { 
            letters++;
        }
        else 
        { 
            symbols++;
        }
        
    }
    cout << "--------------------------------";
    cout << "\nletters in string -  " << letters;
    cout << "\nnumber in string - " << numbers;
    cout << "\nsymbols in string - " << symbols << endl;
    cout << "--------------------------------";
    return 0;
}