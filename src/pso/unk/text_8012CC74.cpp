#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct PlB_8012CCCC { char pad[0x18]; };

struct Pl_8012CCCC : PlB_8012CCCC {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual s32 m49(void *, s32, s32, s32);
};

extern "C" {
void draw_status_icons__10TObjPlayerFPvPvPv(void *, void *, void *);
void TObjPlayer__sub_8012CD68(u8 *arg0);
u8 * init_state__10TObjPlayerFPviPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_saber_weapon(u8 *arg0);
void TObjPlayer__sub_8012CCCC(Pl_8012CCCC *arg0);
}

extern "C" {

u8 *create_saber_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_state__10TObjPlayerFPviPv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void TObjPlayer__sub_8012CCCC(Pl_8012CCCC *arg0) {
    if (arg0->m49((u8 *)arg0 + 0x1F8, 0, 0, 1) != 0) {
        arg0->m49((u8 *)arg0 + 0x204, 0, 0, 0);
    } else {
        arg0->m49((u8 *)arg0 + 0x204, 0, 0, 1);
    }
}

void TObjPlayer__sub_8012CD68(u8 *arg0) {
    draw_status_icons__10TObjPlayerFPvPvPv(arg0, arg0 + 0x1F8, arg0 + 0x204);
}

}
