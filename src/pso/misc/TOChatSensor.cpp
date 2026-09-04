#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TOChatSensorFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__12TOChatSensor[];

void *__dt__12TOChatSensorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOChatSensor;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8015AC80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_player_proximity__12TOChatSensorFPv(u8 *arg0);
f32 TObjPlayer__sub_80141CF8(void *, void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);

extern s32 lbl_805D53A0;

void check_player_proximity__12TOChatSensorFPv(u8 *arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0));
    if (temp_r3 != 0U) {
        if (TObjPlayer__sub_80141CF8((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < M2C_FIELD(arg0, f32 *, 0x9C)) {
            M2C_FIELD(arg0, s32 *, 0xA0) = 1;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015AE58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_params__12TOChatSensorFPv(void *arg0);

extern s32 *lbl_805D58D4;

void init_params__12TOChatSensorFPv(void *arg0) {
    f32 temp_f0;
    s32 temp_r5;

    M2C_FIELD(arg0, u32 *, 0x90) = (u32) M2C_FIELD(arg0, u32 *, 0x5C);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) >= 2U) {
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x98) = (u32) M2C_FIELD(arg0, u32 *, 0x60);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x98) >= 2U) {
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (temp_f0 * temp_f0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x94) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    } else {
        M2C_FIELD(arg0, u16 *, 0x94) = (u16) M2C_FIELD(arg0, s32 *, 0x84);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x94) > 0x100U) {
            M2C_FIELD(arg0, u16 *, 0x94) = 0xFFFF;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xCC);
    if ((temp_r5 != 0) && ((temp_r5 < 0) || ((s32) *lbl_805D58D4 <= temp_r5))) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015B1E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_global__12TOChatSensorFv(void);
void TLobby__sub_800F957C(void*);

extern u32 lbl_805D58D4;

void destroy_global__12TOChatSensorFv(void) {
    if ((u32) lbl_805D58D4 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D58D4);
        lbl_805D58D4 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015B240
#include "types.h"

extern "C" {

void send_state__12TOChatSensorFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TOChatSensor__sub_8015B274(void*);
void init_packet_type__12TOChatSensorFPv(void* p);

void send_state__12TOChatSensorFPv(void* p) { TOChatSensor__sub_8015B274(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015B2B0
#include "types.h"

extern "C" {

void send_state__12TOChatSensorFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TOChatSensor__sub_8015B274(void*);
void init_packet_type__12TOChatSensorFPv(void* p);

void init_packet_type__12TOChatSensorFPv(void* p) { *(u8*)((char*)p + 0x0) = 147; *(u8*)((char*)p + 0x1) = 3; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015B274
#include "types.h"

extern "C" {

void TOChatSensor__sub_8015B274(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void* a0 = 0);
void init_packet_type__12TOChatSensorFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
void send_state__12TOChatSensorFPv(void* p);

void TOChatSensor__sub_8015B274(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#endif
