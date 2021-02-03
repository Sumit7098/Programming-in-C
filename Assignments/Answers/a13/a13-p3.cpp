/*
CH-230-A
a13-p3.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, line;
    ifstream input;
    ofstream output;
    output.open ("concatn.txt", ios::binary);
    // reading n strings and opening files with these names
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        // reading file with name s in binary mode
        input.open(s, ios::binary);
        if (input.is_open())
        {
            // go through the input file line by line
            // and concatenate it to the ouput file
            while ( getline (input,line) )
            {
              output << line << endl;
            }
            // Adding a new line to separate the contents of the different
            // files inside the resulting file
            output << endl;
            // closing input file
            input.close();
        }
    }
    output.close();
    return 0;
}
