#ifndef CPPDISCORD_GUILD_H
#define CPPDISCORD_GUILD_H

#include <string>
#include "guild_user.h"
#include "../voice_region.h"
#include "../enums/verify_level.h"
#include "../enums/notify_level.h"
#include "../enums/content_filter_level.h"

using namespace std;

class guild {
private:
    unsigned long guild_id;
    unsigned long guild_owner_id;
    string guild_name;
    string guild_icon_url;
    guild_user guild_owner;
    voice_region region;
    unsigned long afk_channel_id;
    unsigned int afk_timeout;
    verify_level verify_level;
    notify_level notify_level;
    content_filter_level content_filter_level;
};


#endif //CPPDISCORD_GUILD_H
