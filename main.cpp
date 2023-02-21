#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    cout << "enter text - ";
    getline(cin, input);
    int word = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (isalnum(input[i]))
        {
            if (i == 0 || !isalnum(input[i - 1]))
            {
                word++;
            }
        }
    }
    cout << "\namount word - " << word << endl;
    return 0;
}
