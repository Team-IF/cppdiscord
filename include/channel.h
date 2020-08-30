#ifndef CPPDISCORD_CHANNEL_H
#define CPPDISCORD_CHANNEL_H

#include <string>
#include "enums/channel_type.h"

using namespace std;

class channel {
protected:
    unsigned long channel_id;
    channel_type channel_type;

};

#endif //CPPDISCORD_CHANNEL_H
