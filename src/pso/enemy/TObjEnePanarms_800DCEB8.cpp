#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void obj_clearFlags30(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void TObjEnePanarms__sub_800DD738(u8 *arg0);
void obj_clearFlags30(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void TObjEnePanarms__sub_800DD954(u8 *arg0);
void obj_clearFlags30(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void TObjEnePanarms__sub_800DCF14(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
int TObjEnePanarms__sub_800E1D94(void *);
M2C_UNK TObjEnePanarms__sub_800DE430(void *, int, int);
void TObjEnePanarms__sub_800DD124(u8 *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
int TObjEnePanarms__sub_800DED30(void*, void*);
extern const f32 TObjEnePanarms__data_805DA490;
extern const f32 lbl_805DA494;
void TObjEnePanarms__sub_800DCF74(u8 *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
int TObjEnePanarms__sub_800DED30(void*, void*);
extern const f32 TObjEnePanarms__data_805DA490;
extern const f32 lbl_805DA494;
void TObjEnePanarms__sub_800DD41C(u8 *arg0);
void request_destroy__11TBoss4Type2FUi(u32);
int TObjEnePanarms__sub_800DED30(void*, void*);
extern const f32 TObjEnePanarms__data_805DA49C;
void TObjEnePanarms__sub_800DD530(u8 *arg0);
void request_destroy__11TBoss4Type2FUi(u32);
int TObjEnePanarms__sub_800DED30(void*, void*);
extern const f32 TObjEnePanarms__data_805DA49C;
void TObjEnePanarms__sub_800DD784(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA4DC;
void TObjEnePanarms__sub_800DE0B8(u8 *arg0);
void obj_clearFlags30(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
u8 * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *, void *, void *, void *);
s32 fn_800871A0(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
void TObjEnePanarms__sub_800DD7F4(u8 *arg0);
void obj_clearFlags30(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
u8 * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *, void *, void *, void *);
M2C_UNK fn_80086D50(void *, void *, int);
s32 fn_800871A0(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
void TObjEnePanarms__sub_800DD5C8(u8 *arg0);
}

extern "C" {

void TObjEnePanarms__sub_800DE2B0(void* p);
void TObjEnePanarms__sub_800DE2C0(void* p);
int TObjEnePanarms__sub_800DE2D0(void);
int TObjEnePanarms__sub_800DE390(void);
void TObjEnePanarms__sub_800DEEF8(void* p);
void free_data__14TObjEnePanarmsFv(void);
void init_state__14TObjEnePanarmsFPv(u8 *arg0);
void set_state__14TObjEnePanarmsFPv(void* p);
void try_activate__14TObjEnePanarmsFPv(void* p);
void update_spin__14TObjEnePanarmsFPv(void *arg0);
void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
int TOHangerMachine01__sub_803D9C00(void*);
M2C_UNK TObjEnePanarms__sub_800DECC4(void *);
int TObjEnePanarms__sub_800DED30(void*, void*);
s32 TObjEnePanarms__sub_800DFB44(s32);
int TObjFish__sub_800E3074(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int check_demo_mode__10TObjPlayerFv(void*);
int clear_render_callback__8TObjFishFv(void*);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
int draw__16TObjEneRe7BeruraFPv(void*);
int set_global_param__8TObjFishFi(void*);

void update_spin__14TObjEnePanarmsFPv(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x3EC) & 2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x111);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - 0x111);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 < 0) {
        TObjEnePanarms__sub_800DED30((void*)(arg0), (void*)(7));
    }
}

void TObjEnePanarms__sub_800DCF14(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F0) + 1);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 0xB);
}

void TObjEnePanarms__sub_800DCF74(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
    if ((temp_f1 >= TObjEnePanarms__data_805DA490) && (temp_f1 < lbl_805DA494)) {
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) (0xF0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (3)));
    }
}

void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;

    if ((TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E4)) != 0) || (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E8)) != 0)) {
        TObjEnePanarms__sub_800DED30((void*)(arg0), (void*)(0xA));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEnePanarms__sub_800DED30((void*)(arg0), (void*)(0xC));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x388) == 0x13) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BC32), arg0 + 0x38, 0, 0);
    }
}

extern const f32 lbl_805DA4E0;

void TObjEnePanarms__sub_800DD124(u8 *arg0) {
    u8 *temp_r5;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30(arg0, 0x40000U);
    obj_setFlags30((void *)(arg0), (int)(0x04000000U));
    TObjEnePanarms__sub_800DE430((void *) (arg0), (int) (0x2D), (int) (0x25));
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3E4), s16 *, 0x32C) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3E8), s16 *, 0x32C));
    TObjEnePanarms__sub_800E1D94(M2C_FIELD(arg0, u8 **, 0x3E4));
    TObjEnePanarms__sub_800E1D94(M2C_FIELD(arg0, u8 **, 0x3E8));
    M2C_FIELD(arg0, s32 *, 0x388) = 0x40;
}

void TObjEnePanarms__sub_800DD41C(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
    if ((temp_f1 >= TObjEnePanarms__data_805DA490) && (temp_f1 < lbl_805DA494)) {
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) (0xF0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (0xA)));
    }
}

void TObjEnePanarms__sub_800DD530(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEnePanarms__data_805DA49C) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x394);
        if (temp_r3 != 0) {
            request_destroy__11TBoss4Type2FUi(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0x3EC) & 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x3F0) < 4)) {
            TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (0xD)));
            return;
        }
        TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (3)));
    }
}

void TObjEnePanarms__sub_800DD5C8(u8 *arg0) {
    s32 buffer_14[3];
    f32 buffer_8[3];
    s32 temp_r6;
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    fn_80086D50((void *) (arg0 + 0x3D0), (void *) (arg0 + 0x5C), (int) (0x109));
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x60) - 0x4000;
    buffer_14[1] = 0;
    buffer_14[0] = temp_r6;
    buffer_14[2] = 0x4000;
    M2C_FIELD(arg0, s32 *, 0x394) = fn_800871A0((void *) (arg0 + 0x3D0), (void *) (&buffer_14[0]), (int) (0x108), (int) (temp_r6));
    buffer_8[1] = TObjEnePanarms__data_805DA4A0;
    buffer_8[0] = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    buffer_8[2] = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    create__22TObjEnePanarmsAtkColliFPvPvPvPv(arg0, arg0 + 0x3D0, &buffer_8[0], (void *)1);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 9);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x5A;
}

void TObjEnePanarms__sub_800DD738(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 8);
}

void TObjEnePanarms__sub_800DD784(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEnePanarms__data_805DA49C) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x394);
        if (temp_r3 != 0) {
            request_destroy__11TBoss4Type2FUi(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (3)));
    }
}

void TObjEnePanarms__sub_800DD7F4(u8 *arg0) {
    s32 buffer_14[3];
    f32 buffer_8[3];
    s32 temp_r6;
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x60) + 0x4000;
    buffer_14[1] = 0;
    buffer_14[0] = temp_r6;
    buffer_14[2] = 0x4000;
    M2C_FIELD(arg0, s32 *, 0x394) = fn_800871A0((void *) (arg0 + 0x3B8), (void *) (&buffer_14[0]), (int) (0x105), (int) (temp_r6));
    buffer_8[1] = TObjEnePanarms__data_805DA4A0;
    buffer_8[0] = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    buffer_8[2] = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    create__22TObjEnePanarmsAtkColliFPvPvPvPv(arg0, arg0 + 0x3B8, &buffer_8[0], NULL);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 7);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x5A;
}

void TObjEnePanarms__sub_800DD954(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 6);
}

void TObjEnePanarms__sub_800DE0B8(u8 *arg0) {
    u8 *temp_r5;
    M2C_FIELD(arg0, f32 *, 0x378) = (f32) TObjEnePanarms__data_805DA4A0;
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) lbl_805DA4DC;
    M2C_FIELD(arg0, f32 *, 0x380) = (f32) TObjEnePanarms__data_805DA4A0;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 1;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 1;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30(arg0, 0x40000U);
    obj_setFlags30((void *)(arg0), (int)(0x04000000U));
}

void init_state__14TObjEnePanarmsFPv(u8 *arg0) {
    u8 *temp_r4;
    u8 *temp_r4_2;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
    TObjEnePanarms__sub_800DECC4((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DA4E0 + M2C_FIELD(arg0, f32 *, 0x384));
    obj_setFlags30((void *) (arg0), (int) (0x04040000));
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    temp_r4_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
    M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x18) | 0x08000000);
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) M2C_FIELD(arg0, s32 *, 0x478);
}

void try_activate__14TObjEnePanarmsFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TObjEnePanarms__sub_800DED30((void*)(p), (void*)((void*)1)); } }
void TObjEnePanarms__sub_800DE2B0(void* p) { *(s32*)((char*)p + 0x3e0) = 1; *(s32*)((char*)p + 0x3dc) = 1; }
void TObjEnePanarms__sub_800DE2C0(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }

int TObjEnePanarms__sub_800DE2D0(void) { return 0; }

void set_state__14TObjEnePanarmsFPv(void* p) { if (*(int*)((char*)p + 0x374) != 4) { TObjEnePanarms__sub_800DED30((void*)(p), (void*)((void*)4)); } }

int TObjEnePanarms__sub_800DE390(void) { return 0; }

void TObjEnePanarms__sub_800DEEF8(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x24)); TObjFish__sub_800E3074(*(void**)((char*)p + 0x39c)); draw__16TObjEneRe7BeruraFPv(p); clear_render_callback__8TObjFishFv(*(void**)((char*)p + 0x39c)); TObjPlayer__sub_803D9B78(); }

extern u32 TObjEnePanarms__data_805D5278;

void free_data__14TObjEnePanarmsFv(void) {
    if ((u32) TObjEnePanarms__data_805D5278 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEnePanarms__data_805D5278, 1);
        TObjEnePanarms__data_805D5278 = 0U;
    }
}

}
