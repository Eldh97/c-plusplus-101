#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::string;

void ReadBoardFile(string path)
{
    std::ifstream my_file;
    my_file.open(path);

    if (my_file)
    {
        cout << "file has been created!"
             << "\n";
        string line;
        while (getline(my_file, line))
        {
            cout << line << "\n";
        }
    }
}

int main()
{
    string path = "./board.txt";
    ReadBoardFile(path);
}