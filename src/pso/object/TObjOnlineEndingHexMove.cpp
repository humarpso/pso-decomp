#include "pso/TObjOnlineEndingHexMove.h"

#include "types.h"

extern "C" {

struct Params_802E5EFC { f32 a; f32 b; u32 c; f32 d; };
struct Pkt_802E5EFC { s32 hdr; s32 idx; f32 val; };
struct Self_802E5EFC { u8 pad[0x1c]; s32 timer; };

s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
void TObjOnlineEndingHexLine__sub_802E5CB0(void *);
void send_6x92__14TAdGameStartGCFPv(Pkt_802E5EFC *);
void TAdGameStartGC__sub_802E6368(Pkt_802E5EFC *);
extern Params_802E5EFC TObjOnlineEndingHexLine__data_804E3AA8;
extern u8 lbl_8050E208[];
extern s32 lbl_805D53A0;
extern const f32 lbl_805DE968;
extern const f32 lbl_805DE96C;
extern const f32 lbl_805DE970;
extern const f32 lbl_805DE974;
extern const f32 lbl_805DE978;
extern const f32 lbl_805DE97C;
extern const f32 lbl_805DE984;
extern const f32 lbl_805DE988;
extern const f32 lbl_805DE98C;

void TObjOnlineEndingHexMove::run_task() {
    Self_802E5EFC *self = (Self_802E5EFC *)this;
    Pkt_802E5EFC pkt;
    void *pad;
    f32 v;
    f32 step;
    f32 max;
    f32 min;
    s32 ang;

    if (--self->timer < 0) {
        self->timer = 0;
    }
    if (self->timer == 0) {
        pad = lbl_8050E208 + 0x20;
        if (is_on_current_screen__11TCameraCtrlFPv(pad, 0x30000) != 0) {
            TAdGameStartGC__sub_802E6368(&pkt);
            pkt.idx = lbl_805D53A0 % 4;
            switch (pkt.idx) {
            case 0:
            case 1:
            case 3:
                switch (pkt.idx) {
                case 0:
                    step = lbl_805DE984;
                    max = lbl_805DE970;
                    v = TObjOnlineEndingHexLine__data_804E3AA8.a;
                    min = lbl_805DE96C;
                    break;
                case 1:
                    step = lbl_805DE988;
                    max = lbl_805DE974;
                    v = TObjOnlineEndingHexLine__data_804E3AA8.b;
                    min = lbl_805DE968;
                    break;
                case 3:
                    step = lbl_805DE98C;
                    max = lbl_805DE97C;
                    v = TObjOnlineEndingHexLine__data_804E3AA8.d;
                    min = lbl_805DE978;
                    break;
                }
                if (is_on_current_screen__11TCameraCtrlFPv(pad, 0x10000) != 0) {
                    v += step;
                    if (v > max) {
                        v = max;
                    }
                } else {
                    v -= step;
                    if (v < min) {
                        v = min;
                    }
                }
                pkt.val = v;
                break;
            case 2:
                ang = TObjOnlineEndingHexLine__data_804E3AA8.c;
                if (is_on_current_screen__11TCameraCtrlFPv(pad, 0x10000) != 0) {
                    ang += 0x1999;
                } else {
                    ang -= 0x1999;
                }
                pkt.val = (s32)(u16)ang;
                break;
            }
            send_6x92__14TAdGameStartGCFPv(&pkt);
            self->timer = 0x1E;
        }
    }
    TObjOnlineEndingHexLine__sub_802E5CB0(self);
}

}

TObjOnlineEndingHexMove::~TObjOnlineEndingHexMove() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK;
extern "C" {
void *__nw__7TObjectFUl(int);
void * fn_802E6218(void *arg0);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK create__23TObjOnlineEndingHexLineFPvPv(void *, void *);
void copy_move_params__23TObjOnlineEndingHexMoveFPvPv(void* p, void* q);
extern u32 lbl_804E3AC8[];
extern u32 lbl_804E3AD8[];
extern M2C_UNK __vt__23TObjOnlineEndingHexMove[];
extern u8 lbl_805412B0[];
extern s32 lbl_805D3FA0;
u8 *TObjOnlineEndingHexMove__ct(u8 *arg0, void *arg1);
}

extern "C" {

void copy_move_params__23TObjOnlineEndingHexMoveFPvPv(void* p, void* q);

u8 *TObjOnlineEndingHexMove__ct(u8 *arg0, void *arg1) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TObjOnlineEndingHexMove;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3FA0;
    for (i = 0; i < 4; i++) {
        create__23TObjOnlineEndingHexLineFPvPv(arg1, &lbl_804E3AC8[i]);
    }
    copy_move_params__23TObjOnlineEndingHexMoveFPvPv((void*)(lbl_805412B0), (void*)(lbl_804E3AD8));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1E;
    return arg0;
}

void copy_move_params__23TObjOnlineEndingHexMoveFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

void * fn_802E6218(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjOnlineEndingHexMove__ct((u8 *)(o), (void *)(arg0));
    }
    return o;
}

}
