#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803527F0_lbl_804F0F24 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_803527F0_lbl_804F0F24_size[sizeof(RecoveredGlobal_803527F0_lbl_804F0F24) == 0x10 ? 1 : -1];

extern "C" {
s32 TObjFish__sub_8001EDC4(void *, s32);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_803527F0_lbl_804F0F24 lbl_804F0F24;
extern u32 TObjLobbyMain__data_805D6EC8;
extern s32 lbl_805D6ECC;
extern s32 lbl_805D6ED0;
extern s32 lbl_805D6ED4;
extern s32 lbl_805D6ED8;
void TObjLobbyMain__sub_803527F0(void);
}

extern "C" {

void *__dt__13TObjLobbyMainFv(void *arg0, s16 arg1);
void *create__13TObjLobbyMainFPv(void *arg0);
void release_static_instance__13TObjLobbyMainFv(void);
void run_task__13TObjLobbyMainFv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void TObjEneGibbles__sub_80156720(void *);
void *TObjLobbyMain__ct(void *, void *, void *);
M2C_UNK TObjLobbyMain__sub_803520D8(void *);
M2C_UNK TObjLobbyMain__sub_8035255C(void *);
M2C_UNK TObjLobbyMain__sub_803525F0(void *);
M2C_UNK TObjLobbyMain__sub_80352624(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 check_demo_mode__10TObjPlayerFv();
void destroy_key_base__5TOKeyFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK reset_state__13TObjLobbyMainFPv(void *);
M2C_UNK update_computer_machines__13TObjLobbyMainFv(void *);
M2C_UNK update_particles__13TObjLobbyMainFPv(void *);

void run_task__13TObjLobbyMainFv(void *arg0) {
    s32 temp_r0;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjLobbyMain__sub_803520D8(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 0:
        TObjLobbyMain__sub_80352624(arg0);
        break;
    case 1:
        TObjLobbyMain__sub_803525F0(arg0);
        break;
    default:
    case 2:
        reset_state__13TObjLobbyMainFPv(arg0);
        break;
    }
    update_computer_machines__13TObjLobbyMainFv(arg0);
    TObjLobbyMain__sub_8035255C(arg0);
    update_particles__13TObjLobbyMainFPv(arg0);
}

extern void *tl_05;

void *create__13TObjLobbyMainFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TObjLobbyMain__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjLobbyMain__data_805D6EC8;

void release_static_instance__13TObjLobbyMainFv(void) {
    if ((u32) TObjLobbyMain__data_805D6EC8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjLobbyMain__data_805D6EC8, 1);
        TObjLobbyMain__data_805D6EC8 = 0U;
    }
}

extern M2C_UNK __vt__13TObjLobbyMain[];

void TObjLobbyMain__sub_803527F0(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804F0F24.value, 0, 0, 0));
    }
    (*(u8 * *)&TObjLobbyMain__data_805D6EC8) = (unsigned char *) ((void *) var_r0);
    lbl_805D6ECC = get_lobby_type__6TLobbyFv();
    lbl_805D6ED0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(TObjFish__sub_8001EDC4((*(u8 * *)&TObjLobbyMain__data_805D6EC8), 6), void **, 0x2C), void **, 0x30), void **, 0x30), void **, 0x30), void **, 0x30), void **, 0x30), void **, 0x30), s32 *, 4);
    lbl_805D6ED4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(TObjFish__sub_8001EDC4((*(u8 * *)&TObjLobbyMain__data_805D6EC8), 2), void **, 0x2C), void **, 0x30), void **, 0x30), void **, 0x30), s32 *, 4);
    lbl_805D6ED8 = 0;
}

void *__dt__13TObjLobbyMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjLobbyMain;
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD8)); M2C_FIELD(arg0, M2C_UNK *, 0xD8) = 0; }
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC)); M2C_FIELD(arg0, M2C_UNK *, 0xDC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
