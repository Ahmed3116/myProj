

#include <iostream>
#include<cstring>
using namespace std;
int NumVowel(char word[100])
{
    
    int count=0;
    
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == 'a' || word[i] == 'A')
            count = count + 1;
        if (word[i] == 'e' || word[i] == 'E')
            count = count + 1;
        if (word[i] == 'o' || word[i] == 'O')
            count = count + 1;
        if (word[i] == 'i' || word[i] == 'I')
            count = count + 1;
        if (word[i] == 'U' || word[i] == 'u')
            count = count + 1;
    }
    return count;
    }
int main()
{
    char word[100];
    cin >> word;
    cout << NumVowel(word);
}

