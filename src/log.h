#include <iostream>
#include <list>

using namespace std;

class Log
{

public:
    enum Level
    {
        DEBUG,
        INFO,
        WAR,
        ERROR
    };

    string getLevel(Level);

    string getTime();

    struct data
    {
        Level level;
        string message;
    };

    void print(data);
};