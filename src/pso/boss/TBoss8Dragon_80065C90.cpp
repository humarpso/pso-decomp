#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80065EA0_lbl_80487CCC_80065C90 {
    M2C_UNK value;
    u8 remaining[0x8];
};
struct RecoveredGlobal_80065EA0_lbl_80487CD8_80065C90 {
    M2C_UNK value;
    u8 remaining[0x350];
};
struct RecoveredGlobal_80065DB4_lbl_804FF5B4_80065C90 {
    M2C_UNK value;
    u8 remaining[0x8];
};
struct RecoveredGlobal_80065F08_lbl_80437938_80065C90 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct O_80065FD4 { u16 a; u16 b; u32 c[4]; };

extern "C" {
void bswap_16__FPUs(u16 *);
s32 bswap_32__FPUl(s32);
void byteswap_record__12TBoss8DragonFPv(O_80065FD4 *p);
}

extern "C" {

void fill_follow_camera_params__12TBoss8DragonFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2);
void get_follow_camera_offsets__12TBoss8DragonFPvPv(u8 *arg0, u8 *arg1);
M2C_UNK *TBoss8Dragon__sub_80065F08(void);
void TBoss8Dragon__sub_80065F1C(void);
void TBoss8Dragon__sub_80065F20(void);
void TBoss8Dragon__sub_80065F24(void);
void TBoss8Dragon__sub_80065F28(void);
void TBoss8Dragon__sub_80065F2C(void);
void TBoss8Dragon__sub_80065F30(void);
void TBoss8Dragon__sub_80065F34(void);
void send_spawn_params_packet__12TBoss8DragonFPv(void* p);
void byteswap_action_packet__12TBoss8DragonFPv(void *arg0);
void send_boss_actions__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_800660A4(void* p);
void TBoss8Dragon__sub_80066108(void);
void attach_particle_model(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
void bswap_boss_actions__12TBoss8DragonFi(s32 arg0);
void fn_800660B8(u8 *arg0);
int get_instance_count__12TBoss8DragonFv(void);
void init_color__12TBoss8DragonFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_80019664(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
extern RecoveredGlobal_80065EA0_lbl_80487CCC_80065C90 lbl_80487CCC;
extern RecoveredGlobal_80065EA0_lbl_80487CD8_80065C90 lbl_80487CD8;
extern int lbl_805D4DBC;
extern RecoveredGlobal_80065DB4_lbl_804FF5B4_80065C90 lbl_804FF5B4;
extern const f32 lbl_805D8D5C;
extern RecoveredGlobal_80065F08_lbl_80437938_80065C90 lbl_80437938;

    extern int lbl_805D4DBC;

typedef char RecoveredGlobal_80065EA0_lbl_80487CCC_size[sizeof(RecoveredGlobal_80065EA0_lbl_80487CCC_80065C90) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80065EA0_lbl_80487CD8_size[sizeof(RecoveredGlobal_80065EA0_lbl_80487CD8_80065C90) == 0x354 ? 1 : -1];

typedef char RecoveredGlobal_80065DB4_lbl_804FF5B4_size[sizeof(RecoveredGlobal_80065DB4_lbl_804FF5B4_80065C90) == 0xC ? 1 : -1];
void fill_follow_camera_params__12TBoss8DragonFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 temp_r0;
    M2C_FIELD(arg1, f32 *, 0) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg2, f32 *, 0) = (f32) lbl_805D8D5C;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
    switch (temp_r0) {
    default:
    case 2:
    case 0:
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 0), f32 *, 0);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 0), f32 *, 4);
        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 0), f32 *, 8);
        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 0), f32 *, 0xC);
        return;
    case 1:
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 0), f32 *, 0x10);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 0), f32 *, 0x14);
        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 4), f32 *, 0);
        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 4), f32 *, 4);
        return;
    case 3:
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 4), f32 *, 8);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 4), f32 *, 0xC);
        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 4), f32 *, 0x10);
        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 4), f32 *, 0x14);
        return;
    }
}

void get_follow_camera_offsets__12TBoss8DragonFPvPv(u8 *arg0, u8 *arg1) {
    if ((void *) (*(u8 * *)&lbl_805D4DBC) == NULL) {
        VecCopy__FP3VecPC3Vec(arg0, &lbl_80487CCC.value);
        VecCopy__FP3VecPC3Vec(arg1, &lbl_80487CD8.value);
        return;
    }
    fill_follow_camera_params__12TBoss8DragonFPvPvPv((u8 *)((u8 *)((*(u8 * *)&lbl_805D4DBC))), (u8 *)((u8 *)(arg0)), (u8 *)((u8 *)(arg1)));
}

typedef char RecoveredGlobal_80065F08_lbl_80437938_size[sizeof(RecoveredGlobal_80065F08_lbl_80437938_80065C90) == 0xC ? 1 : -1];
M2C_UNK *TBoss8Dragon__sub_80065F08(void) {
    return &lbl_80437938.value;
}

int get_instance_count__12TBoss8DragonFv(void) {  return lbl_805D4DBC; }

void TBoss8Dragon__sub_80065F1C(void) {  }
void TBoss8Dragon__sub_80065F20(void) {  }
void TBoss8Dragon__sub_80065F24(void) {  }
void TBoss8Dragon__sub_80065F28(void) {  }
void TBoss8Dragon__sub_80065F2C(void) {  }
void TBoss8Dragon__sub_80065F30(void) {  }
void TBoss8Dragon__sub_80065F34(void) {  }
void init_color__12TBoss8DragonFPv(void* p) { *(u8*)((char*)p + 0x0) = 160; *(u8*)((char*)p + 0x1) = 10; }

void send_spawn_params_packet__12TBoss8DragonFPv(void* p) { byteswap_action_packet__12TBoss8DragonFPv((void *)((void *)((void*)((void*)(p))))); TLobby__send_and_handle_60(p); }

void byteswap_action_packet__12TBoss8DragonFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv((void *)(arg0));
    byteswap_record__12TBoss8DragonFPv((O_80065FD4 *)((void *)((void *)((void *)((char *)arg0 + 20)))));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 4)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 8)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 12)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 16)));
}

void byteswap_record__12TBoss8DragonFPv(O_80065FD4 *p) {
    s32 i;
    bswap_16__FPUs(&p->a);
    bswap_16__FPUs(&p->b);
    for (i = 0; i < 4; i++) {
        bswap_32__FPUl((s32)&p->c[i]);
    }
}

void send_boss_actions__12TBoss8DragonFPv(void* p) { bswap_boss_actions__12TBoss8DragonFi((s32)((s32)((void*)(p)))); TLobby__send_and_handle_60(p); }

void bswap_boss_actions__12TBoss8DragonFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv((void *)(arg0));
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
}
void TBoss8Dragon__sub_800660A4(void* p) { *(u8*)((char*)p + 0x0) = 159; *(u8*)((char*)p + 0x1) = 4; }

void fn_800660B8(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFB);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
}

void attach_particle_model(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x50) = arg2;
    M2C_FIELD(arg0, s32 *, 0x54) = arg3;
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C) | 0x200);
    M2C_FIELD(arg0, f32 *, 0x5C) = farg0;
    if (arg4 != 0) {
        M2C_FIELD(arg0, u16 *, 0x2C) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C) | 0x400);
    }
}

extern f32 lbl_805D4D90;
extern f32 lbl_805D4D94;
extern f32 lbl_805D8D58;
extern f32 lbl_805D8D90;
extern f32 lbl_805D9E80;

void TBoss8Dragon__sub_80066108(void) {
    lbl_805D4D90 = lbl_805D8D90 * lbl_805D9E80;
    lbl_805D4D94 = lbl_805D8D58 * lbl_805D9E80;
}

}
