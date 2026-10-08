#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1419ea { char pad[0x18]; };

struct VObj_18_1419ea : VBase_18_1419ea {
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
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual M2C_UNK m26();
};

extern "C" {
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
VObj_18_1419ea *query_game_join_id__10TObjPlayerFv(s32);
void func_80141618__Fv(void);
void set_depth_buffer_settings_id__FUl(u32);
void reset_transform_state__10TObjPlayerFv(void);
extern u8 lbl_8050BEC0[];
extern u8 lbl_8058D4C0[];
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern u8 *lbl_805D6FB8;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_80363D4C(void);
}

extern "C" {

void alloc_and_run_object__10TObjPlayerFv(void);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
void *run_and_return_arg__10TObjPlayerFi(void *);

extern void *player_item_id_list;

void alloc_and_run_object__10TObjPlayerFv(void) {
    void *o;

    o = alloc__23TAdSinglePlyChrSelectGCFPv(0xB4);
    if (o != NULL) {
        o = run_and_return_arg__10TObjPlayerFi(o);
    }
    player_item_id_list = o;
}
void TObjPlayer__sub_80363D4C(void) {
    s32 *p;
    s32 n;
    VObj_18_1419ea *obj;
    reset_transform_state__10TObjPlayerFv();
    lbl_805D5660 = some_id_805c6f74;
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    copy_vec4__13TRaderMapCoreFPvPv(lbl_8050BEC0, lbl_8058D4C0);
    n = *(s32 *)(lbl_805D6FB8 + 0xB0);
    p = (s32 *)(lbl_805D6FB8 + 0x30);
    while (n != 0) {
        obj = query_game_join_id__10TObjPlayerFv(*p++);
        if (obj != NULL) {
            set_depth_buffer_settings_id__FUl(1);
            obj->m26();
            reset_transform_state__10TObjPlayerFv();
            copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            some_id_805c6f74 = lbl_805D5660;
            set_depth_buffer_settings_id__FUl(2);
            obj->m26();
            reset_transform_state__10TObjPlayerFv();
            copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            some_id_805c6f74 = lbl_805D5660;
        }
        n--;
    }
    func_80141618__Fv();
    *(s32 *)(lbl_805D6FB8 + 0xB0) = 0;
}

}
