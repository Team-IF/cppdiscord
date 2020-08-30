#ifndef CPPDISCORD_GUILD_H
#define CPPDISCORD_GUILD_H

#include <string>
#include "guild_user.h"

using namespace std;

class guild {
private:
    unsigned long guild_id;
    unsigned long guild_owner_id;
    string guild_name;
    string guild_icon_url;
    guild_user guild_owner;
};


#endif //CPPDISCORD_GUILD_H
