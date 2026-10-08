#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Q_803D98E4 { f32 x, y, z, w; };

struct Q_803D993C { f32 x, y, z, w; };

struct A_803D9DA8 { u8 pad[0xC]; u8 *p; };

struct B_803D9DA8 { s32 a; u16 b; u16 c; };

struct G_803D9DA8 { u8 pad[8]; s32 f8; };

struct Matrix34 { f32 elements[3][4]; };

struct Ent_803D9E38 { u8 *p; s32 a; s32 b; };

struct Tbl_803D9E38 { u8 pad[8]; Ent_803D9E38 arr[1]; };

extern "C" {
extern u32 lbl_805D7770;
extern u32 lbl_805D7774;
s32 pop_matrix(void);
extern u32 lbl_805D7770;
extern u32 lbl_805D7774;
s32 pop_matrices(s32 arg0);
f32 PSMTXConcat(int, int, int);
extern u32 lbl_805D7774;
void concat_matrix__10TObjPlayerFUiUi(u32 arg0, u32 arg1);
f32 PSMTXConcat(int, int, int);
extern u32 lbl_805D7774;
void concat_matrix__11TCameraCtrlFUiUi(u32 arg0, u32 arg1);
s32 TObjPlayer__sub_803DB244();
s32 is_gvm_load_ok__10TObjPlayerFv(void);
void move_data__6TLobbyFv(void *, void *, int);
extern u32 lbl_805D7774;
extern u32 lbl_805D776C;
s32 push_matrix_from(void *src);
void TObjPlayer__sub_803D9C60(u32 *p);
f32 PSMTXConcat(int, int, int);
void PSMTXQuat(void *, void *);
extern u32 lbl_805D7774;
void concat_quaternion_rotation__10TObjPlayerFPv(f32 *arg0);
f32 PSMTXConcat(int, int, int);
void PSMTXQuat(void *, void *);
extern u32 lbl_805D7774;
void apply_quat_rotation__10TObjPlayerFPvf(f32 *arg0, f32 farg0);
s32 fn_803DA12C(u8 *, s32, s32, s32);
extern G_803D9DA8 lbl_8058D470;
s32 TObjPlayer__sub_803D9DA8(A_803D9DA8 *arg0, B_803D9DA8 *arg1);
void PSMTXRotRad(Matrix34*, char, f32);
f32 PSMTXConcat(int, int, int);
extern u32 lbl_805D7774;
void rotate_matrix_x(Matrix34* matrix, s32 angle);
void move_data__6TLobbyFv(void *, void *, int);
void TObjPlayer__sub_803D9C60(u32 *p);
extern G_803D9DA8 lbl_8058D470;
u32 *find_gvrt_texture_chunk(void *arg0, u32 *arg1, u32 *arg2);
s32 find_free_slot__10TObjPlayerFPvPv(void *, int);
s32 find_record_index__10TObjPlayerFUiUi(int, int);
M2C_UNK TObjPlayer__sub_803DAD24(int, int);
extern s32 lbl_805D7768;
s32 TObjPlayer__sub_803D9E38(s32 *arg0, u32 arg1, s32 *arg2, u32 *arg3);
}

extern "C" {

__declspec(section ".sdata2") extern const f64 lbl_805E0F48;
void rotate_matrix_x(Matrix34* matrix, s32 angle) {
    Matrix34 rotation;
    Matrix34* selected;
    if (angle != 0) {
        if (matrix == NULL) selected = (Matrix34*)lbl_805D7774;
        else selected = matrix;
        PSMTXRotRad(&rotation, 'x', (f32)(lbl_805E0F48 * (f64)angle));
        PSMTXConcat((int)selected, (int)&rotation, (int)selected);
    }
}

#pragma push
#pragma scheduling off
void concat_matrix__10TObjPlayerFUiUi(u32 arg0, u32 arg1) {
    u32 var_r3;
    u32 var_r4;
    var_r3 = arg0;
    var_r4 = arg1;
    if (var_r3 == 0U) {
        var_r3 = lbl_805D7774;
    }
    if (var_r4 == 0U) {
        var_r4 = lbl_805D7774;
    }
    PSMTXConcat((int) (var_r3), (int) (var_r4), (int) (var_r3));
}
#pragma pop

#pragma push
#pragma peephole off
#pragma fp_contract on
void concat_matrix__11TCameraCtrlFUiUi(u32 arg0, u32 arg1) {
    u32 var_r4;
    u32 var_r5;
    var_r4 = arg1;
    if (arg0 == 0U) {
        var_r5 = lbl_805D7774;
    } else {
        var_r5 = arg0;
    }
    if (var_r4 == 0U) {
        var_r4 = lbl_805D7774;
    }
    PSMTXConcat((int) (var_r4), (int) (var_r5), (int) (var_r5));
}
#pragma pop

#pragma push
#pragma scheduling off
s32 push_matrix_from(void *src) {
    u32 next = lbl_805D7774 + 0x30;
    if (next > lbl_805D776C) {
        return 0;
    }
    move_data__6TLobbyFv((void *)next, (src == 0) ? (void *)lbl_805D7774 : src, 0x30);
    lbl_805D7774 = next;
    return 1;
}
#pragma pop

#pragma push
#pragma scheduling off
s32 pop_matrices(s32 arg0) {
    u32 temp_r3;
    temp_r3 = lbl_805D7774 - (arg0 * 0x30);
    if (temp_r3 < (u32) lbl_805D7770) {
        return 0;
    }
    lbl_805D7774 = temp_r3;
    return 1;
}
#pragma pop

void concat_quaternion_rotation__10TObjPlayerFPv(f32 *arg0) {
    u8 sp18[0x30];
    Q_803D98E4 q;
    q.w = arg0[0];
    q.x = arg0[1];
    q.y = arg0[2];
    q.z = arg0[3];
    PSMTXQuat(sp18, &q);
    PSMTXConcat(lbl_805D7774, (int)sp18, lbl_805D7774);
}

void apply_quat_rotation__10TObjPlayerFPvf(f32 *arg0, f32 farg0) {
    u8 sp18[0x30];
    Q_803D993C q;
    q.w = farg0;
    q.x = arg0[0];
    q.y = arg0[1];
    q.z = arg0[2];
    PSMTXQuat(sp18, &q);
    PSMTXConcat(lbl_805D7774, (int)sp18, lbl_805D7774);
}

#pragma push
#pragma scheduling off
s32 pop_matrix(void) {
    u32 temp_r3;
    temp_r3 = lbl_805D7774 - 0x30;
    if (temp_r3 < (u32) lbl_805D7770) {
        return 0;
    }
    lbl_805D7774 = temp_r3;
    return 1;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803D9C60(u32 *p) {
    u32 v = *p;
    *p = ((v & 0xFF000000) >> 24) | ((v & 0xFF0000) >> 8) | ((v & 0xFF00) << 8) | ((v & 0xFF) << 24);
}
#pragma pop

u32 *find_gvrt_texture_chunk(void *arg0, u32 *arg1, u32 *arg2) {
    u32 tag;
    u32 *p = arg2;
    if (arg1 != NULL) {
        *arg1 = 0xFFFFFFFF;
    }
    do {
        tag = *p;
        TObjPlayer__sub_803D9C60(&tag);
        switch (tag) {
        case 0x54525647:
            move_data__6TLobbyFv(arg0, p + 2, 8);
            return p + 4;
        case 0x58494247: {
            u32 len;
            p++;
            len = *p++;
            TObjPlayer__sub_803D9C60(&len);
            if (arg1 != NULL) {
                *arg1 = *p;
            }
            p += len >> 2;
            break;
        }
        default:
            lbl_8058D470.f8 = 4;
            return NULL;
        }
    } while (tag != 0x54525647);
    return p;
}

s32 TObjPlayer__sub_803D9DA8(A_803D9DA8 *arg0, B_803D9DA8 *arg1) {
    if (fn_803DA12C(arg0->p + 4, arg1->b, arg1->c, arg1->a) != 0) {
        lbl_8058D470.f8 = 6;
        return -1;
    }
    return 1;
}

#pragma push
#pragma peephole off
s32 is_gvm_load_ok__10TObjPlayerFv(void) {
    if (TObjPlayer__sub_803DB244() == 0) {
        return 1;
    }
    return -1;
}
#pragma pop

s32 TObjPlayer__sub_803D9E38(s32 *arg0, u32 arg1, s32 *arg2, u32 *arg3) {
    s32 sp8;
    u32 j;
    s32 *temp_r4;
    s32 *temp_r4_2;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r6;
    u8 *temp_r29;
    u8 *temp_r31;
    temp_r6 = M2C_FIELD(arg0, s32 *, 0);
    temp_r31 = (u8 *)(temp_r6 + (arg1 * 0xC));
    temp_r3 = M2C_FIELD(temp_r31, s32 *, 4);
    if (((u32) (temp_r3 & 0x10000) != 0) && (arg1 != 0)) {
        M2C_FIELD(arg3, u32 *, 0) = (u32) (M2C_FIELD(temp_r31, s32 *, 8) & 0xFC000000) >> 0x1AU;
        j = arg1 - 1;
        temp_r29 = ((Tbl_803D9E38 *)temp_r6)->arr[j].p;
        M2C_FIELD(arg2, s32 *, 0) = M2C_FIELD(M2C_FIELD(temp_r29, s32 **, 0xC), s32 *, 0);
        temp_r3_2 = find_record_index__10TObjPlayerFUiUi((int) (M2C_FIELD(arg2, s32 *, 0)), (int) (M2C_FIELD(arg3, u32 *, 0)));
        if (temp_r3_2 < 0) {
            if (find_free_slot__10TObjPlayerFPvPv((void *) (&sp8), (int) (0)) < 0) {
                return -1;
            }
            M2C_FIELD(temp_r31, s32 *, 8) = sp8;
            M2C_FIELD(sp8, u32 *, 8) = (u32) M2C_FIELD(arg3, u32 *, 0);
            M2C_FIELD(sp8, s32 **, 0xC) = (s32 *) M2C_FIELD(temp_r29, s32 **, 0xC);
            M2C_FIELD(sp8, s32 *, 0x10) = 1;
            temp_r4 = (s32 *)(M2C_FIELD(sp8, s32 **, 0xC));
            M2C_FIELD(temp_r4, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x24) + 1);
            M2C_FIELD(sp8, s32 *, 0x14) = (s32) M2C_FIELD(temp_r29, s32 *, 0x14);
            TObjPlayer__sub_803DAD24((int) (sp8), (int) (temp_r4));
            goto block_7;
        }
        temp_r0 = lbl_805D7768 + (temp_r3_2 * 0x18);
        sp8 = temp_r0;
        M2C_FIELD(temp_r31, s32 *, 8) = temp_r0;
        temp_r4_2 = (s32 *)(M2C_FIELD(sp8, s32 **, 0xC));
        M2C_FIELD(temp_r4_2, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x24) + 1);
        M2C_FIELD(sp8, s32 *, 0x10) = (s32) (M2C_FIELD(sp8, s32 *, 0x10) + 1);
block_7:
        return 1;
    }
    if ((u32) (temp_r3 & 0x800000) != 0) {
        M2C_FIELD(arg2, s32 *, 0) = M2C_FIELD(temp_r31, s32 *, 8);
        M2C_FIELD(arg3, u32 *, 0) = -1U;
    } else if ((u32) (temp_r3 & 0x01000000) != 0) {
        M2C_FIELD(arg2, s32 *, 0) = M2C_FIELD(temp_r31, s32 *, 8) & 0x03FFFFFF;
        M2C_FIELD(arg3, u32 *, 0) = (u32) (M2C_FIELD(temp_r31, s32 *, 8) & 0xFC000000) >> 0x1AU;
    } else {
        M2C_FIELD(arg2, s32 *, 0) = -1;
        M2C_FIELD(arg3, u32 *, 0) = (u32) (M2C_FIELD(temp_r31, s32 *, 8) & 0xFC000000) >> 0x1AU;
    }
    return 0;
}

}
