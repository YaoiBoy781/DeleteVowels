#include <iostream>
#include <string>
#include <sstream>

using namespace std;

char *vowels[6] = {"a", "e", "i", "o", "y", "u"};
string sentence;

bool checkVowels(char symbol)
{
    for(char *i : vowels)
    {
        if(*i == symbol)
        {
            return true;
        }
    }
    return false;
}

void checkVowelInFirstSymbol(string sentence)
{
    stringstream str(sentence);

    while (!str.eof()) {
        string word;
        str >> word;
        if (!checkVowels(tolower(word[0])))
        {
            cout << word << " ";
        }
    }
}

int main()
{
    cout << "Input sentence:";
    getline(cin,sentence);

    checkVowelInFirstSymbol(sentence);
}
