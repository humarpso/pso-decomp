#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8013BDCC___vt__11TMainCursor { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8013BDCC___vt__11TMainCursor_size[sizeof(RecoveredGlobal_8013BDCC___vt__11TMainCursor) == 0x18 ? 1 : -1];

extern "C" {
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F978(void);
void TKeyBoardControl__sub_8000F984(void);
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F998(void);
void TKeyBoardControl__sub_8000F9A4(void);
int TMainCursor__sub_8013DF5C(void*, void* a1, void* a2);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
int TMainCursor__sub_8013BE98(void* p, void* _w1, void* _w2);
s32 init_forward__10TObjPlayerFPv(void *);
s32 set_offset_y__11TMainCursorFPvs(void *, void *);
s32 init_field_60__11TMainCursorFPv(void *, void *);
s32 TMainCursor__sub_8013E6E0(void *, void *);
s32 TMainCursor__sub_8013E724(void *, f32);
s32 TMainCursor__sub_8013E72C(void *, void *);
s32 TMainCursor__sub_8013E75C(void *, void *);
s32 reset__11TMainCursorFi(void *);
s32 TMainCursor__sub_8013E800(void *);
s32 TMainCursor__sub_8013F1F0(void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__11TMainCursor[];
extern s32 lbl_805D2CB8;
u8 *TMainCursor__ct(u8 *arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, f32 farg0);
}

extern "C" {

void *__dt__11TMainCursorFv(void *arg0, s16 arg1);
void update_position__11TMainCursorFi(s32 arg0);
s32 TMainCursor__sub_8013DF08();
void TMainCursor__sub_8013E5E8(void *, int);
void *TPhotonMylla__sub_80154CB4();
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy__11TMainCursorFPvs(void *, int);
void destroy__11TMainCursorFis(void *, int);
M2C_UNK get_id__11TMainCursorFPv(s32);
u8 is_position_moved__11TMainCursorFPv(s32);

void update_position__11TMainCursorFi(s32 arg0) {
    void *temp_r3;

    get_id__11TMainCursorFPv(arg0 + 0x60);
    temp_r3 = TPhotonMylla__sub_80154CB4();
    if (temp_r3 != NULL) {
        s32 base = M2C_FIELD(temp_r3, s32 *, 0xA4) + is_position_moved__11TMainCursorFPv(arg0) * 0x2C;
        VecCopy__FP3VecPC3Vec(arg0 + 0x40, base + 0x1C);
    }
}

extern M2C_UNK __vt__11TMainCursor[];

void *__dt__11TMainCursorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TMainCursor;
        destroy__11TMainCursorFis((s8 *)arg0 + 0x60, -1);
        destroy__11TMainCursorFPvs((s8 *)arg0 + 0x4C, -1);
        TMainCursor__sub_8013E5E8((s8 *)arg0 + 0x24, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TMainCursor__ct(u8 *arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, f32 farg0) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8013BDCC___vt__11TMainCursor *)&__vt__11TMainCursor).value;
    init_forward__10TObjPlayerFPv((void *) (arg0 + 0x20));
    TMainCursor__sub_8013E800((void *) (arg0 + 0x24));
    TMainCursor__sub_8013F1F0((void *) (arg0 + 0x4C));
    reset__11TMainCursorFi((void *) (arg0 + 0x60));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2CB8;
    TMainCursor__sub_8013E75C((void *) (arg0), (void *) (arg2));
    TMainCursor__sub_8013E72C((void *) (arg0), (void *) (arg3));
    TMainCursor__sub_8013E724((void *) (arg0), (f32) (farg0));
    TMainCursor__sub_8013E6E0((void *) (arg0), (void *) ((s32) arg4));
    init_field_60__11TMainCursorFPv((void *) (arg0), (void *) ((s32) arg5));
    set_offset_y__11TMainCursorFPvs((void *) (arg0), (void *) (arg6));
    return arg0;
}

int TMainCursor__sub_8013BE98(void* p, void* _w1, void* _w2) { return TMainCursor__sub_8013DF5C((void*)(p), (void*)(_w1), (void*)(_w2)); }

}
