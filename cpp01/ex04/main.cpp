#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "usage: ./Replace <filename> <string_to_replace> <replacement_string>" << std::endl;
        return 0;
    }
    std::ifstream input_file(av[1]);
        if(!input_file)
        {
            std::cout << "error: entered file cannot open." << std::endl;
            return 0;
        }
    std::string s1 = av[2];
    std::string s2 = av[3];

    if(s1 == s2)
    {
        std::cout << "error: please enter different string." << std::endl;
        return 0;
    }
    if(input_file.is_open())
    {
        std::string line;
        std::string add_replace = av[1];
        add_replace += ".replace";
        std::ofstream replace_file(add_replace);
        while(std::getline(input_file, line))
        {
            size_t found = line.find(s1);
            while(found != std::string::npos)
            {
                line.erase(found, s1.length());
                line.insert(found, s2);
                found = line.find(s1);
            }
            replace_file << line << std::endl;
        }
        replace_file.close();
        input_file.close();
    }
    return 0;
}
