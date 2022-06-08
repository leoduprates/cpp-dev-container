#include "log.hpp"

int main()
{
    Log log;

    log.print(log.DEBUG, "This is a log.");
    // log.print({log.INFO, "This is a log."});
    // log.print({log.ERROR, "This is a log."});
    // log.print({log.WARN, "This is a log."});

    return 0;
}