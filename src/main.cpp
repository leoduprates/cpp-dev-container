#include "log.h"

int main()
{
    Log log;

    log.print({log.DEBUG, "This is a log."});
    log.print({log.INFO, "This is a log."});
    log.print({log.ERROR, "This is a log."});
    log.print({log.WAR, "This is a log."});

    return 0;
}