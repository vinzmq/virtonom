    #include "../inc/VirtoHandler.hpp"

    #include <fstream>
    #include <iostream>
    
    int VirtoHandler::readFile(std::string path)
    {
        std::ifstream infile(path);

        std::string line;  

         
        while (std::getline(infile, line))
        {   

            std::istringstream iss(line);
            std::string s;
            int flag = 0;
            std::vector<std::string> readvalues;
            while (iss >> s)
            {
                
               readvalues.push_back(s);
            }
           addData(readvalues);                     
            
        }

        return 0;
    }

    std::string VirtoHandler::getValue(size_t index_, size_t index2)
    {
        if( index_ < pos.size() && index2 < pos[index_].size())
            return pos[index_][index2];
        else
            return "";
    }
    
    int VirtoHandler::writeFile(std::string path)
    {
       std::ofstream outfile (path);
   
        for (int i = 0 ; i < pos.size(); i++ )
        {
            for(int j = 0; j < pos[i].size(); j++)
            {
                outfile<<pos[i][j]<<" ";
            }
           
            outfile<<std::endl;
            
        }

       outfile.close();

        return 0;
    }

    int VirtoHandler::translateData(double x_, double y_, double z_)
    {
        for (int i = 0 ; i < pos.size(); i++ )
        {
            if (pos[i][0] == "v")
            {
                double x = std::stod(pos[i][1]) + x_;
                double y = std::stod(pos[i][2]) + y_;
                double z = std::stod(pos[i][3]) + z_;
                pos[i][1] = std::to_string(x);
                pos[i][2] = std::to_string(y);
                pos[i][3] = std::to_string(z);
            }
            
        }
        return 0;


    }
    int VirtoHandler::scaleData(double scale_)
    {
        for (int i = 0 ; i < pos.size(); i++ )
        {
            if (pos[i][0] == "v")
            {
                double x = std::stod(pos[i][1]) * scale_;
                double y = std::stod(pos[i][2]) * scale_;
                double z = std::stod(pos[i][3]) * scale_;
                pos[i][1] = std::to_string(x);
                pos[i][2] = std::to_string(y);
                pos[i][3] = std::to_string(z);
            }
            
        }
        return 0;
    }

    void VirtoHandler::addData(std::vector<std::string> s)
    {
        pos.push_back(s);
    }