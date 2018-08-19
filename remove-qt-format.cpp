#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char* argv[])
{
    ifstream inFile(argv[1]);
    ofstream outFile(strcat(argv[1],".new"));
    while( !inFile.eof())
    {
        string line;
        getline(inFile,line);
        if(line=="#, fuzzy, qt-format"){
            outFile<<"#, fuzzy"<<endl;
        }
        else if(line!="#, qt-format"){
            outFile<<line<<endl;
        }
    }
    inFile.close();
    outFile.close();
    return 0;
}
