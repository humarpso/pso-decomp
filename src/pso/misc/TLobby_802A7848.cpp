#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A7AF8_lbl_804DDD28 { M2C_UNK value; u8 remaining[0x134]; };
typedef char RecoveredGlobal_802A7AF8_lbl_804DDD28_size[sizeof(RecoveredGlobal_802A7AF8_lbl_804DDD28) == 0x138 ? 1 : -1];

struct RecoveredGlobal_802A7B50_lbl_804DDD28 {
    M2C_UNK value;
    u8 remaining[0x134];
};

struct VBase_802A7994 { char pad[0x8]; };

struct VObj_802A7994 : VBase_802A7994 {
    virtual s32 m0(s32, s32);
    virtual void m1();
    virtual u32 m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual s32 *m6(s32, s32);
    virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10();
    virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22();
    virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26();
    virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30();
    virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38();
    virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42();
    virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46();
    virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50();
    virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58();
    virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62();
    virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66();
    virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70();
    virtual void m71(); virtual void m72();
    virtual s32 m73();
    virtual void m74();
    virtual u8 *m75(s32);
};

struct Pair_802A7994 { s32 a; s32 b; };

extern "C" {
void set_field_4__6TLobbyFPvi(void* p, s32 v);
s32 get_hold_effect_count__10TObjPlayerFv(void);
s32 get_hold_effect_size_by_type__6TLobbyFv(void);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 write_packet_header__6TLobbyFPviiUi(s32, s32, s32, M2C_UNK);
s32 send_packet__6TLobbyFPviiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void copy_motion_pair(void* p, void* q);
int TLobby__sub_802A7B8C(void);
int TLobby__sub_802A7B94(void);
int TLobby__sub_802A7B9C(void);
int TLobby__sub_802A7BA4(void);
void TLobby__sub_802A7BAC(void);
int TLobby__sub_802A7BB0(void);
s32 get_param__6TLobbyFPv(void* p);
s32 get_field_04__6TLobbyFPv(void* p);
void TLobby__sub_802A7BC8(void* p);
M2C_UNK free__11TOBoss4RockFUi(s32);
extern u32 snapshot_image_buffer;
void TLobby__sub_802A7BD8(void);
s32 fn_802A5C3C(s32);
s32 get_size__15TWindowSnapShotFPv(s32);
M2C_UNK memcpy(s32, s32, s32);
extern s32 lbl_805D6690;
extern u32 snapshot_image_buffer;
extern s32 lbl_805D6698;
s32 copy_if_space(void);
s32 fn_802A5B2C(s32);
s32 fn_802A5B50(s32, s32);
s32 rlc_get_directory_offset(s32);
M2C_UNK fn_802A6070(s32, s32);
M2C_UNK fn_802A6078(s32, s32);
extern u32 snapshot_image_buffer;
extern s32 lbl_805D669C;
void set_slot_position__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK aram_dma_blocking__6TLobbyFiiii(M2C_UNK, s32, s32, s32, s32);
void send_type2_event__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
int get_width__15TWindowSnapShotFv(void);
int get_max_players__6TLobbyFv(void);
int get_height__15TWindowSnapShotFv(void);
extern u32 snapshot_image_buffer;
extern s32 lbl_805D6698;
void alloc_snapshot_buffer__6TLobbyFv(void);
s32 free_if_positive__6TLobbyFis(s32, s16);
M2C_UNK free__10TObjPlayerFPv(void *);
extern RecoveredGlobal_802A7AF8_lbl_804DDD28 lbl_804DDD28;
u8 *TLobby__sub_802A7AF8(u8 *arg0, s16 arg1);
s32 TLobby__sub_802A7318(void *);
extern RecoveredGlobal_802A7AF8_lbl_804DDD28 lbl_804DDD28;
u8 *TLobby__sub_802A7B50(u8 *arg0);
s32 *TItemDrop__sub_800F9448(s32, s32);
s32 send_packet__6TLobbyFPviiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void copy_motion_pair(void* p, void* q);
s32 get_param__6TLobbyFPv(void* p);
s32 get_field_04__6TLobbyFPv(void* p);
void TLobby__sub_802A7BC8(void* p);
void set_slot_position__6TLobbyFii(s32 arg0, s32 arg1);
s32 load_action_motion_pairs(VObj_802A7994 *self, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void TLobby__sub_802A7848(void* p, s32 _w1);
int TLobby__sub_802A7868(void* p);
void set_photon_chair_flag__6TLobbyFi(int a0);
int match_coordinate_pair(void*);

void TLobby__sub_802A7848(void* p, s32 _w1) { set_field_4__6TLobbyFPvi((void*)(p), (s32)(_w1)); }
int TLobby__sub_802A7868(void* p) { return match_coordinate_pair(p); }

    extern int lbl_805D6688;
void set_photon_chair_flag__6TLobbyFi(int a0) { lbl_805D6688 = a0; }
struct _VBase802A78E4_802a78e4_802A7848 { char pad[8]; };
struct _VObj802A78E4_802a78e4_802A7848 : _VBase802A78E4_802a78e4_802A7848 { virtual s32 m0(s32, s32); };
void set_field_4__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
s32 get_hold_effect_size_by_type__6TLobbyFv(void) {
    s32 temp_r3;
    temp_r3 = get_hold_effect_count__10TObjPlayerFv();
    switch (temp_r3) {
    case 0:
        return 0x38;
    case 1:
        return 0x10;
    default:
        return 0;
    }
}
s32 send_packet__6TLobbyFPviiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r3;
    s32 temp_r0;
    temp_r31_2 = (arg3 + 0x1F) & 0xFFFFFFE0;
    temp_r3 = alloc_buffer__11TOBoss4RockFPv(temp_r31_2);
    if (temp_r3 == 0) {
        return 0;
    }
    send_type2_event__6TLobbyFiii((s32)(arg4), (s32)(temp_r3), (s32)(temp_r31_2));
    temp_r0 = ((_VObj802A78E4_802a78e4_802A7848*)arg0)->m0(arg1, arg2);
    temp_r31 = write_packet_header__6TLobbyFPviiUi(temp_r3, arg3, temp_r0, 0x4000);
    free__11TOBoss4RockFUi(temp_r3);
    return temp_r31;
}

s32 load_action_motion_pairs(VObj_802A7994 *self, s32 arg1, s32 arg2, s32 arg3) {
    Pair_802A7994 sp8;
    s32 *slots;
    s32 i;
    s32 f4;
    s32 pkt;
    u8 *dst;
    s32 *drop;
    if (self->m2() == 0U) {
        return 0;
    }
    slots = self->m6(arg2, arg3);
    if (slots == NULL) {
        return 0;
    }
    TLobby__sub_802A7BC8(&sp8);
    dst = self->m75(arg2);
    for (i = 0; i < self->m73(); i++) {
        ((void (*)(s32, void *))set_slot_position__6TLobbyFii)(*slots, &sp8);
        f4 = get_field_04__6TLobbyFPv(&sp8);
        pkt = send_packet__6TLobbyFPviiii(self, arg1, i, f4, get_param__6TLobbyFPv(&sp8));
        if (pkt != 0) {
            drop = TItemDrop__sub_800F9448(self->m0(arg1, i), pkt);
        }
        copy_motion_pair(dst, *(void **)drop);
        slots++;
        dst += 8;
    }
    return 1;
}

void copy_motion_pair(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

u8 *TLobby__sub_802A7AF8(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_804DDD28.value;
        free_if_positive__6TLobbyFis((s32) arg0, -1);
        if (arg1 > 0) {
            free__10TObjPlayerFPv((void *) (arg0));
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_802A7B50_lbl_804DDD28_size[sizeof(RecoveredGlobal_802A7B50_lbl_804DDD28) == 0x138 ? 1 : -1];
u8 *TLobby__sub_802A7B50(u8 *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &(*(RecoveredGlobal_802A7B50_lbl_804DDD28 *)&lbl_804DDD28).value;
    TLobby__sub_802A7318((void *) (arg0));
    return arg0;
}

int TLobby__sub_802A7B8C(void) { return 0; }
int TLobby__sub_802A7B94(void) { return 0; }
int TLobby__sub_802A7B9C(void) { return 0; }
int TLobby__sub_802A7BA4(void) { return 0; }
void TLobby__sub_802A7BAC(void) {  }
int TLobby__sub_802A7BB0(void) { return 0; }
s32 get_param__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_04__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void TLobby__sub_802A7BC8(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
void TLobby__sub_802A7BD8(void) {
    if ((u32) snapshot_image_buffer != 0U) {
        free__11TOBoss4RockFUi((s32)((void*)snapshot_image_buffer));
        snapshot_image_buffer = 0U;
    }
}
s32 copy_if_space(void) {
    if (fn_802A5C3C(lbl_805D6690) >= 0x258) {
        return 0;
    }
    memcpy((*(s32 *)&snapshot_image_buffer), get_size__15TWindowSnapShotFPv(lbl_805D6690), lbl_805D6698);
    return 1;
}

void alloc_snapshot_buffer__6TLobbyFv(void) {
  s32 temp_r31;
  s32 temp_r31_2;
  u32 temp_r3;
  u8 *temp_r31_3;
  if (((u32) snapshot_image_buffer) == 0U)
  {
    temp_r31 = get_height__15TWindowSnapShotFv();
    temp_r31_2 = get_max_players__6TLobbyFv();
    temp_r31_2 = temp_r31_2 * temp_r31;
    temp_r31 = get_width__15TWindowSnapShotFv();
    temp_r31_3 = (u8 *) (temp_r31 + temp_r31_2);
    temp_r3 = ((int)alloc_buffer__11TOBoss4RockFPv((s32)(temp_r31_3)));
    snapshot_image_buffer = temp_r3;
    if (temp_r3 != 0U)
    {
      (*(u8 * *)&lbl_805D6698) = temp_r31_3;
    }
  }
}

void set_slot_position__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r31;
    temp_r31 = rlc_get_directory_offset((*(s32 *)&snapshot_image_buffer));
    temp_r31 = (*(s32 *)&snapshot_image_buffer) + temp_r31;
    temp_r31 = temp_r31 + arg0 * 8;
    fn_802A6078(arg1, lbl_805D669C + fn_802A5B50(temp_r31, (*(s32 *)&snapshot_image_buffer)));
    fn_802A6070(arg1, fn_802A5B2C(temp_r31));
}
void send_type2_event__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    aram_dma_blocking__6TLobbyFiiii(2, arg0, arg1, arg2, arg0);
}

}
