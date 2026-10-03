#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80152F28 { u16 a; u16 b; };

struct N_80152C8C { u8 pad0[7]; s8 count; u32 pos[1]; };

extern "C" {
void TNpcPlayer__sub_80152D64(void* p);
void* fn_80152EF8(void* p);
void __construct_array(void *, void *, int, int, int);
void *TNpcPlayer__sub_80152D04(void *arg0);
void TNpcPlayer__sub_80152A34(u8 *arg0, s32 arg1, s32 arg2);
void TNpcPlayer__sub_80152B08(u8 *arg0);
void TNpcPlayer__sub_80152B98(u8 *arg0);
void TNpcPlayer__sub_80152C28(u8 *arg0);
void *TObjPlayer__sub_801D2304(void *arg0, void *arg1);
void *TObjPlayer__sub_801D2348(void *arg0, void *arg1);
void TNpcPlayer__sub_80152C48(u8 *arg0);
int TLobby__send_and_handle_60(void*);
u8 TNpcPlayer__sub_80152CE8(u8 *arg0);
void TNpcPlayer__sub_80152C48(u8 *arg0);
void TNpcPlayer__sub_80152A78(s16 *self);
void TFontSmallLobby__sub_80152F28(Obj_80152F28 *self);
int read_be16_field2__10TObjPlayerFPv(void*);
void byteswap_pos__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152C8C(N_80152C8C *arg0);
}

extern "C" {

void TNpcPlayer__sub_80152A30(void);
void bswap_6x45_packet(void* p);
void bswap_6x44_packet(void* p);
void bswap_6x43_packet(void* p);
void TNpcPlayer__sub_80152D64(void* p);
void TNpcPlayer__sub_80152E74(void* a0);
int get_registered_object_count(void);
void byteswap_pos__10TNpcPlayerFPv(void* p);
void* fn_80152EF8(void* p);
u16 get_action_flags__10TNpcPlayerFPv(void* p);
void* init__10TNpcPlayerFPv(void* p);
void init_model__10TNpcPlayerFPv(void* p);
void reset_model__10TNpcPlayerFPv(void* p);
void reset_move_state__10TNpcPlayerFPv(void* a0);
void set_field2__10TNpcPlayerFPvs(void* p, s16 v);
void set_field_0__10TNpcPlayerFPvs(void* p, s16 v);
void set_state__10TNpcPlayerFPvi(void* p, s32 v);
void set_state__10TNpcPlayerFPvs(void* p, s16 v);
void set_type__10TNpcPlayerFPvs(void* p, s16 v);
void swap_endian__10TNpcPlayerFPv(void* p);
void sync_from_lobby__10TNpcPlayerFPv(void* p);
void update__10TNpcPlayerFPv(void* p);
void update_lobby__10TNpcPlayerFPv(void* p);
void update_players__10TNpcPlayerFPv(void* p);
void update_poison_damage__22TObjFogCollisionPoisonFPv(void *arg0);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 TObjFogCollisionPoison__sub_8015346C(s32, u16);
s32 TObjFogCollisionPoison__sub_801534E8(s32, u16);
s32 TObjFogCollisionPoison__sub_80153520(s32);
s32 TObjFogCollisionPoison__sub_801535D0(s32);
int TObjPlayer__sub_80102CE0(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
s32 check_collision__16TObjFogCollisionFPvUs(s32, u16);
s32 check_switch__22TObjFogCollisionPoisonFPv(s32);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);

void TNpcPlayer__sub_80152A30(void) {  }

void TNpcPlayer__sub_80152A34(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x84) = arg2;
}

void* init__10TNpcPlayerFPv(void* p) { TNpcPlayer__sub_80152A78((s16 *)((void*)(p))); return p; }

void TNpcPlayer__sub_80152A78(s16 *self) {
    s32 i;
    for (i = 0; i < 11; i++) {
        self[i] = 0;
    }
}

void update__10TNpcPlayerFPv(void* p) { bswap_6x45_packet((void*)(p)); update_players__6TLobbyFi(p); }

void bswap_6x45_packet(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x4)); bswap_16__FPUs((void*)((char*)p + 0x6)); }

void TNpcPlayer__sub_80152B08(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x45;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void update_players__10TNpcPlayerFPv(void* p) { bswap_6x44_packet((void*)(p)); update_players__6TLobbyFi(p); }

void bswap_6x44_packet(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x4)); bswap_16__FPUs((void*)((char*)p + 0x6)); }

void TNpcPlayer__sub_80152B98(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x44;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void update_lobby__10TNpcPlayerFPv(void* p) { bswap_6x43_packet((void*)(p)); update_players__6TLobbyFi(p); }

void bswap_6x43_packet(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x4)); bswap_16__FPUs((void*)((char*)p + 0x6)); }

void TNpcPlayer__sub_80152C28(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x43;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void TNpcPlayer__sub_80152C48(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 1) = (s8) ((((u32)TNpcPlayer__sub_80152CE8((u8 *)(arg0))) >> 2U) & 0x3F);
    TNpcPlayer__sub_80152C8C((N_80152C8C *)((void*)((void*)((void *) (arg0)))));
    TLobby__send_and_handle_60((void*)((void *) (arg0)));
}

void TNpcPlayer__sub_80152C8C(N_80152C8C *arg0) {
    s32 i;
    read_be16_field2__10TObjPlayerFPv((void*)(arg0));
    for (i = 0; i < arg0->count; i++) {
        byteswap_pos__10TNpcPlayerFPv((void*)(&arg0->pos[i]));
    }
}

u8 TNpcPlayer__sub_80152CE8(u8 *arg0) {
    return (u8) (0x30 - ((0xA - (s8) M2C_FIELD(arg0, u8 *, 7)) * 4));
}

void *TNpcPlayer__sub_80152D04(void *arg0) {
    TNpcPlayer__sub_80152D64((void*)((void *)((char *)arg0 + 4)));
    __construct_array((void *)((char *)arg0 + 8), fn_80152EF8, 0, 4, 10);
    M2C_FIELD(arg0, u8 *, 0x0) = 71;
    M2C_FIELD(arg0, u8 *, 0x1) = 12;
    return arg0;
}

void TNpcPlayer__sub_80152D64(void* p) { *(u8*)((char*)p + 0x3) = 0; *(u8*)((char*)p + 0x2) = 0; *(u8*)((char*)p + 0x1) = 0; *(u8*)((char*)p + 0x0) = 0; }
void reset_model__10TNpcPlayerFPv(void* p) { init_model__10TNpcPlayerFPv((void*)(p)); update_players__6TLobbyFi(p); }
void init_model__10TNpcPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); TObjPlayer__sub_80102CE0((char*)p + 0x4); }

    extern const float TNpcPlayer__data_805DB1F0;
void reset_move_state__10TNpcPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x8) = TNpcPlayer__data_805DB1F0; *(float*)((char*)a0 + 0x4) = TNpcPlayer__data_805DB1F0; *(unsigned char*)((char*)a0 + 0x0) = 66; *(unsigned char*)((char*)a0 + 0x1) = 3; }

void sync_from_lobby__10TNpcPlayerFPv(void* p) { swap_endian__10TNpcPlayerFPv((void*)((void*)(p))); update_players__6TLobbyFi(p); }

void swap_endian__10TNpcPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); TObjPlayer__sub_80102CE0((char*)p + 0x4); bswap_32__FPUl((char*)p + 0xc); }

    extern const float TNpcPlayer__data_805DB1F0;
void TNpcPlayer__sub_80152E74(void* a0) { *(float*)((char*)a0 + 0x8) = TNpcPlayer__data_805DB1F0; *(float*)((char*)a0 + 0x4) = TNpcPlayer__data_805DB1F0; *(int*)((char*)a0 + 0xc) = 0; *(unsigned char*)((char*)a0 + 0x0) = 64; *(unsigned char*)((char*)a0 + 0x1) = 4; }

void set_field2__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void set_field_0__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void set_state__10TNpcPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void byteswap_pos__10TNpcPlayerFPv(void* p) { bswap_16__FPUs((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x2)); }
void set_state__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void set_type__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

void* fn_80152EF8(void* p) { TFontSmallLobby__sub_80152F28((Obj_80152F28 *)((void*)(p))); return p; }

    extern int TObjPlayer__data_805D5874;

void TFontSmallLobby__sub_80152F28(Obj_80152F28 *self) {
    self->a = 0xFFFF;
    self->b = 0;
}

int get_registered_object_count(void) {  return TObjPlayer__data_805D5874; }

u16 get_action_flags__10TNpcPlayerFPv(void* p) { return *(u16*)((char*)p + 0x678); }

void update_poison_damage__22TObjFogCollisionPoisonFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x10);
    if (check_switch__22TObjFogCollisionPoisonFPv(temp_r31) != 0) {
        if (check_collision__16TObjFogCollisionFPvUs(temp_r31, M2C_FIELD(arg0, u16 *, 0x28)) != 0) {
            TObjFogCollisionPoison__sub_801534E8(temp_r31, M2C_FIELD(arg0, u16 *, 0x28));
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x20) >= (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
                TObjFogCollisionPoison__sub_8015346C(temp_r31, M2C_FIELD(arg0, u16 *, 0x28));
                M2C_FIELD(arg0, s32 *, 0x20) = 0;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x1E;
            }
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0x96;
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_r0 == 1) {
            TObjFogCollisionPoison__sub_801535D0(temp_r31);
            return;
        }
        if (temp_r0 > 0x3C) {
            TObjFogCollisionPoison__sub_80153520(temp_r31);
        }
    }
}

}
