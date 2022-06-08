#include "log.hpp"
#include "format.hpp"
#include "color.hpp"

#include <iostream>
#include <ctime>
#include <chrono>
#include <string>
#include <algorithm>

string Log::getTime()
{
    time_t rawTime;
    struct tm *timeInfo;
    char buffer[80];

    time(&rawTime);
    timeInfo = localtime(&rawTime);

    strftime(buffer, 80, "%d-%m-%Y %I:%M:%S", timeInfo);
    std::string currentTime(buffer);

    return currentTime;
}

void Log::print(Level level, string message)
{
    auto now = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(now);

    std::string nomequalquer(std::ctime(&end_time));

    nomequalquer.erase(std::remove(nomequalquer.begin(), nomequalquer.end(), '\n'), nomequalquer.end());

    std::cout << nomequalquer << "  " << level.color << level.label << color::DEFAULT << ": " << message << std::endl;
}