#include "pso/TPlayerFootStamp.h"

TPlayerFootStamp::~TPlayerFootStamp() {}

#include "types.h"

extern "C" {

void * create__16TPlayerFootStampFPvPv(void *arg0, void *arg1);
void free_instance__16TPlayerFootStampFv(void);
s32 TLobby__sub_803DA16C(void*);
void *__ct__16TPlayerFootStampFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void * create__16TPlayerFootStampFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = __ct__16TPlayerFootStampFv(o, arg0, arg1);
    }
    return o;
}

extern u32 player_footstamp_texture_gvm_handle;

void free_instance__16TPlayerFootStampFv(void) {
    if ((u32) player_footstamp_texture_gvm_handle != 0U) {
        TLobby__sub_803DA16C((void*)player_footstamp_texture_gvm_handle);
        safe_free__23TAdSinglePlyChrSelectGCFUi(player_footstamp_texture_gvm_handle);
        player_footstamp_texture_gvm_handle = 0U;
    }
}

}
