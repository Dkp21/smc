#include <iostream>
#include <cstdint>
#include <string>
#include <unistd.h>

#include "turnstile.h"

int main(int argc, char **argv)
{
    TurnStile *ts = new TurnStile();

    while(true)
    {
        std::cout << ts->getStateName() << std::endl;

        ts->pass();

        ts->coin(true);

        std::cout << ts->getStateName() << std::endl;

        ts->coin(true);

        ts->pass();

        sleep(2);

        ts->coin(false);

        std::cout << "\n\n" << std::endl;
    }

    delete ts;

    return 0;
}
