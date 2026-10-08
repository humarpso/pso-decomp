#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VB_8015B06C { u8 pad[0x18]; };

struct VO_8015B06C : VB_8015B06C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(void *);
};

extern "C" {
s32 TOChatSensorFolder__ct(int, int);
u32 __nw__7TObjectFUl(int);
extern u32 lbl_805D58D0;
extern s32 tl_05;
u32 TOChatSensor__create(s32 arg0);
M2C_UNK set_trigger_text__12TOChatSensorFPvPv(void *, s32);
M2C_UNK init_params__12TOChatSensorFPv(void *);
M2C_UNK TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__12TOChatSensor[];
extern s32 lbl_805D2ED8;
extern u32 lbl_805D58D4;
u32 TOChatSensor__ct(int arg0, void *arg1, void *arg2);
M2C_UNK handle_chat_message__12TOChatSensorFPvPv(void *, s32);
extern u32 lbl_805D58D0;
void dispatch_chat_message_to_children__12TOChatSensorFi(s32 arg0);
}

extern "C" {

void *__dt__12TOChatSensorFv(void *arg0, s16 arg1);
void destroy_global__12TOChatSensorFv(void);
void free_nodes_with_id__6TLobbyFUi(void*);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__12TOChatSensor[];

void *__dt__12TOChatSensorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOChatSensor;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D58D4;

u32 TOChatSensor__ct(int arg0, void *arg1, void *arg2) {
    s32 n;
    s32 *t;
    TPhotonMagicSquare__sub_801A2640((void *) arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOChatSensor;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D2ED8;
    ((VO_8015B06C *) arg0)->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    init_params__12TOChatSensorFPv((void *) arg0);
    n = M2C_FIELD(arg0, s32 *, 0xCC);
    if (n > 0) {
        t = (s32 *) M2C_FIELD(lbl_805D58D4, s32 *, 4);
        t += n;
        set_trigger_text__12TOChatSensorFPvPv((void *) arg0, t[-1]);
    }
    return arg0;
}

void dispatch_chat_message_to_children__12TOChatSensorFi(s32 arg0) {
    void *var_r31;
    if (lbl_805D58D0 != 0U) {
        var_r31 = M2C_FIELD(lbl_805D58D0, void **, 0x14);
        while (var_r31 != NULL) {
            handle_chat_message__12TOChatSensorFPvPv(var_r31, arg0);
            var_r31 = M2C_FIELD(var_r31, void **, 0xC);
        }
    }
}

u32 TOChatSensor__create(s32 arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 var_r0;
    if ((u32) lbl_805D58D0 == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x1C));
        if (temp_r3 != 0U) {
            TOChatSensorFolder__ct((int) (temp_r3), (int) (tl_05));
        }
    }
    if ((u32) lbl_805D58D0 != 0U) {
        temp_r3_2 = __nw__7TObjectFUl((int) (0xD0));
        var_r0 = temp_r3_2;
        if (var_r0 != 0U) {
            var_r0 = TOChatSensor__ct((int)((int) (temp_r3_2)), (void *)((void *) (lbl_805D58D0)), (void *)((void *) (arg0)));
        }
        return var_r0;
    }
    return 0U;
}

void destroy_global__12TOChatSensorFv(void) {
    if ((u32) lbl_805D58D4 != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)lbl_805D58D4);
        lbl_805D58D4 = 0U;
    }
}

}
