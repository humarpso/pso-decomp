#include "types.h"
#include "pso/misc/TWindowDD.h"

extern "C" {

struct Entry_80246DCC {
    u8 pad0[0x8];
    f32 f8;
    u8 padc[0x10 - 0xc];
    f32 f10;
    u8 pad14[0x20 - 0x14];
    s32 f20;
};

struct Win_80246DCC {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1c[0x60 - 0x1c];
    f32 f60;
    f32 f64;
};

s32 get_shared_text_buffer(void);
s32 get_camera_id__11TCameraCtrlFv(void);
Entry_80246DCC *get_array_entry__13TUnk_804CE018Fi(void *, s32);
void append_padded_number(s32, s32);
void text_builder_append(const char *);
void text_builder_reset(void);
void construct_base__9TWindowDDFPvPvsPv(void *, void *, s32, s32);
void refresh_status_display__9TWindowDDFv(Entry_80246DCC *);
void draw_right_aligned_number(void);
void set_text_entry_string(void *, s32, s32);
s32 get_window_layout_position(s32);
extern char lbl_8044E7BC[];
extern s32 lbl_805D3898;
extern const f32 lbl_805DCB60;
extern char lbl_805DCB64[2];
extern const f32 lbl_805DCB68;
extern const f32 lbl_805DCB6C;

void *dt__22TWindowChallengeResultFPvs(void *arg0, s16 arg1);
void init_subwindow__22TWindowChallengeResultFPv(void* p);
int update_window_entry_list(void*, void*);
void __dl__7TObjectFPv(void *);

extern "C" void fn_80246CE8();
extern "C" u8 lbl_8044E790[];
extern "C" u8 lbl_8044E7A0[];
extern "C" u8 lbl_8044E7B0[];
extern "C" void render_shadows__7TObjectFv();
extern void *lbl_804CE1E8[44];
void *lbl_804CE1E8[44] = {
    (void *)0x6, (void *)0x1, (void *)0x3, (void *)0x0,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x43690000, (void *)0x0,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)0x0,
    (void *)0x3, (void *)0x0, (void *)0x41a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x43690000, (void *)0x41a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)0x0, (void *)0x3, (void *)0x0,
    (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x4, (void *)0x43690000, (void *)0x42200000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)0x0,
};
void *lbl_804CE298[5] = {
    (void *)0x43e90000, (void *)0x42b00000, (void *)0x4743b400, (void *)&lbl_804CE1E8,
    (void *)0x23,
};
void *lbl_804CE2AC[3] = {
    (void *)&lbl_8044E790, (void *)&lbl_8044E7A0, (void *)&lbl_8044E7B0,
};
void *lbl_804CE2B8[6] = {
    (void *)0x0, (void *)0x0, (void *)&dt__22TWindowChallengeResultFPvs, (void *)&init_subwindow__22TWindowChallengeResultFPv,
    (void *)&fn_80246CE8, (void *)&render_shadows__7TObjectFv,
};
#define lbl_804CE2B8 ((s32 *)lbl_804CE2B8)

void init_subwindow__22TWindowChallengeResultFPv(void* p) { ((TWindowDD *)p)->initialize_subwindow(); update_window_entry_list(p, (char*)p + 0x24); }

void *dt__22TWindowChallengeResultFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CE2B8;
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Win_80246DCC *TWindowChallengeResult__ct(Win_80246DCC *self, s32 arg1, s32 arg2, s32 arg3) {
    s32 i;
    Entry_80246DCC *e;
    s32 m;

    construct_base__9TWindowDDFPvPvsPv(self, lbl_804CE298, 4, get_window_layout_position(0x3F));
    self->vt = lbl_804CE2B8;
    self->f0 = lbl_805D3898;
    for (i = 0; i < 3; i++) {
        e = get_array_entry__13TUnk_804CE018Fi(self, i * 2);
        set_text_entry_string(e, (s32) lbl_804CE2AC[i], 0);
        refresh_status_display__9TWindowDDFv(e);
        e->f8 = lbl_805DCB60 - e->f10;
    }
    set_text_entry_string(get_array_entry__13TUnk_804CE018Fi(self, 1), arg1, 0x20);
    e = get_array_entry__13TUnk_804CE018Fi(self, 3);
    text_builder_reset();
    m = arg2 / 3600;
    arg2 = arg2 % 3600;
    if (m > 99) {
        text_builder_append(lbl_8044E7BC);
    } else {
        append_padded_number(m, 2);
        text_builder_append(lbl_805DCB64);
        m = arg2 / 60;
        arg2 = arg2 % 60;
        append_padded_number(m, 2);
        text_builder_append(lbl_805DCB64);
        append_padded_number(arg2, 2);
    }
    set_text_entry_string(e, get_shared_text_buffer(), 0x20);
    e = get_array_entry__13TUnk_804CE018Fi(self, 5);
    e->f20 = arg3;
    draw_right_aligned_number();
    e->f8 = lbl_805DCB60 + e->f10;
    if (get_camera_id__11TCameraCtrlFv() == 4) {
        self->f60 = lbl_805DCB68;
        self->f64 = lbl_805DCB68;
    } else {
        self->f60 = lbl_805DCB6C;
        self->f64 = lbl_805DCB6C;
    }
    return self;
}

}
