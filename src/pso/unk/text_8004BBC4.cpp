#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TBoss4DarkFalz__sub_8004B084(void *);
M2C_UNK TBoss4DarkFalz__sub_8004B0F8(void *);
M2C_UNK TBoss4DarkFalz__sub_8004B20C(void *, int);
M2C_UNK update_visible_flag__14TBoss4DarkFalzFPv(void *);
M2C_UNK TBoss4DarkFalz__sub_8004BAC4(void *);
s32 check_demo_mode__10TObjPlayerFv();
s32 query_teammate_state__9TObjEneDDFPv();
void run_task__14TBoss4DarkFalzFv(u8 *arg0);
}

extern "C" {

void TBoss4DarkFalz__vt61(void);
void cleanup_global__14TBoss4DarkFalzFv(void);
s32 create__14TBoss4DarkFalzFi(s32 arg0);
void render__14TBoss4DarkFalzFv(void);
s32 TBoss4DarkFalz__ct(s32, s32, s32);
int TBoss4DarkFalz__sub_8030AD38(void);
int TLobby__sub_8001FE7C(void*, void*);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
int free_global_instance__14TBoss4DarkFalzFv(void);

void render__14TBoss4DarkFalzFv(void) {  }

void run_task__14TBoss4DarkFalzFv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x37C) != 0) && (check_demo_mode__10TObjPlayerFv() != 0)) {
        TBoss4DarkFalz__sub_8004B20C((void *) (arg0), (int) (0));
    }
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        update_visible_flag__14TBoss4DarkFalzFPv((void *) (arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x378) == 0) {
            TBoss4DarkFalz__sub_8004B0F8((void *) (arg0));
        }
        TBoss4DarkFalz__sub_8004B084((void *) (arg0));
        TBoss4DarkFalz__sub_8004BAC4((void *) (arg0));
    }
}

void TBoss4DarkFalz__vt61(void) {  }

    extern int lbl_805D4D58;
void cleanup_global__14TBoss4DarkFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); TBoss4DarkFalz__sub_8030AD38(); TLobby__sub_8001FE7C((void*)(lbl_805D4D58), (void*)1); lbl_805D4D58 = 0; }

extern s32 tl_04;

s32 create__14TBoss4DarkFalzFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3AC);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4DarkFalz__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
