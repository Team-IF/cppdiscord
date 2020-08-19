#include "../include/user.h"

status user::Get_Status() {
    return user_status;
}

string user::Get_UserName() {
    return user_name;
}

string user::Get_UserFullName()  {
    return Get_UserName() + "#" + Get_Discriminator();
}

unsigned long user::Get_UserId() {
    return user_id;
}

string user::Get_Discriminator() {
    return discriminator;
}

string user::Get_UserAvatarId() {
    return user_avatar_id;
}

string user::Get_UserAvatarUrl() {
    return user_avatar_url;
}

bool user::Is_Bot() {
    return user_type == BOT;
}

bool user::Is_Webhook() {
    return user_type == WEBHOOK;
}

bool user::Is_User() {
    return user_type == USER;
}
