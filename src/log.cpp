#include "log.h"
#include "color.h"

#include <iostream>
#include <ctime>

using namespace std;

string Log::getLevel(Level level)
{
    Color color;

    switch (level)
    {
    case Log::DEBUG:
        return color.WHITE + "DEBUG" + color.DEFAULT;
    case Log::INFO:
        return color.BLUE + "INFO" + color.DEFAULT;
    case Log::WAR:
        return color.YELLOW + "WAR" + color.DEFAULT;
    case Log::ERROR:
        return color.RED + "ERROR"  + color.DEFAULT;
    default:
        return "";
    };
}

string Log::getTime() {
    time_t rawTime;
    struct tm *timeInfo;
    char buffer[80];

    time(&rawTime);
    timeInfo = localtime(&rawTime);

    strftime(buffer, 80, "%d-%m-%Y %I:%M:%S", timeInfo);
    std::string currentTime(buffer);

    return currentTime;
}

void Log::print(data data)
{
    std::cout << getTime() + "  " + getLevel(data.level) + ": " + data.message << std::endl;
}