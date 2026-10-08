#include "types.h"
typedef s32 M2C_UNK;
struct TMovie_80144910 {
    s32 name;
    u8 pad4[0x14];
    void *vt;
    u8 *obj1C;
    u8 *obj20;
    char path[0x20];
    s32 f44;
    s32 f48;
};

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_a28850 { char pad[0x18]; };

struct VObj_18_a28850 : VBase_18_a28850 {
    virtual void m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
};

struct Vec_80144778 { s32 x, y, z; };

extern "C" {
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(int);
u8 *initialize_movie_with_soundtrack(u8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
void __ct__7TObjectFP7TObject(void *, void *);
u8 *load_rel_module(u8 *, void *);
char *strncpy(char *, const char *, u32);
extern u8 lbl_8043F380[];
extern M2C_UNK __vt__6TMovie[];
extern s32 lbl_805D2CF0;
TMovie_80144910 *TMovie__ct(TMovie_80144910 *self, void *parent, s8 *name, s32 a3, s32 a4, s32 a5);
M2C_UNK queue_destruction__7TObjectFv(void *);
u8 *__ct__10TAdEndTextFv(void *, void *);
s32 TAdEndText__sub_8001B41C();
M2C_UNK calc_frame_buffer_size__6TMovieFii(void *, void *);
M2C_UNK update_stop__6TMovieFPv(int);
M2C_UNK decode_frame__6TMovieFPv(int);
s32 check_skip_input__6TMovieFPv(void *);
M2C_UNK update_input_frame__16TKeyBoardControlFv();
M2C_UNK controller_stuff__Fv();
M2C_UNK render_tick__Fv();
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_camera_look_at(void *, void *, void *);
M2C_UNK set_perspective_projection_from_fov(int, f32, f32, f32);
M2C_UNK func_803DCDFC__Fv();
M2C_UNK run_callback__6TMovieFv();
extern Vec_80144778 lbl_8043F2E8;
extern Vec_80144778 lbl_8043F2F4;
extern Vec_80144778 lbl_8043F300;
extern s32 lbl_805D773C;
extern s32 lbl_805D7740;
extern const f32 lbl_805DB180;
extern const f32 lbl_805DB184;
extern const f32 lbl_805DB188;
void run_task__6TMovieFv(u8 *arg0);
}

extern "C" {

void run_task__6TMovieFv(u8 *arg0) {
    VObj_18_a28850 *txt;
    u8 *p;
    if (M2C_FIELD(arg0, u32 *, 0x1C) == 0 || M2C_FIELD(arg0, u32 *, 0x20) == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    render_tick__Fv();
    render_tick__Fv();
    calc_frame_buffer_size__6TMovieFii((void *)lbl_805D7740, (void *)lbl_805D773C);
    txt = NULL;
    if (TAdEndText__sub_8001B41C() != 0) {
        p = __nw__7TObjectFUl(0x197C);
        if (p != NULL) {
            p = __ct__10TAdEndTextFv(p, arg0);
        }
        txt = (VObj_18_a28850 *)p;
    }
    for (;;) {
        if (check_skip_input__6TMovieFPv(arg0) != 0) {
            break;
        }
        func_803DCDFC__Fv();
        controller_stuff__Fv();
        update_input_frame__16TKeyBoardControlFv();
        decode_frame__6TMovieFPv(M2C_FIELD(arg0, u32 *, 0x20));
        if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
            update_stop__6TMovieFPv(M2C_FIELD(arg0, u32 *, 0x20));
            run_callback__6TMovieFv();
        } else {
            Vec_80144778 eye = lbl_8043F2E8;
            Vec_80144778 at = lbl_8043F2F4;
            Vec_80144778 up = lbl_8043F300;
            set_perspective_projection_from_fov(0x4B, lbl_805DB180, lbl_805DB184, lbl_805DB188);
            set_camera_look_at(&eye, &at, &up);
            update_stop__6TMovieFPv(M2C_FIELD(arg0, u32 *, 0x20));
            if (txt != NULL) {
                txt->m1();
                txt->m2();
            }
            render_tick__Fv();
        }
    }
    queue_destruction__7TObjectFv(arg0);
}

TMovie_80144910 *TMovie__ct(TMovie_80144910 *self, void *parent, s8 *name, s32 a3, s32 a4, s32 a5) {
    u8 *p;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__6TMovie;
    self->name = lbl_805D2CF0;
    self->f44 = a3;
    self->obj1C = 0;
    self->f48 = a4;
    self->obj20 = 0;
    strncpy(self->path, (const char *)name, 0x20);
    p = alloc__23TAdSinglePlyChrSelectGCFPv(8);
    if (p != 0) {
        p = load_rel_module(p, lbl_8043F380);
    }
    self->obj1C = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0xD0);
    if (p != 0) {
        p = initialize_movie_with_soundtrack(p, name, self->f48, (u8)!self->f48, a5);
    }
    self->obj20 = p;
    return self;
}

}

#include "types.h"

extern "C" {

    extern int lbl_805D3D80;
int get_opening_movie_selector(void) {  return lbl_805D3D80; }

    extern unsigned char lbl_805D6560;
void fn_801449E4(void) { lbl_805D6560 = 1; }

    extern int lbl_805D6A5C;
void fn_801449F0(void) { lbl_805D6A5C = 1; }

}
