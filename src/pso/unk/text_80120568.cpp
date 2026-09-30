#include "types.h"
struct Pair_801205F4 { u8 a; s8 b; };

struct Data_801205F4 { u8 pad[0x27]; u8 flags; };

struct Self_801205F4 { u8 pad[0xf0]; void *f0; u8 padf4[0x1a4 - 0xf4]; Pair_801205F4 pairs[3]; u8 pad1aa[0x1dc - 0x1aa]; Data_801205F4 *data; };

struct Ctl_80120568B { char pad[0x18]; };

struct Ctl_80120568 : Ctl_80120568B {
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
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual u32 m64(s32);
};

struct Pl_80120568B { char pad[0x18]; };

struct Pl_80120568 : Pl_80120568B {
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
    virtual s8 m31();
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
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void m56();
    u8 pad[0xF0-0x1C+0x0];
    Ctl_80120568 *ctl;
};

extern "C" {
void apply_model_params__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80015D74(void *, s32, Pair_801205F4 *);
void TObjPlayer__sub_801205F4(Self_801205F4 *self);
void TItemEquipBase__sub_8010A82C(void *);
void clear_equip_flags__10TObjPlayerFPvUi(void *, u32);
void TKeyBoardControl__sub_801AFCF4(void *, s32);
void TObjPlayer__sub_80120568(Pl_80120568 *arg0);
}

extern "C" {

void TObjPlayer__sub_80120568(Pl_80120568 *arg0) {
    if (arg0->ctl->m64(arg0->m31()) == 0) {
        TKeyBoardControl__sub_801AFCF4(arg0->ctl, 0);
    }
    arg0->m56();
    TItemEquipBase__sub_8010A82C(arg0);
    clear_equip_flags__10TObjPlayerFPvUi(arg0, 0x03000000);
}

void TObjPlayer__sub_801205F4(Self_801205F4 *self) {
    s32 i;
    apply_model_params__10TObjPlayerFPv(self);
    if (!(self->data->flags & 8)) {
        for (i = 0; i != 3; i++) {
            TObjPlayer__sub_80015D74(self->f0, i, &self->pairs[i]);
        }
    }
}

}
