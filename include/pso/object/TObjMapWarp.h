#ifndef PSO_OBJECT_TOBJMAPWARP_H
#define PSO_OBJECT_TOBJMAPWARP_H
#include "types.h"
struct TObjMapWarpPrefix {u32 type;u8 base04[0x14];};
struct TObjMapWarp : TObjMapWarpPrefix {
    virtual void slot08();
    virtual void slot0C();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1C();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2C();
    virtual void slot30();
    virtual void slot34();
    virtual void slot38();
    virtual void slot3C();
    virtual void slot40();
    virtual void slot44();
    virtual void slot48();
    virtual void slot4C();
    void closeAllPlayerWindows();
    virtual void closePlayerWindow(u16);
    u8 base1C[0x44];
    s32 sourceYaw;
    u8 base64[4];
    f32 destination[3];
    u8 parameters74[0x10];
    s32 destinationFacing;
    u8 base88[0x34];
    f32 destinations[4][3];
    void* playerPopups[4];
};
#endif
