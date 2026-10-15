#include "types.h"

struct Base_8016A8D0 { char pad[0x18]; };
struct VObj_8016A8D0 : Base_8016A8D0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
};

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual s32 m12();
    virtual void m13();
    virtual s32 m14();
    virtual s32 m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual s32 m19();
};
struct VBase_18_d1dc07 { char pad[0x18]; };

struct VObj_18_d1dc07 : VBase_18_d1dc07 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual s32 m22();
};

struct VBase_8016AA20 { char pad[0x18]; };

struct VObj_8016AA20 : VBase_8016AA20 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    u8 pad1C[0x84 - 0x1C];
    s32 f84;
    u8 pad88[0xC8 - 0x88];
    s32 fC8;
    u8 padCC[4];
    s32 fD0;
};

extern "C" {
void update_armed_switch__5TOKeyFPv(u8 *arg0);
void reset_and_notify__5TOKeyFPv(u8 *arg0);
void set_global_count__12TObjNpcEnemyFi(s32);
void debug_printf_at(s32, const char *, ...);
extern char lbl_80441958[];
void debug_draw_key_id__5TOKeyFPv(VObj_8016AA20 *arg0);
}

extern "C" {

struct Base0_8016ab58_8016A8D0 { char pad[0x18]; };
struct VObj0_8016ab58_8016A8D0 : Base0_8016ab58_8016A8D0 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); };

void *TOKey__ct(void *arg0);
void trigger_activate_sound__5TOKeyFPv(void *arg0);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
void *__dt__5TOKeyFv(void *arg0, s16 arg1);
void bswap_6x05_switch_flag__5TOKeyFPv(void* p);
void init_key__5TOKeyFPv(u8 *arg0);
void init_switch_id__5TOKeyFPv(void *arg0);
void update_lock_state__5TOKeyFPv(void *arg0);
int TLobby__send_and_handle_60(void*);
u8 is_current_floor_switch_set(u16);
void TOKeyAncient01__vt23(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
int bswap_16__FPUs(void*);
void destroy_key_base__5TOKeyFPvs(void *, int);
int init_6x04_packet(void* a0 = 0);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
void init_map_object_base(void *);
int read_be16_field2__10TObjPlayerFPv(void*);
void set_type__14TOKeyAncient01FPv(void *);

void trigger_activate_sound__5TOKeyFPv(void *arg0) {
    struct VObj_8016A8D0 *o = (struct VObj_8016A8D0 *)arg0;
    o->m20();
}

void update_lock_state__5TOKeyFPv(void *arg0) {
    u8 temp_r3;

    if ((s32) *(s32 *)((s8 *)arg0 + 0xD0) != 2) {
        temp_r3 = is_current_floor_switch_set((u16) *(s32 *)((s8 *)arg0 + 0xC8));
        if (temp_r3 == 0) {
            *(s32 *)((s8 *)arg0 + 0xD4) = 0;
        }
        if (temp_r3 == 1) {
            *(s32 *)((s8 *)arg0 + 0xD4) = 1;
        }
    }
}

void update_armed_switch__5TOKeyFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    ((VObj_18 *)(arg0))->m12();
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xD4);
    switch (temp_r0) {
    case 0:
        if ((s32) *(s32 *)((s8 *)arg0 + 0xE0) != 0) {
            temp_r0_2 = *(s32 *)((s8 *)arg0 + 0xDC) - 1;
            *(s32 *)((s8 *)arg0 + 0xDC) = temp_r0_2;
            if (temp_r0_2 < 0) {
                ((VObj_18 *)(arg0))->m19();
                *(s32 *)((s8 *)arg0 + 0xE0) = 0;
            }
        }
        ((VObj_18 *)(arg0))->m15();
        return;
    case 1:
        ((VObj_18 *)(arg0))->m14();
        *(s32 *)((s8 *)arg0 + 0xE0) = 0;
        return;
    }
}

void debug_draw_key_id__5TOKeyFPv(VObj_8016AA20 *arg0) {
    arg0->f84 = arg0->f84 % 256;
    if (arg0->f84 < 0 || arg0->f84 > 0xFF) {
        arg0->fC8 = -1;
        arg0->fD0 = 2;
    } else {
        arg0->fC8 = arg0->f84;
        arg0->fD0 = 0;
    }
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130020, lbl_80441958, arg0->fC8);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
    arg0->m23();
}

void reset_and_notify__5TOKeyFPv(u8 *arg0) {
    ((VObj_18_d1dc07 *)(arg0))->m22();
    *(s32 *)((s8 *)arg0 + 0xE4) = 0;
}

void init_switch_id__5TOKeyFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x84);
    if ((temp_r0 < 0) || (temp_r0 > 0xFF)) {
        *(s32 *)((s8 *)arg0 + 0xC8) = -1;
        *(s32 *)((s8 *)arg0 + 0xD0) = 2;
        return;
    }
    *(s32 *)((s8 *)arg0 + 0xC8) = temp_r0;
    *(s32 *)((s8 *)arg0 + 0xD0) = 0;
}

void init_key__5TOKeyFPv(u8 *arg0) {
    ((VObj0_8016ab58_8016A8D0*)arg0)->m5();
    init_switch_id__5TOKeyFPv((void *)((void *)(arg0)));
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    *(s32 *)((s8 *)arg0 + 0x20) = 2;
}

extern s32 __vt__5TOKey[];

void *__dt__5TOKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__5TOKey;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__5TOKey[];
extern const f32 lbl_805DB6E0;
extern void *TOKey__class_name;

void *TOKey__ct(void *arg0) {
    init_map_object_base(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__5TOKey;
    *(void **)((s8 *)arg0 + 0x0) = TOKey__class_name;
    *(u32 *)((s8 *)arg0 + 0xC8) = -1;
    *(f32 *)((s8 *)arg0 + 0xCC) = lbl_805DB6E0;
    *(u32 *)((s8 *)arg0 + 0xD0) = 2;
    *(u32 *)((s8 *)arg0 + 0xD4) = 0;
    *(u32 *)((s8 *)arg0 + 0xE0) = 0;
    *(u32 *)((s8 *)arg0 + 0xD8) = 28;
    *(u32 *)((s8 *)arg0 + 0xDC) = 28;
    set_type__14TOKeyAncient01FPv((void *)((void *)((char *)arg0 + 152)));
    *(u32 *)((s8 *)arg0 + 0xE4) = 0;
    return arg0;
}

void TOKey__sub_8016AC88(void) {  }
void TOKey__sub_8016AC8C(void) {  }
void TOKey__sub_8016AC90(void) {  }

void bswap_6x05_switch_flag__5TOKeyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x8); }

}
