#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
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
    virtual M2C_UNK m17();
};

struct RecoveredGlobal_8015F048_lbl_804B0F28 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015F048___vt__15TODoorAncient05 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_8015F048_lbl_804B0F28 lbl_804B0F28;
extern M2C_UNK __vt__15TODoorAncient05[];
extern s32 lbl_805D2F38;
extern void *lbl_805D5918;
extern void *TODoorAncient05__data_805D591C;
extern const f32 lbl_805DB418;
extern const f32 lbl_805DB428;
u8 *TODoorAncient05__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void TBoss1Dragon__sub_8002ACE0(void *, void *);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 load_gvm_texture_file(void *);
extern u8 lbl_80440B10[];
extern u8 lbl_804B1038[];
extern void *lbl_805D5918;
extern void *TODoorAncient05__data_805D591C;
extern void *lbl_805D5920;
void TODoorAncient05__sub_8015EECC(void);
}

extern "C" {

void *__dt__15TODoorAncient05Fv(void *arg0, s16 arg1);
void reset__15TODoorAncient05Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern void *lbl_805D5918;
extern void *TODoorAncient05__data_805D591C;
extern void *lbl_805D5920;

void reset__15TODoorAncient05Fv(void) {
    if (lbl_805D5920 != NULL) {
        free__11TOBoss4RockFUi(lbl_805D5920);
        lbl_805D5920 = NULL;
    }
    if (TODoorAncient05__data_805D591C != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TODoorAncient05__data_805D591C, s32 *, 4));
        if (TODoorAncient05__data_805D591C != NULL) {
            free__11TOBoss4RockFUi(TODoorAncient05__data_805D591C);
            TODoorAncient05__data_805D591C = NULL;
        }
    }
    if (lbl_805D5918 != NULL) {
        TLobby__sub_8001FE7C(lbl_805D5918, 1);
        lbl_805D5918 = NULL;
    }
}

extern M2C_UNK __vt__15TODoorAncient05[];

#define G5918 (*(u8 **)&lbl_805D5918)
#define G591C (*(s32 **)&TODoorAncient05__data_805D591C)
#define G5920 (*(u8 **)&lbl_805D5920)
#define NODE(p, o) (*(u8 **)((u8 *)(p) + (o)))
void TODoorAncient05__sub_8015EECC(void) {
    u8 *p;
    s32 *buf;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 1, lbl_804B1038, 0, 0, 0);
    }
    G5918 = p;
    buf = alloc_buffer__11TOBoss4RockFPv(8);
    G591C = buf;
    buf[0] = *(s32 *)(NODE(G5918, 0x42C) + 0xC);
    G591C[1] = load_gvm_texture_file(lbl_80440B10);
    G5920 = (u8 *)alloc_buffer__11TOBoss4RockFPv(0xA8);
    if (G5918 != NULL && G5920 != NULL) {
        TBoss1Dragon__sub_8002ACE0(G5920, NODE(NODE(G5918, 0x42C), 8));
        *(s32 *)(G5920 + 0x2C) = 0;
        *(s32 *)(G5920 + 0) |= 0x10;
        TBoss1Dragon__sub_8002ACE0(G5920 + 0x38, NODE(NODE(NODE(G5918, 0x42C), 8), 0x2C));
        *(s32 *)(G5920 + 0x68) = 0;
        TBoss1Dragon__sub_8002ACE0(G5920 + 0x70, NODE(NODE(NODE(NODE(G5918, 0x42C), 8), 0x2C), 0x30));
    }
}

void *__dt__15TODoorAncient05Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorAncient05;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8015F048_lbl_804B0F28_size[sizeof(RecoveredGlobal_8015F048_lbl_804B0F28) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015F048___vt__15TODoorAncient05_size[sizeof(RecoveredGlobal_8015F048___vt__15TODoorAncient05) == 0x54 ? 1 : -1];
u8 *TODoorAncient05__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8015F048___vt__15TODoorAncient05 *)&__vt__15TODoorAncient05).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F38;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5918), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *(*(s32 * *)&TODoorAncient05__data_805D591C);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5918), u8 **, 0x430), void **, 4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB428);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) (M2C_FIELD(arg0, f32 *, 0xB4) / lbl_805DB418);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B0F28.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    return arg0;
}

}
