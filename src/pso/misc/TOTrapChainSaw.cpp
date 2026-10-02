#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802C9564_802C9040 { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_802C9564_802C9040 : Base_802C9564_802C9040 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m24();
    virtual void m25();
};
struct Base_802C96EC_802C9040 { char pad[0x18]; };
struct VObj_802C96EC_802C9040 : Base_802C96EC_802C9040 {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17();
    virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21();
    virtual void m22(); virtual void m23();
    virtual void m24();
};

struct VBase_18_52534d { char pad[0x18]; };

struct VObj_18_52534d : VBase_18_52534d {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
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
    virtual void m22();
    virtual M2C_UNK m23();
};

struct VBase_18_fd30ee { char pad[0x18]; };

struct VObj_18_fd30ee : VBase_18_fd30ee {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
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
    virtual M2C_UNK m19();
};

struct RecoveredGlobal_802C9890___vt__14TOTrapChainSaw {
    M2C_UNK value;
    u8 remaining[0x78];
};

typedef struct F4_802C8FF8 { f32 v[4]; } F4_802C8FF8;

typedef struct S_802C9124 { u8 pad0[0xD8]; s32 f[4]; } S_802C9124;

typedef struct S_802C9174 { u8 pad0[0xD8]; s32 f[4]; } S_802C9174;

struct Base_802C91DC { char pad[0x18]; };

struct VObj_802C91DC : Base_802C91DC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(s32);
    virtual s32 m17(s32);
    virtual void m18(s32);
};

extern "C" {
void update_demo__14TOTrapChainSawFPv(void *arg0);
extern const f32 lbl_805DE62C;
extern const f32 lbl_805DE630;
void TOTrapChainSaw__sub_802C9094(u8 *arg0);
s32 init_map_object_base(void *, void *);
extern M2C_UNK __vt__14TOTrapChainSaw[];
extern s32 lbl_805D3F00;
u8 *TOTrapChainSaw__ct(u8 *arg0, s32 arg1, s32 arg2);
extern F4_802C8FF8 lbl_80471EDC[];
extern s32 lbl_805D5550;
f32 TOTrapChainSaw__sub_802C8FF8(f32 farg0);
u16 obj_getField1c(void *);
void TOTrapChainSaw__sub_802C9124(S_802C9124 *arg0, void *arg1);
u16 obj_getField1c(void *);
s32 TOTrapChainSaw__sub_802C9174(S_802C9174 *arg0, void *arg1);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(s32);
u32 check_actor_body_contact(void *, s32, f32);
s32 get_player_by_client_id(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 lbl_805D53A0;
extern const f32 lbl_805DE634;
int TOTrapChainSaw__sub_802C91DC(void *arg0);
}

extern "C" {

void TOTrapChainSaw__sub_802C9090(void);
void *__dt__14TOTrapChainSawFv(void *arg0, s16 arg1);
int clear_field_d8__14TOTrapChainSawFPv(void* p);
void decode_params__14TOTrapChainSawFPv(void *arg0);
void update_active_flag__14TOTrapChainSawFPv(void *arg0);
void update_demo__14TOTrapChainSawFPv(void *arg0);
void update_sweep__14TOTrapChainSawFPv(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);
s32 TOTrapAncient02R__sub_80154D78(void *);
void __dl__7TObjectFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
void destroy_key_base__5TOKeyFPvs(void *, int);
int memset(void*, int, int);

f32 TOTrapChainSaw__sub_802C8FF8(f32 farg0) {
    F4_802C8FF8 t = lbl_80471EDC[0];
    return farg0 * t.v[lbl_805D5550];
}

void update_demo__14TOTrapChainSawFPv(void *arg0) {
    s32 temp_r31;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_r31 + M2C_FIELD(arg0, s32 *, 0xD4));
        TOTrapAncient02R__sub_80154D78(arg0);
        M2C_FIELD(arg0, s32 *, 0x60) = temp_r31;
    }
}
void TOTrapChainSaw__sub_802C9090(void) {  }

void TOTrapChainSaw__sub_802C9094(u8 *arg0) {
    if (((VObj_18_52534d *)(arg0))->m8(lbl_805DE62C, lbl_805DE630) == 1) {
        ((VObj_18_52534d *)(arg0))->m23();
        update_demo__14TOTrapChainSawFPv(arg0);
    }
}

int clear_field_d8__14TOTrapChainSawFPv(void* p) { return memset((char*)p + 0xd8, 0, 16); }

void TOTrapChainSaw__sub_802C9124(S_802C9124 *arg0, void *arg1) {
    s32 i = obj_getField1c(arg1);
    if (i >= 0 && i < 4) {
        arg0->f[i] = 0x96;
    }
}

s32 TOTrapChainSaw__sub_802C9174(S_802C9174 *arg0, void *arg1) {
    s32 i = obj_getField1c(arg1);
    if (i >= 0 && i < 4) {
        if (arg0->f[i] > 0) {
            arg0->f[i] = arg0->f[i] - 1;
            return 1;
        }
    }
    return 0;
}

int TOTrapChainSaw__sub_802C91DC(void *arg0) {
    s32 i;
    s32 p;
    s32 t;
#define self ((VObj_802C91DC *)arg0)
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        for (i = 0; i < 4; i++) {
            p = get_player_by_client_id(i);
            if (p != 0 && self->m17(p) == 0) {
                if (get_field_3e4__10TObjPlayerFPv(p) == get_current_floor()) {
                    t = M2C_FIELD(self, s32 *, 0x60);
                    M2C_FIELD(self, s32 *, 0x60) = t + M2C_FIELD(self, s32 *, 0xD4);
                    if (check_actor_body_contact(self, p, lbl_805DE634) != 0) {
                        self->m16(p);
                        self->m18(p);
                    }
                    M2C_FIELD(self, s32 *, 0x60) = t;
                }
            }
        }
    } else {
        s32 q;
        s32 t2;
        q = get_player_by_client_id(lbl_805D53A0);
        if (q != 0 && self->m17(q) == 0) {
            if (get_field_3e4__10TObjPlayerFPv(q) == get_current_floor()) {
                t2 = M2C_FIELD(self, s32 *, 0x60);
                M2C_FIELD(self, s32 *, 0x60) = t2 + M2C_FIELD(self, s32 *, 0xD4);
                if (check_actor_body_contact(self, q, lbl_805DE634) != 0) {
                    self->m16(q);
                    self->m18(q);
                }
                M2C_FIELD(self, s32 *, 0x60) = t2;
            }
        }
    }
#undef self
}

void update_sweep__14TOTrapChainSawFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 0) {
            ((VObj_802C9564_802C9040 *)arg0)->m24();
        }
        ((VObj_802C9564_802C9040 *)arg0)->m25();
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) + M2C_FIELD(arg0, s32 *, 0xD0));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) - M2C_FIELD(arg0, s32 *, 0xD0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) < 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    }
}

void update_active_flag__14TOTrapChainSawFPv(void *arg0) {
    ((VObj_802C96EC_802C9040 *) arg0)->m22();
    ((VObj_802C96EC_802C9040 *) arg0)->m15();
    if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0xE8)) == 1) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
}

void decode_params__14TOTrapChainSawFPv(void *arg0) {
    s32 var_r0;
    s32 temp_r3;
    u32 var_r0_2;
    u32 temp_r3_2;

    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r3 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 0xFF;
        if (temp_r3 <= 0xFF) {
            var_r0 = temp_r3;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xE8) = var_r0;
    if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0xE8)) == 1) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    }
    M2C_FIELD(arg0, u32 *, 0xCC) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x88) >> 0x10U);
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (u16) M2C_FIELD(arg0, u32 *, 0x88);
    M2C_FIELD(arg0, u32 *, 0xF4) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x8C) >> 0x10U);
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0xF4);
    if ((s32) temp_r3_2 < 0) {
        var_r0_2 = 0;
    } else {
        var_r0_2 = 1;
        if ((s32) temp_r3_2 <= 1) {
            var_r0_2 = temp_r3_2;
        }
    }
    M2C_FIELD(arg0, u32 *, 0xF4) = var_r0_2;
}

extern M2C_UNK __vt__14TOTrapChainSaw[];

void *__dt__14TOTrapChainSawFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOTrapChainSaw;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802C9890___vt__14TOTrapChainSaw_size[sizeof(RecoveredGlobal_802C9890___vt__14TOTrapChainSaw) == 0x7C ? 1 : -1];
u8 *TOTrapChainSaw__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_map_object_base((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802C9890___vt__14TOTrapChainSaw *)&__vt__14TOTrapChainSaw).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F00;
    ((VObj_18_fd30ee *)(arg0))->m5(arg2);
    ((VObj_18_fd30ee *)(arg0))->m19();
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    return arg0;
}

}
