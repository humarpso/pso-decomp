#ifndef PSO_ITEMS_TITEMWEAPONPARTISAN_H
#define PSO_ITEMS_TITEMWEAPONPARTISAN_H
#include "pso/items/TItemWeapon.h"
struct TItemWeaponPartisan : TItemWeapon {
    s32 rotation;
    WeaponVector scale;
    WeaponVector first_translation;
    WeaponVector second_translation;
};
typedef char PartisanRotationOffset[(offsetof(TItemWeaponPartisan,rotation)==0x1F8)?1:-1];
typedef char PartisanScaleOffset[(offsetof(TItemWeaponPartisan,scale)==0x1FC)?1:-1];
typedef char PartisanFirstTranslationOffset[(offsetof(TItemWeaponPartisan,first_translation)==0x208)?1:-1];
typedef char PartisanSecondTranslationOffset[(offsetof(TItemWeaponPartisan,second_translation)==0x214)?1:-1];
typedef char PartisanSize[(sizeof(TItemWeaponPartisan)==0x220)?1:-1];
#endif
