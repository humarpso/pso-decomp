#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80355414___vt__19TAdPlyPltAnimCtrlGC {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct O_80355148 { u8 pad[0x1c]; s32 state; };

extern "C" {
int get_table_value__19TAdPlyPltAnimCtrlGCFi(int a0);
M2C_UNK TAdPlyPltAnimCtrlGC__sub_80355D38();
void TAdPlyPltAnimCtrlGC__sub_80355168(u8 *arg0);
u8 fn_8035510C(s32 *arg0, s32 arg1);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 TAdPlyPltAnimGC__sub_803560F0(void *, int);
extern M2C_UNK __vt__19TAdPlyPltAnimCtrlGC[];
extern s32 lbl_805D4390;
u8 *TAdPlyPltAnimCtrlGC__ct(u8 *arg0, s32 arg1);
s32 TAdPlyPltAnimCtrlGC__sub_80355148(O_80355148 *self);
s32 get_state_flag__9TMainTaskFv();
void render__19TAdPlyPltAnimCtrlGCFv(void *self);
int get_table_value__19TAdPlyPltAnimCtrlGCFi(int a0);
void TAdPlyPltAnimCtrlGC__sub_80355D5C(void *, void *);
extern u32 lbl_804792B0[];
void run_task__19TAdPlyPltAnimCtrlGCFv(u8 *arg0);
}

extern "C" {

void *__dt__19TAdPlyPltAnimCtrlGCFv(void *arg0, s16 arg1);
u32 get_instance__19TAdPlyPltAnimCtrlGCFi(s32 arg0);
int get_table_value__19TAdPlyPltAnimCtrlGCFi(int a0);
void init__19TAdPlyPltAnimCtrlGCFPvPv(void* p, void* a1);
int TObjPlayer__sub_8001BEF8(void*, int);
void TObjPlayer__sub_80354F8C(void* p);
int TObjPlayer__sub_80354FB0(void* p);
int TObjPlayer__sub_8035501C(void* p);
s32 TObjPlayer__sub_80355098(s32 arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
int __dl__FPv();
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int clear_id__10TObjPlayerFPv(void*);
int clear_lock_flag__10TObjPlayerFPv(void* p);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*, void*);
s32 get_quest_thread_id__10TObjPlayerFPv(void* p);
void* init_and_reset_forward__10TObjPlayerFPv(void* p);
int init_forward__10TObjPlayerFPv(void*);
void reset_field4__10TObjPlayerFPv(void* p);
int set_flag0_bits01__10TObjPlayerFPv(void* p);
int set_flag1__10TObjPlayerFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
void set_player_index__10TObjPlayerFPvi(void* p, s32 v);

u8 fn_8035510C(s32 *arg0, s32 arg1) {
    return (u8) (arg1 == (arg1 & *arg0));
}

void render__19TAdPlyPltAnimCtrlGCFv(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) {
        return;
    }
}

s32 TAdPlyPltAnimCtrlGC__sub_80355148(O_80355148 *self) {
    s32 r = 1;
    if (self->state == 7 || self->state == 0) {
        r = 0;
    }
    return r;
}

void TAdPlyPltAnimCtrlGC__sub_80355168(u8 *arg0) {
    s32 var_r31;
    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    do {
        if (get_table_value__19TAdPlyPltAnimCtrlGCFi((int) (var_r31)) != 0U) {
            TAdPlyPltAnimCtrlGC__sub_80355D38();
        }
        var_r31 += 1;
    } while (var_r31 < 5);
}

void init__19TAdPlyPltAnimCtrlGCFPvPv(void* p, void* a1) { TAdPlyPltAnimCtrlGC__sub_80355168((u8 *)((void*)(p))); copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((char*)p + 0x24, a1); *(int*)((char*)p + 0x1c) = 1; }

extern M2C_UNK __vt__19TAdPlyPltAnimCtrlGC[];
extern u32 lbl_805D6F08;

void run_task__19TAdPlyPltAnimCtrlGCFv(u8 *arg0) {
    void *p;
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x20)++;
    switch ((u32)M2C_FIELD(arg0, s32 *, 0x1C)) {
    case 0:
        break;
    case 1:
        if (M2C_FIELD(arg0, u32 *, 0x20) >= lbl_804792B0[0]) {
            if ((p = (void *)get_table_value__19TAdPlyPltAnimCtrlGCFi(0)) != NULL) {
                TAdPlyPltAnimCtrlGC__sub_80355D5C(p, arg0 + 0x24);
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, u32 *, 0x20) >= lbl_804792B0[1]) {
            if ((p = (void *)get_table_value__19TAdPlyPltAnimCtrlGCFi(1)) != NULL) {
                TAdPlyPltAnimCtrlGC__sub_80355D5C(p, arg0 + 0x24);
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, u32 *, 0x20) >= lbl_804792B0[2]) {
            if ((p = (void *)get_table_value__19TAdPlyPltAnimCtrlGCFi(2)) != NULL) {
                TAdPlyPltAnimCtrlGC__sub_80355D5C(p, arg0 + 0x24);
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 4;
        }
        break;
    case 4:
        if (M2C_FIELD(arg0, u32 *, 0x20) >= lbl_804792B0[3]) {
            if ((p = (void *)get_table_value__19TAdPlyPltAnimCtrlGCFi(3)) != NULL) {
                TAdPlyPltAnimCtrlGC__sub_80355D5C(p, arg0 + 0x24);
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 5;
        }
        break;
    case 5:
        if (M2C_FIELD(arg0, u32 *, 0x20) >= lbl_804792B0[4]) {
            if ((p = (void *)get_table_value__19TAdPlyPltAnimCtrlGCFi(4)) != NULL) {
                TAdPlyPltAnimCtrlGC__sub_80355D5C(p, arg0 + 0x24);
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 6;
        }
        break;
    case 6:
        if (M2C_FIELD(arg0, u32 *, 0x20) > 0x1A) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 7;
        }
        break;
    case 7:
        break;
    }
}

void *__dt__19TAdPlyPltAnimCtrlGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TAdPlyPltAnimCtrlGC;
        if ((u32) lbl_805D6F08 != 0U) {
            lbl_805D6F08 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D6F08;

typedef char RecoveredGlobal_80355414___vt__19TAdPlyPltAnimCtrlGC_size[sizeof(RecoveredGlobal_80355414___vt__19TAdPlyPltAnimCtrlGC) == 0x18 ? 1 : -1];
u8 *TAdPlyPltAnimCtrlGC__ct(u8 *arg0, s32 arg1) {
    s32 var_r31;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80355414___vt__19TAdPlyPltAnimCtrlGC *)&__vt__19TAdPlyPltAnimCtrlGC).value;
    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D4390;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    do {
        TAdPlyPltAnimGC__sub_803560F0((void *) (arg0), (int) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 5);
    return arg0;
}

u32 get_instance__19TAdPlyPltAnimCtrlGCFi(s32 arg0) {
    u32 var_r0;

    if ((u32) lbl_805D6F08 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x2C);
        if (var_r0 != 0U) {
            var_r0 = ((u32)TAdPlyPltAnimCtrlGC__ct((u8 *)(var_r0), (s32)(arg0)));
        }
        lbl_805D6F08 = var_r0;
    }
    return lbl_805D6F08;
}

    extern int lbl_804F142C[];
int get_table_value__19TAdPlyPltAnimCtrlGCFi(int a0) {  return lbl_804F142C[a0]; }

}
