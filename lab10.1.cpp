#include <iostream>
#include <string>
#include <fstream>
using namespace std;
bool IsOrNot(char* FileName)
{
    ifstream fin(FileName); 
    if (!fin)
    {
        cerr << "file did not opened" << endl;
        exit(1);
    }
    string s; 
    while (getline(fin, s))
    {
        if (s.find("***") != -1)
            return true;
    }
    return false;
}

int main()
{
    char FileName[]="t.txt";
    if (IsOrNot(FileName))
        cout << "*** is found." << endl;
    else
        cout << "*** is not found." <<endl;
    cout << endl;
    
  
}