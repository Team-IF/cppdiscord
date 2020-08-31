#ifndef CPPDISCORD_PERMISSION_H
#define CPPDISCORD_PERMISSION_H

enum permission {
    CREATE_INSTANT_INVITE = 0x00000001, // Allows creation of instant invites
    KICK_MEMBERS = 0x00000002, // Allows kicking members
    BAN_MEMBERS = 0x00000004, // Allows banning members
    ADMINISTRATOR = 0x00000008, // Allows all permissions and bypasses channel permission overwrites
    MANAGE_CHANNELS = 0x00000010, // Allows management and editing of channels

};

#endif //CPPDISCORD_PERMISSION_H
