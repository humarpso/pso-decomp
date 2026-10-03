#include "types.h"

typedef struct Msg_801D08B0 {
    u8 pad0[2];
    s16 f2;
    s16 f4;
    s16 f6;
    s16 f8;
    s16 fa;
    u8 vec[12];
} Msg_801D08B0;

typedef struct Msg_801D094C {
    u8 pad0[2];
    s16 f2;
    s16 f4;
    s16 f6;
    s16 f8;
    s16 fa;
    u8 vec[12];
} Msg_801D094C;

typedef struct Player_801D094C {
    u8 pad0[0x38];
    u8 vec[12];
    u8 pad44[0x60 - 0x44];
    s32 f60;
} Player_801D094C;

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324();
s32 obj_testFlags30(void *, s32);
s16 obj_getField1c(void *);
s16 get_field_3e4__10TObjPlayerFPv(void *);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C18E0(void *);
void TObjPlayer__sub_801C1978(void *);
void send_idle_return_event__10TObjPlayerFPvPvs(void *arg0, void *arg1, s16 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324();
s32 obj_testFlags30(void *, s32);
s16 obj_getField1c(void *);
s16 get_field_3e4__10TObjPlayerFPv(void *);
void send_6x3E__10TNpcPlayerFi(void *);
void init_6x3E_packet__10TNpcPlayerFPv(void *);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801AFF50(void *);
void TObjPlayer__sub_801AFF80(void *);
void TObjPlayer__sub_801D094C(Player_801D094C *arg0);
}

extern "C" {

void update_position_from_target__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D09F4(void);
void TObjPlayer__sub_801D09F8(void);

void send_idle_return_event__10TObjPlayerFPvPvs(void *arg0, void *arg1, s16 arg2) {
    Msg_801D08B0 m;
    s32 t;
    if ((arg0 == NULL) || (obj_isState2_324() == 0)) {
        t = obj_testFlags30(arg0, 0x100000) != 0 ? 1 : 0;
        TObjPlayer__sub_801C1978(&m);
        m.f2 = obj_getField1c(arg0);
        m.f4 = t;
        m.f6 = arg2;
        m.f8 = get_field_3e4__10TObjPlayerFPv(arg0);
        m.fa = get_stat_by_key_state__10TObjPlayerFPv(arg0);
        VecCopy__FP3VecPC3Vec(m.vec, arg1);
        TObjPlayer__sub_801C18E0(&m);
    }
}
void TObjPlayer__sub_801D094C(Player_801D094C *arg0) {
    Msg_801D094C m;
    s32 t;
    if ((arg0 == NULL) || (obj_isState2_324() == 0)) {
        t = obj_testFlags30(arg0, 0x100000) != 0 ? 1 : 0;
        init_6x3E_packet__10TNpcPlayerFPv(&m);
        m.f2 = obj_getField1c(arg0);
        m.f4 = t;
        m.f6 = arg0->f60;
        TObjPlayer__sub_801AFF50(arg0);
        TObjPlayer__sub_801AFF80(arg0);
        m.f8 = get_field_3e4__10TObjPlayerFPv(arg0);
        m.fa = get_stat_by_key_state__10TObjPlayerFPv(arg0);
        VecCopy__FP3VecPC3Vec(m.vec, arg0->vec);
        send_6x3E__10TNpcPlayerFi(&m);
    }
}

}
