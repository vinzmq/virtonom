
#pragma once

#include <string>
#include<sstream>

#include <vector>


class VirtoHandler
{
    public:

        int readFile(std::string path);
        int writeFile(std::string path);
        int translateData(double x, double y, double z);
        int scaleData(double scale);
        void addData(std::vector<std::string> s);
        std::string getValue(size_t index, size_t index2);

    private:
        std::vector<std::vector<std::string>> pos;
    
        
};