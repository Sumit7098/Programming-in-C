/*
CH-230-A
a13-p1.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// function that takes like name.txt and
//returns name_copy.txt
string CopyName(string s)
{
    string str;
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            str.append("_copy");
        }
        str += s[i];
    }
    return str;
}

int main () {

    string line, filename;
    cout << "enter file name" << endl;
    cin >> filename;
    ifstream input (filename);
    // checking if the file opened successfuly
    if (input.is_open())
    {
        // opening an output file with the new name
        string ouptutfile = CopyName(filename);
        ofstream output (ouptutfile);
        while ( getline (input,line) )
        {
          output << line << endl;
        }
        input.close();
        output.close();
    }
    // if can't open file
    else cout << "Unable to open file";

    return 0;
}
