#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOVS2Wall01__vt4(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK init__11TOVS2Wall01Fi();

void TOVS2Wall01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    s32 temp_r0;

    if (arg1 != NULL) {
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) *arg1;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 1) {
        if ((temp_r0 >= 1) || (temp_r0 < 0)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x33C) = 0;
        if (arg2 != 0) {
            init__11TOVS2Wall01Fi();
        }
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8017B9AC
#include "types.h"

extern "C" {

void TOVS2Wall01__sub_8017B9AC(void);

void TOVS2Wall01__sub_8017B9AC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017BCC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__11TOVS2Wall01Fi(s32 arg0);
M2C_UNK TOVS2Wall01__sub_8017BC10(s32, s32);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(s32, M2C_UNK, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void init__11TOVS2Wall01Fi(s32 arg0) {
    s32 var_r31;

    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
    var_r31 = 7;
    do {
        TOVS2Wall01__sub_8017BC10(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 <= 0xF);
    TObjEneDellBiter__sub_80087350(arg0 + 0x38, 0x45);
    TObjEneDellBiter__sub_80087350(arg0 + 0x38, 0x46);
    TBoss3Volopt__sub_8022675C(0x4004BC05, arg0 + 0x38, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017BD48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 take_hit__11TOVS2Wall01FPvUi(u8 *arg0, u32 arg1);
M2C_UNK TOVS2Wall01__sub_8017BAFC(void *, M2C_UNK);
s32 TObjPlayer__sub_80019248(u32);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);

u16 obj_getField1c(u32);
extern const f32 lbl_805DBAA8;

f32 take_hit__11TOVS2Wall01FPvUi(u8 *arg0, u32 arg1) {
    u32 var_r31;

    var_r31 = 0U;
    obj_getField1c(arg1);
    if (obj_getField1c(arg1) < 4U) {
        var_r31 = arg1;
    }
    if ((var_r31 != 0U) && (TObjPlayer__sub_80019248(var_r31) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x33C) = (s32) (M2C_FIELD(arg0, s32 *, 0x33C) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x33C) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x33C) = 0;
            TOVS2Wall01__sub_8017BAFC(arg0, 1);
        } else {
            TOVS2Wall01__sub_8017BAFC(arg0, 0);
        }
        TObjEneDellBiter__sub_80087350(arg0 + 0x38, 0x1D0);
        TObjEneDellBiter__sub_80087350(arg0 + 0x38, 1);
    }
    return lbl_805DBAA8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017BE08
#include "types.h"

extern "C" {

int set_flag8__6TLobbyFPv(void*);
int queue_destruction__7TObjectFv(void*);
int interact_player_neg1__11TOVS2Wall01FPv(void* p);
int TObjPlayer__sub_801B4A18(void*, int);

void release__11TOVS2Wall01FPv(void* p) { set_flag8__6TLobbyFPv(p); queue_destruction__7TObjectFv(p); }
int interact_player_neg1__11TOVS2Wall01FPv(void* p) { return TObjPlayer__sub_801B4A18(p, -1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017BFE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__11TOVS2Wall01FPv(void *arg0);
void *__dt__11TOVS2Wall01Fv(void *arg0, s16 arg1);
void *TOVS2Wall01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
void TObjPlayer__sub_800D7C58(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

void *create__11TOVS2Wall01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x360);
    if (o != NULL) {
        o = TOVS2Wall01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__11TOVS2Wall01[];

void *__dt__11TOVS2Wall01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOVS2Wall01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x340, -1);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017C7A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_model__11TOVS2Wall01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOVS2Wall01__data_805D5AE8;

void release_model__11TOVS2Wall01Fv(void) {
    if ((u32) TOVS2Wall01__data_805D5AE8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOVS2Wall01__data_805D5AE8, 1);
        TOVS2Wall01__data_805D5AE8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017C868
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__11TOVS2Wall01FPvs(void *arg0, s16 arg1);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804B528C[];

void *destroy__11TOVS2Wall01FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B528C;
        if (M2C_FIELD(arg0, void **, 0xC8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xC8)); M2C_FIELD(arg0, M2C_UNK *, 0xC8) = 0; }
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
#endif
#if PSO_CLASS_PACKAGE == 0x8017CA44
#include "types.h"

extern "C" {

int init__17TOBarrierEnergy01FPv(void*);
void* init__11TOVS2Wall01FPv(void* p);
int bswap_16__FPUs(void*);
int bswap_header__6TLobbyFi(void*);
int TLobby__send_and_handle_60(void*);
void TOVS2Wall01__vt23(void);
void TOVS2Wall01__sub_8017CA48(void* p, s32 v);
s32 TOVS2Wall01__sub_8017CA50(void* p);

void TOVS2Wall01__vt23(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017CA48
#include "types.h"

extern "C" {

void TOVS2Wall01__sub_8017CA48(void* p, s32 v);
s32 TOVS2Wall01__sub_8017CA50(void* p);
void byteswap_hit_packet__11TOVS2Wall01FPv(void* p);
void update_and_send__11TOVS2Wall01FPv(void* p);
void* init__11TOVS2Wall01FPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_header__6TLobbyFi(void*);
void TOVS2Wall01__vt23(void);
int bswap_16__FPUs(void*);
int init__17TOBarrierEnergy01FPv(void*);

void TOVS2Wall01__sub_8017CA48(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 TOVS2Wall01__sub_8017CA50(void* p) { return *(s32*)((char*)p + 0x33c); }
void byteswap_hit_packet__11TOVS2Wall01FPv(void* p) { bswap_header__6TLobbyFi(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); }
void update_and_send__11TOVS2Wall01FPv(void* p) { byteswap_hit_packet__11TOVS2Wall01FPv(p); TLobby__send_and_handle_60(p); }
void* init__11TOVS2Wall01FPv(void* p) { init__17TOBarrierEnergy01FPv(p); *(short*)((char*)p + 0xc) = 0; *(short*)((char*)p + 0xe) = 0; *(unsigned char*)(p) = 134; *(unsigned char*)((char*)p + 0x1) = 4; return p; }

}
#endif
#endif
