

#include <iostream>

#include "./Virtolib/inc/VirtoHandler.hpp"

int main()
{
    VirtoHandler test;
    test.readFile("../a.obj");
    test.readFile("../b.obj");
    test.translateData(1, 1, 1);
    test.writeFile("../c.obj");
   
}