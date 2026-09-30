#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_800F0054 { u8 pad[0x3E4]; u16 handles[2]; };

typedef struct { f32 x, y, z; } Vec_800F0464;
struct Params_800F0464 { s32 a, b, c, d; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
M2C_UNK TObjPlayer__sub_800A05B8(void *, int);
M2C_UNK __dt__9TObjEneDDFv(void *, int);
void *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, u32, u32);
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK __vt__18TObjEneRe4Sorcerer[];
Obj_800F0054 *__dt__18TObjEneRe4SorcererFv(Obj_800F0054 *arg0, s16 arg1);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 check_v2_mode__9TObjEneDDFv();
u32 TObjEneDD__sub_800BB940(void *, void *);
u32 TObjEneDD__sub_800BB9AC(void *);
void TObjEneRe4Bit__sub_800EDAB4();
u8 *alloc_tables__6TLobbyFPvii(void *, s32, s32);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern Params_800F0464 lbl_8043D3F8;
extern u8 lbl_8043D418[];
extern f32 lbl_80496EFC[];
extern u8 lbl_80496F58[];
extern Vec_800F0464 lbl_80501070;
extern s32 lbl_805D52D0;
extern s32 lbl_805D52D4;
extern s32 lbl_805D52D8;
extern s32 lbl_805D52DC;
extern u32 lbl_805D52E0;
extern s32 TObjEneRe4Sorcerer__data_805D52E4;
extern s32 TObjEneRe4Sorcerer__data_805D52E8;
extern f32 TObjEneRe4Sorcerer__data_805D52EC;
extern s32 lbl_805D52F0;
extern u32 TObjEneRe4Sorcerer__data_805D52F4;
extern const f32 TObjEneRe4Sorcerer__data_805DA78C;
extern const f32 TObjEneRe4Sorcerer__data_805DA790;
void TObjEneRe4Sorcerer__sub_800F0464(void);
s32 get_instance__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 TBoss3Volopt__sub_800F05A0(s32 arg0);
}

extern "C" {

void TBoss3Volopt__sub_800F059C(void);
void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneRe4Sorcerer__vt26(void);
void TObjEneRe4Sorcerer__vt61(void* p);
void *create__18TObjEneRe4SorcererFPv(void *arg0);
void free_bits__18TObjEneRe4SorcererFv(void);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);
M2C_UNK TObjEneRe4Bit__sub_800EDAB0();
void TObjEneRe4Sorcerer__sub_800EFE30(void *);
void TObjEneRe4Sorcerer__sub_800F0118(void *);
void TObjEneRe4Sorcerer__vt59(void);
void TObjPlayer__sub_8004433C(void *);
void __construct_array(void *, void *, void *, int, int);
void *__nw__7TObjectFUl(int);
void destroy_buffer_pair(void*, int);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

void TObjEneRe4Sorcerer__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 9) { TObjEneDD__sub_800BBA18(p, (void*)9); } }
void TObjEneRe4Sorcerer__vt26(void) {  }

extern M2C_UNK __vt__18TObjEneRe4Sorcerer[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D2AF0;

Obj_800F0054 *__dt__18TObjEneRe4SorcererFv(Obj_800F0054 *arg0, s16 arg1) {
    s32 i;
    void *p;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneRe4Sorcerer;
        for (i = 0; i < 2; i++) {
            if ((p = TPhotonMylla__sub_80154CB4(arg0->handles[i])) != NULL) {
                queue_destruction__7TObjectFv(p);
            }
            arg0->handles[i] = 0xFFFF;
        }
        TObjEneGibbles__sub_80156720(arg0);
        __destroy_arr((u8 *) arg0 + 0x474, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800A05B8((u8 *) arg0 + 0x3FC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneRe4Sorcerer;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1020));
    TObjPlayer__sub_8004433C((void *)((char *)arg0 + 1048));
    __construct_array((void *)((char *)arg0 + 1140), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AF0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneRe4Sorcerer__sub_800EFE30(arg0);
    TObjEneRe4Sorcerer__sub_800F0118(arg0);
    return arg0;
}

extern u32 lbl_805D52E0;
extern u32 TObjEneRe4Sorcerer__data_805D52F4;

void free_bits__18TObjEneRe4SorcererFv(void) {
    if ((u32) TObjEneRe4Sorcerer__data_805D52F4 != 0U) {
        destroy_buffer_pair((void*)TObjEneRe4Sorcerer__data_805D52F4, 1);
        TObjEneRe4Sorcerer__data_805D52F4 = 0U;
    }
    TObjEneRe4Bit__sub_800EDAB0();
    if ((u32) lbl_805D52E0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D52E0, 1);
        lbl_805D52E0 = 0U;
    }
}

extern void *tl_04;

void *create__18TObjEneRe4SorcererFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4F0);
    if (o != NULL) {
        o = TObjEneRe4Sorcerer__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

void TObjEneRe4Sorcerer__sub_800F0464(void) {
    u32 r;
    lbl_80501070.x = TObjEneRe4Sorcerer__data_805DA790;
    lbl_80501070.y = TObjEneRe4Sorcerer__data_805DA790;
    lbl_80501070.z = TObjEneRe4Sorcerer__data_805DA790;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        lbl_805D52E0 = TObjEneDD__sub_800BB940(lbl_80496F58, lbl_8043D418);
    } else {
        lbl_805D52E0 = TObjEneDD__sub_800BB9AC(lbl_80496F58);
    }
    lbl_805D52D0 = register_boss__6TLobbyFPv(0xA);
    lbl_805D52D4 = dispatch_shared_handler_b__6TLobbyFPv(0xA);
    lbl_805D52D8 = register_object__6TLobbyFPv(0xA);
    lbl_805D52DC = dispatch_shared_handler_a__6TLobbyFPv(0xA);
    TObjEneRe4Sorcerer__data_805D52E4 = 0;
    TObjEneRe4Sorcerer__data_805D52E8 = 0;
    TObjEneRe4Sorcerer__data_805D52EC = TObjEneRe4Sorcerer__data_805DA790;
    lbl_805D52F0 = 0;
    TObjEneRe4Bit__sub_800EDAB4();
    r = (u32) alloc__23TAdSinglePlyChrSelectGCFPv(0x14);
    if (r != 0) {
        r = (u32) alloc_tables__6TLobbyFPvii((void *) r, M2C_FIELD(M2C_FIELD(lbl_805D52E0, u8 **, 0x42C), s32 *, 8), 2);
    }
    TObjEneRe4Sorcerer__data_805D52F4 = r;
    Params_800F0464 p = lbl_8043D3F8;
    p.a = M2C_FIELD(lbl_805D52E0, s32 *, 0x430);
    spawn_npc_enemy__6TLobbyFsiiiff(0x2A, M2C_FIELD(M2C_FIELD(lbl_805D52E0, u8 **, 0x42C), s32 *, 8), M2C_FIELD(M2C_FIELD(lbl_805D52E0, u8 **, 0x42C), s32 *, 0xC), &p, lbl_80496EFC[3], TObjEneRe4Sorcerer__data_805DA78C);
}

void TBoss3Volopt__sub_800F059C(void) {  }
s32 TBoss3Volopt__sub_800F05A0(s32 arg0) {
    s32 masked;
    s32 result;
    s32 state;
    state = get_global_state__14TOKeyMachine01Fv();
    if (get_instance__6TLobbyFv() != 0) {
        if (state != 0x13 && state != 0x14 && state != 0x15 && state != 0x16 && state != 0x22 && state != 0x23) {
            return arg0;
        }
    } else if (state != 0x10 && state != 0x11) {
        return arg0;
    }
    masked = arg0 & 0x8FFFFF00;
    if (get_instance__6TLobbyFv() != 0) {
        if (state == 0x13 || state == 0x14) {
            result = 0x3AB42;
        } else if (state == 0x15 || state == 0x16) {
            result = 0x4003AB3D;
        } else if (state == 0x22) {
            result = 0x4003B22A;
        } else if (state == 0x23) {
            result = 0x4003A359;
        }
    } else {
        result = 0x30043;
        result |= masked;
    }
    return result;
}

}
