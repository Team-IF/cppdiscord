#ifndef CPPDISCORD_ROLE_H
#define CPPDISCORD_ROLE_H

#include <string>
#include "../enums/permission.h"

using namespace std;

class role {
private:
    unsigned long role_id;
    string name;
    int color;
    bool hoist;
    int position;
    permission permission;
};

#endif //CPPDISCORD_ROLE_H
