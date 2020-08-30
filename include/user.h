#ifndef CPPDISCORD_USER_H
#define CPPDISCORD_USER_H

#include <string>
#include "enums/user_type.h"
#include "enums/status.h"

using namespace std;

class user {
protected:
    unsigned long user_id;
    string user_name;
    string user_fullname;
    string discriminator;
    string user_avatar_url;
    string user_avatar_id;
    status user_status;
    user_type user_type;
public:
    unsigned long Get_UserId();
    string Get_Discriminator();
    string Get_UserName();
    string Get_UserFullName();
    string Get_UserAvatarId();
    string Get_UserAvatarUrl();
    status Get_Status();
    bool Is_Bot();
    bool Is_Webhook();
    bool Is_User();
};

#endif //CPPDISCORD_USER_H
