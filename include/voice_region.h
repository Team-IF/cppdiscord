#ifndef CPPDISCORD_VOICE_REGION_H
#define CPPDISCORD_VOICE_REGION_H

#include <string>

using namespace std;

class voice_region {
private:
  string region_id;
  string region_name;
  bool vip;
  bool optimal;
  bool deprecated;
  bool custom;
};

#endif //CPPDISCORD_VOICE_REGION_H
