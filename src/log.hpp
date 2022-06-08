#include <iostream>
#include <list>

#include "color.hpp"

using namespace std;

class Log
{

public:
    struct Level
    {
        string color;
        string label;
    };

    Level DEBUG = Level{color::BLUE, "DEBUG"};

    void print(Level, string);

    string getTime();
};