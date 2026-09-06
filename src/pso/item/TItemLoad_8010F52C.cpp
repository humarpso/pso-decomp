#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TItemLoad__sub_8010F838(int, void *, int, int);
void * construct__9TItemLoadFPv(void *, void *, int, int);
s32 alloc_buffer__11TOBoss4RockFPv(int);
extern s32 lbl_805D2BE8;
extern s32 lbl_805D2BEC;
extern void *lbl_805D549C;
extern void *lbl_805D54A0;
extern s32 lbl_805D54A4;
void TItemLoad__sub_8010F5A0(void);
}

extern "C" {

struct Base_8010F52C { char pad[0x14]; };
struct VObj_8010F52C : Base_8010F52C {
    virtual void m0(int);
};

void *TItemLoad__sub_8010F950(void *arg0, s16 arg1);
void begin_load_if_pending__9TItemLoadFPvii(void *arg0, s32 arg1, s32 arg2);
void *dt__9TItemLoadFPvs(void *arg0, s16 arg1);
void free_all_models__9TItemLoadFv(void);
void reload_item__9TItemLoadFPv(void *arg0);
M2C_UNK TItemLoad__sub_8010FCB4(void *, M2C_UNK);
M2C_UNK TItemLoad__sub_8010FD80();
M2C_UNK TLobby__sub_8001EE48(s32);
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(s32);
M2C_UNK TLobby__sub_803DE084(s32, s32);
M2C_UNK __dl__FPv(void *);
s32 begin_load__9TItemLoadFPvi(void *, s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
void init__9TItemLoadFPv(void *, void *, int, int);
M2C_UNK reset_state__9TItemLoadFPv(void *);

extern void *lbl_805D549C;
extern void *lbl_805D54A0;
extern s32 lbl_805D54A4;

void free_all_models__9TItemLoadFv(void) {
    free__11TOBoss4RockFUi(lbl_805D54A4);
    if (lbl_805D54A0 != NULL) {
        ((struct VObj_8010F52C *)lbl_805D54A0)->m0(1);
    }
    if (lbl_805D549C != NULL) {
        ((struct VObj_8010F52C *)lbl_805D549C)->m0(1);
    }
    lbl_805D549C = NULL;
    lbl_805D54A0 = NULL;
    lbl_805D54A4 = 0;
}

extern M2C_UNK lbl_8049F40C[];

void TItemLoad__sub_8010F5A0(void) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r0_2;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x28));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)construct__9TItemLoadFPv((void *)((int) (temp_r3)), (void *)((void *) (lbl_805D2BE8)), (int)((int) (0xB5)), (int)((int) (0x144))));
    }
    (*(s32 *)&lbl_805D549C) = var_r0;
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x40));
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0) {
        var_r0_2 = TItemLoad__sub_8010F838((int) (temp_r3_2), (void *) (lbl_805D2BEC), (int) (0xB4), (int) (0x12F));
    }
    (*(s32 *)&lbl_805D54A0) = var_r0_2;
    lbl_805D54A4 = alloc_buffer__11TOBoss4RockFPv((int) (0x21000));
}

void *dt__9TItemLoadFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F40C;
        TItemLoad__sub_8010FCB4(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void begin_load_if_pending__9TItemLoadFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 != 0) && (begin_load__9TItemLoadFPvi(arg0, arg2) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    }
}

extern s32 lbl_805D2BF0;

void reload_item__9TItemLoadFPv(void *arg0) {
    s32 temp_r31;

    if (TLobby__sub_8001EEF4() == 1) {
        temp_r31 = TLobby__sub_8001EEFC(lbl_805D2BF0);
        TItemLoad__sub_8010FD80();
        TLobby__sub_803DE084(temp_r31, M2C_FIELD(arg0, s32 *, 0x24));
        TLobby__sub_8001EE48(lbl_805D2BF0);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        reset_state__9TItemLoadFPv(arg0);
    }
}

extern M2C_UNK lbl_8049F41C[];

void *TItemLoad__sub_8010F950(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F41C;
        TItemLoad__sub_8010FCB4(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049F41C[];

void *construct__9TItemLoadFPv(void *arg0, void * _w1, int _w2, int _w3) {
    init__9TItemLoadFPv(arg0, _w1, _w2, _w3);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F41C;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

}
