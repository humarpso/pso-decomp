#include "types.h"
#include "pso/misc/TLobby.h"

struct Chip_802A60CC {
    u8 pad0[0x18];
    s32 f18, f1c, f20;
    u8 pad24[0x38 - 0x24];
};

struct O_802A60CC {
    u8 pad0[0x54];
    s32 f54;
    u8 pad58[0xC];
    s32 f64;
    u8 pad68[8];
    Chip_802A60CC chips[3];
    u8 pad_[0x234 - 0x70 - 3 * 0x38];
    u8 f234[0xC];
    s32 f240;
    s32 f244;
};

extern "C" {
void rotate_matrix_yxz(s32, s32, s32, s32);
void rotate_matrix_y(s32, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void draw_ginja_object(s32);
void TObjSuisoChip__vt10(O_802A60CC *arg0);
}

extern "C" {

void TObjSuisoChip__vt6(void);
void TObjSuisoChip__vt8(void* p);
s32 TObjChip__vt6();
int TObjChip__vt8(void*, void*);
int free_buffer__15TWindowSnapShotFPv(void*);
s32 alloc_buffer__15TWindowSnapShotFPv(void *);
s32 fn_802A5C7C(void *);
s32 fn_802A5CB8(void *);
s32 fn_802A5CC4(void *, s32);
void fn_802A6070(void* p, s32 v);
void fn_802A6078(void* p, s32 v);
s32 get_buffer_size__15TWindowSnapShotFPv(void* p);
int get_width__15TWindowSnapShotFv(void);
s32 init__15TWindowSnapShotFPvi();
s32 open_stream__15TWindowSnapShotFPvi(void *, s32);
int reset__15TWindowSnapShotFv(void*);
void set_mode__15TWindowSnapShotFPvi(void* p, s32 v);

int TLobby::get_max_players() { return 8; }

void TObjSuisoChip__vt6(void) {
    TObjChip__vt6();
}

void TObjSuisoChip__vt8(void* p) { TObjChip__vt8(p, (char*)p + 0x234); }
void TObjSuisoChip__vt10(O_802A60CC *arg0) {
    Chip_802A60CC *p;
    s32 i;
    if (arg0->f244 != 1) {
        p = arg0->chips;
        push_matrix();
        post_translate_matrix(arg0->f234);
        rotate_matrix_y(0, arg0->f240);
        for (i = 0; i < arg0->f54; i++, p++) {
            push_matrix();
            post_translate_matrix(p);
            rotate_matrix_yxz(0, p->f18, p->f1c, p->f20);
            draw_ginja_object(arg0->f64);
            pop_matrix();
        }
        pop_matrix();
    }
}

}
