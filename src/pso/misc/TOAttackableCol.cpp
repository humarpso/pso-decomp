#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void *__nw__7TObjectFUl(int);
void *TOAttackableCol__ct(void *, void *);
int TOAttackableCol__vt24(void);
int TOAttackableCol__vt25(void);
int TOAttackableCol__vt18(void);
int TOAttackableCol__vt19(void);
int TOAttackableCol__vt20(void* p);
int TOAttackableCol__sub_80157728(void*);
int TOAttackableCol__vt21(void* p);
int TOAttackableCol__sub_80157728(void*);
int TOAttackableCol__vt22(void* p);
int TOAttackableCol__sub_80157728(void*);
void init__17TOBarrierEnergy01FPv(void *);
void *fn_80157CA8(void *arg0);
s32 check_demo_mode__10TObjPlayerFv();
void TOAttackableCol__sub_80157310(void * = 0);
void release__15TOAttackableColFPv(void* p);
void check_door_trigger__15TOAttackableColFPv(void *arg0);
void run_task__15TOAttackableColFv(u8 *arg0);
void check_door_trigger__15TOAttackableColFPv(void *arg0);
void release__15TOAttackableColFPv(void* p);
void release__15TOAttackableColFPv(void* p);
void check_door_trigger__15TOAttackableColFPv(void *arg0);
extern M2C_UNK __vt__11TOVS2Wall01[];
void run_task__15TOAttackableColFv(u8 *arg0);
}

extern "C" {

int TOAttackableCol__sub_801575AC(void *, s32);
void TOAttackableCol__sub_80157C20(void* p, s32 v);
s32 TOAttackableCol__sub_80157C28(void* p);
void TOAttackableCol__vt23(void);
int TOAttackableCol__vt4(void);
void *__dt__15TOAttackableColFv(void *arg0, s16 arg1);
void broadcast_state__15TOAttackableColFPv(void* p);
void bswap_state__15TOAttackableColFPv(void* p);
void check_door_trigger__15TOAttackableColFPv(void *arg0);
int handle_6x91_update_state__15TOAttackableColFPv(void* p);
void init_params__15TOAttackableColFPv(void *arg0);
void release__15TOAttackableColFPv(void* p);
void render__15TOAttackableColFv(void);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_80156BA8(void*);
void TOBarrierEnergy01__vt18(void);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
s32 TObjPlayer__sub_801B4A18(void *, s32);
M2C_UNK __dl__7TObjectFPv(void *);
int bswap_16__FPUs(void*);
int bswap_header__6TLobbyFi(void*);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, int, int);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
int queue_destruction__7TObjectFv(void*);
int set_flag8__6TLobbyFPv(void*);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TOAttackableCol__sub_80157310(void * _w0) {  }

extern const f32 lbl_805DB2C8;

void init_params__15TOAttackableColFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    M2C_FIELD(arg0, s32 *, 0x33C) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) + 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x33C);
    if (temp_r0 < 1) {
        M2C_FIELD(arg0, s32 *, 0x33C) = 1;
    } else if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0x33C) = 0x100;
    }
    M2C_FIELD(arg0, s32 *, 0x340) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x340) < 0) {
        M2C_FIELD(arg0, s32 *, 0x340) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x344) = (s32) M2C_FIELD(arg0, s32 *, 0x8C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x344) < 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x34C) = (s32) M2C_FIELD(arg0, f32 *, 0x68);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x34C);
    if ((temp_r0_2 < 0) || (temp_r0_2 >= 0x100)) {
        M2C_FIELD(arg0, s32 *, 0x34C) = -1;
    }
    if (M2C_FIELD(arg0, f32 *, 0x6C) < lbl_805DB2C8) {
        set_indexed_flags(arg0, 0, 0x08000000);
    } else {
        clear_player_status_flag__10TObjPlayerFPviUi((void*)(arg0), (int)(0), (int)(0x08000000));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x344) == 0) {
        M2C_FIELD(arg0, s32 *, 0x348) = (s32) M2C_FIELD(arg0, f32 *, 0x70);
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x348);
        if ((temp_r0_3 < 0) || (temp_r0_3 >= 0x100)) {
            M2C_FIELD(arg0, s32 *, 0x348) = -1;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x348) = -1;
    }
}

int TOAttackableCol__sub_801575AC(void *, s32) { return 0; }
int TOAttackableCol__vt4(void) { return 0; }

int handle_6x91_update_state__15TOAttackableColFPv(void* p) { return clear_player_status_flag__10TObjPlayerFPviUi((void*)(p), (int)(0), (int)(1)); }

void release__15TOAttackableColFPv(void* p) { set_flag8__6TLobbyFPv(p); queue_destruction__7TObjectFv(p); }
void check_door_trigger__15TOAttackableColFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34C);
    if (((temp_r0 < 0) || (temp_r0 >= 0x100) || (TODoorAncient08__sub_80229220((u16) temp_r0) == 1)) && ((TObjPlayer__sub_801B4A18(arg0, -1), (((s32) M2C_FIELD(arg0, s32 *, 0x33C) > 0) == 0)) || (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 0) && (temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x348), ((temp_r0_2 < 0) == 0)) && (temp_r0_2 < 0x100) && (TODoorAncient08__sub_80229220((u16) temp_r0_2) == 1)))) {
        M2C_FIELD(arg0, s32 *, 0x33C) = 0;
        TOAttackableCol__sub_801575AC((void *)(arg0), (s32)(1));
    }
}

void run_task__15TOAttackableColFv(u8 *arg0) {
    s16 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOAttackableCol__sub_80157310((void *)((void *) (arg0)));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
    case 0:
        check_door_trigger__15TOAttackableColFPv((void *)((void*)((void *) (arg0))));
        return;
    case 1:
        release__15TOAttackableColFPv((void*)((void *) (arg0)));
        return;
    }
}

void render__15TOAttackableColFv(void) {  }

extern M2C_UNK __vt__15TOAttackableCol[];

void * TOAttackableCol__sub_80157A28(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x350);
    if (o != NULL) {
        o = TOAttackableCol__ct(o, arg0);
    }
    return o;
}

void *__dt__15TOAttackableColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TOAttackableCol;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TOAttackableCol__vt24(void) { return 1; }

int TOAttackableCol__vt25(void) { return 1; }

int TOAttackableCol__vt18(void) { return 1; }

int TOAttackableCol__vt19(void) { return 1; }

int TOAttackableCol__vt20(void* p) { return TOAttackableCol__sub_80157728(p); }

int TOAttackableCol__vt21(void* p) { return TOAttackableCol__sub_80157728(p); }

int TOAttackableCol__vt22(void* p) { return TOAttackableCol__sub_80157728(p); }

void TOAttackableCol__vt23(void) {  }

void TOAttackableCol__sub_80157C20(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 TOAttackableCol__sub_80157C28(void* p) { return *(s32*)((char*)p + 0x33c); }
void bswap_state__15TOAttackableColFPv(void* p) { bswap_header__6TLobbyFi(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap_16__FPUs((char*)p + 0x10); }
void broadcast_state__15TOAttackableColFPv(void* p) { bswap_state__15TOAttackableColFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void *fn_80157CA8(void *arg0) {
    init__17TOBarrierEnergy01FPv(arg0);
    M2C_FIELD(arg0, u16 *, 0xC) = 0;
    M2C_FIELD(arg0, u16 *, 0xE) = 0;
    M2C_FIELD(arg0, u8 *, 0x0) = 145;
    M2C_FIELD(arg0, u8 *, 0x1) = 5;
    return arg0;
}

}
