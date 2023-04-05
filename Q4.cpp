#include <iostream>
using namespace std;

string preventDistractions(string);
int checkRotation(string line);

main()
{
    system("cls");

    string line;
    cout << "Enter the line to check : ";
    getline(cin, line);

    cout << preventDistractions(line) << endl;
    cout << checkRotation(line);
}

string preventDistractions(string line)
{
    string word;
    int len = line.length();
    for (int i = 0; i < len; i++)
    {
        if (line[i] == ' ')
        {
            if (word == "anime" || word == "meme" || word == "vines" || word == "roasts")
            {
                return "NO!";
            }
            word = "";
        }
        else
        {
            word = word + line[i];
        }
    }
    return "Safe Watching";
}

int checkRotation(string line)
{
    string word;
    int rotation = 0;
    int len = line.length();
    for (int i = 0; i < len; i++)
    {
        if (line[i] == ' ')
        {
            int lene = word.length();
            int count = 1;
            for (int j = 0; j < lene; j++)
            {
                if (word[j] == 'H' || word[j] == 'N' || word[j] == 'S' || word[j] == 'I' || word[j] == 'O'|| word[j] == 'X' || word[j] == 'Z')
                {
                    count++;
                }
                if(count == lene)
                {
                    rotation++;
                }
            }
            word = "";
        }
        else
        {
            word = word + line[i];
        }
    }
    return rotation;
}