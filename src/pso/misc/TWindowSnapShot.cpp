#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802A7DDC { char pad[0x3C]; };
struct VObj_802A7DDC : Base_802A7DDC {
    virtual void m0(int);
};

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TWindowSnapShot__sub_802A5F24(void *);
s32 start_capture__15TWindowSnapShotFPvi(void *, s32);
extern int lbl_805D3E10;
extern void *lbl_805D6690;
s32 TWindowSnapShot__sub_802A7E28(void);
}

extern "C" {

int TWindowSnapShot__sub_802A7EAC(void);
void *__dt__15TWindowSnapShotFv(void *arg0, s16 arg1);
void free_shared_instance__15TWindowSnapShotFv(void);
s32 get_field_8__15TWindowSnapShotFPv(void* p);
int get_height__15TWindowSnapShotFv(void);
s32 get_size__15TWindowSnapShotFPv(void* p);
void play_open_sound__15TWindowSnapShotFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK update_both__15TWindowSnapShotFPv(void *);

extern void *lbl_805D6690;

void free_shared_instance__15TWindowSnapShotFv(void) {
    struct VObj_802A7DDC *o;
    update_both__15TWindowSnapShotFPv(lbl_805D6690);
    o = (struct VObj_802A7DDC *)lbl_805D6690;
    if (o != NULL) {
        o->m0(1);
    }
    lbl_805D6690 = NULL;
}

s32 TWindowSnapShot__sub_802A7E28(void) {
    s32 temp_r3;
    s32 var_r0;
    if ((void *) (*(u8 * *)&lbl_805D6690) != NULL) {
        return 0;
    }
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x40);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TWindowSnapShot__sub_802A5F24((void *) temp_r3));
    }
    (*(u8 * *)&lbl_805D6690) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 == 0U) {
        return 0;
    }
    start_capture__15TWindowSnapShotFPvi((void *) var_r0, (*(s32 *)&lbl_805D3E10));
    return 1;
}

s32 get_size__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_8__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0x8); }
int get_height__15TWindowSnapShotFv(void) { return 600; }

    extern int lbl_805D3E10;
int TWindowSnapShot__sub_802A7EAC(void) {  return lbl_805D3E10; }

void play_open_sound__15TWindowSnapShotFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
}

extern M2C_UNK __vt__15TWindowSnapShot[];

void *__dt__15TWindowSnapShotFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowSnapShot;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
