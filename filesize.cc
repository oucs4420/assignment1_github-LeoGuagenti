#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    std::fstream fs;

    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 1; arg < argc; ++arg){
        std::cout << "program: " << argv[0] << "\n" << argv[arg] << ": ";

        fs.open(argv[arg]);
        if(!fs.is_open()){ std::cout << -1 << std::endl; break; }

        int number_of_lines = 0;
        std::string line;

        while (std::getline(fs, line))
            ++number_of_lines;

        std::cout << number_of_lines << std::endl;

        fs.close();
    }
    exit(0); // this means that the program executed correctly!
}
