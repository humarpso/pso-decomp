#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8016A004_80169EE4 { char pad[0x18]; };
struct VObj_8016A004_80169EE4 : Base_8016A004_80169EE4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16();
    virtual void m17();
};
struct Base_8016A0E0_80169EE4 { char pad[0x18]; };
struct VObj_8016A0E0_80169EE4 : Base_8016A0E0_80169EE4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(void *);
};

struct SwitchPacket {u8 code,words;u16 object,zero,reserved,switchId;u8 area,flags;};

struct Self_8016A310 { u8 pad[0x38]; u8 pos[0xCC - 0x38]; f32 range; };

extern "C" {
void init_6x05_switch_changed__6TLobbyFPv(void*);
void finalize_and_send_60__6TLobbyFPv(void*);
s32 TObjPlayer__sub_800196EC();
void send_switch_on__5TOKeyFv(void* key);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 TObjPlayer__sub_800196EC();
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 fn_801315A0(void *, void *);
extern s32 lbl_805D53A0;
s32 TOKey__sub_8016A310(Self_8016A310 *self);
}

extern "C" {

void TOKey__sub_80169FB0(void* p);
void *destroy_key_object__5TOKeyFPvs(void *arg0, s16 arg1);
void handle_6x05_write_switch_flag(void *arg0);
void handle_switch_trigger__5TOKeyFPvPv(void *arg0, void *arg1);
void *init__5TOKeyFPv(void *arg0);
s32 is_confirm_pressed__5TOKeyFPv(void *arg0);
s32 set_ready_if_pressed__5TOKeyFPv(void *arg0);
void trigger_camera_pan__5TOKeyFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_800196EC();
void *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TSwitch__sub_80229258(u16, s32);
M2C_UNK TSwitch__sub_802292E0(u16);
M2C_UNK TSwitch__sub_80229318(u16, s32);
M2C_UNK TSwitch__sub_802293A0(u16);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
void __dl__7TObjectFPv(void *);
M2C_UNK bswap_6x05_switch_flag__5TOKeyFPv();
s32 calc_angle_to__10TObjPlayerFPvPv(s32, void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
s32 fn_801A2340();
void init_map_object_base(void *);
M2C_UNK start_camera_pan__10TObjPlayerFPvs(s32, M2C_UNK, s32);

extern M2C_UNK lbl_804B27D8[];

void *destroy_key_object__5TOKeyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B27D8;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804B27D8[];

void *init__5TOKeyFPv(void *arg0) {
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B27D8;
    M2C_FIELD(arg0, u32 *, 0xD0) = -1;
    M2C_FIELD(arg0, u32 *, 0xC8) = 0;
    M2C_FIELD(arg0, u32 *, 0xAC) = 0;
    M2C_FIELD(arg0, u32 *, 0xCC) = 0;
    M2C_FIELD(arg0, u32 *, 0xD4) = 0;
    M2C_FIELD(arg0, u32 *, 0xD8) = 0;
    TOKey__sub_80169FB0((void*)((void *)((char *)arg0 + 152)));
    M2C_FIELD(arg0, u32 *, 0xDC) = 0;
    M2C_FIELD(arg0, u32 *, 0xE0) = 1;
    return arg0;
}

void TOKey__sub_80169FB0(void* p) { *(s32*)((char*)p + 0x0) = 1; }
s32 set_ready_if_pressed__5TOKeyFPv(void *arg0) {
    if (fn_801A2340() == 1) {
        M2C_FIELD(arg0, s32 *, 0xE4) = 1;
        return 1;
    }
    return 0;
}

void handle_switch_trigger__5TOKeyFPvPv(void *arg0, void *arg1) {
    s32 temp_r0;

    if ((M2C_FIELD(arg1, u8 *, 0xB) & 2) && ((s8) M2C_FIELD(arg1, u8 *, 0xA) == TObjPlayer__sub_800196EC())) {
        TBoss3Volopt__sub_8022675C(0x4005281F, 0, 0, 0);
    }
    if (M2C_FIELD(arg1, u8 *, 0xB) & 1) {
        TSwitch__sub_802293A0(M2C_FIELD(arg1, u16 *, 8));
    } else {
        TSwitch__sub_802292E0(M2C_FIELD(arg1, u16 *, 8));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD4);
    switch (temp_r0) {
    case 0:
        ((VObj_8016A004_80169EE4 *)arg0)->m16();
        M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        return;
    case 1:
        ((VObj_8016A004_80169EE4 *)arg0)->m17();
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        return;
    }
}

void handle_6x05_write_switch_flag(void *arg0) {
    void *temp_r3;

    bswap_6x05_switch_flag__5TOKeyFPv();
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 2));
    if (temp_r3 != NULL) {
        ((VObj_8016A0E0_80169EE4 *)temp_r3)->m25(arg0);
        return;
    }
    if ((M2C_FIELD(arg0, u8 *, 0xB) & 2) && ((s8) M2C_FIELD(arg0, u8 *, 0xA) == TObjPlayer__sub_800196EC())) {
        TBoss3Volopt__sub_8022675C(0x4005281F, 0, 0, 0);
    }
    if (M2C_FIELD(arg0, u8 *, 0xB) & 1) {
        TSwitch__sub_80229318(M2C_FIELD(arg0, u16 *, 8), M2C_FIELD(arg0, s8 *, 0xA));
        return;
    }
    TSwitch__sub_80229258(M2C_FIELD(arg0, u16 *, 8), M2C_FIELD(arg0, s8 *, 0xA));
}

void trigger_camera_pan__5TOKeyFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    if ((temp_r0 != 2) && ((temp_r0 != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1))) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)((u16)arg1));
        if (temp_r3 != 0) {
            start_camera_pan__10TObjPlayerFPvs(temp_r3, 0xC, calc_angle_to__10TObjPlayerFPvPv(temp_r3 + 0x38, arg0 + 0x38));
            M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD(arg0, s32 *, 0xD8);
            M2C_FIELD(arg0, s32 *, 0xE0) = 1;
        }
    }
}

extern s8 lbl_8050E208[];

void send_switch_on__5TOKeyFv(void* key) {
    SwitchPacket packet;
    init_6x05_switch_changed__6TLobbyFPv(&packet);
    packet.object=*(u16*)((u8*)key+0x1c);
    packet.zero=0;
    packet.switchId=*(s32*)((u8*)key+0xc8);
    packet.area=((s8)TObjPlayer__sub_800196EC());
    packet.flags=1;
    finalize_and_send_60__6TLobbyFPv(&packet);
}

s32 TOKey__sub_8016A310(Self_8016A310 *self) {
    u8 *p = (u8 *)((void *)TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0));
    if (p != 0) {
        if (get_field_3e4__10TObjPlayerFPv(p) == TObjPlayer__sub_800196EC()) {
            if (fn_801315A0(p + 0x38, self->pos) < self->range * self->range) {
                return 1;
            }
        }
    }
    return 0;
}

s32 is_confirm_pressed__5TOKeyFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (temp_r0 == 2) {
        return 0;
    }
    if ((temp_r0 == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 1)) {
        return 0;
    }
    if ((TOKey__sub_8016A310((Self_8016A310 *)(arg0)) != 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0)) {
        return 1;
    }
    return 0;
}

}
