#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800F4758_lbl_8050110C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct Info_800F4700 { u8 pad[0x18]; s32 frame; };

struct Obj_800F4700 { u8 pad[0x38]; u8 pos[0x3c8 - 0x38]; s32 kind; };

struct Base_800F4598 { u8 pad[0x18]; };

struct Obj_800F4598 : Base_800F4598 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void v5(s32);
    virtual void v6(s32);
    virtual void v7(s32);
    virtual void v8(s32);
    virtual void v9(s32);
    virtual void v10(s32);
    virtual void v11(s32);
    virtual void v12(s32);
    virtual void v13(s32);
    virtual void v14(s32);
    virtual void v15(s32);
    virtual void v16(s32);
    virtual void v17(s32);
    virtual void v18(s32);
    virtual void v19(s32);
    virtual void v20(s32);
    virtual void v21(s32);
    virtual void v22(s32);
    virtual void v23(s32);
    virtual void v24(s32);
    virtual void v25(s32);
    virtual void v26(s32);
    virtual void v27(s32);
    virtual void v28(s32);
    virtual void v29(s32);
    virtual void v30(s32);
    virtual void v31(s32);
    virtual void v32(s32);
    virtual void v33(s32);
    virtual void v34(s32);
    virtual void v35(s32);
    virtual void v36(s32);
    virtual void v37(s32);
    virtual void v38(s32);
    virtual void v39(s32);
    virtual void v40(s32);
    virtual void v41(s32);
    virtual void v42(s32);
    virtual void v43(s32);
    virtual void v44(s32);
    virtual void v45(s32);
    virtual void v46(s32);
    virtual void v47(s32);
    virtual void v48(s32);
    virtual void v49(s32);
    virtual void v50(s32);
    virtual void v51(s32);
    virtual void v52(s32);
    virtual void v53(s32);
    virtual void v54(s32);
    virtual void v55(s32);
    virtual void v56(s32);
    virtual void v57(s32);
    virtual void v58(s32);
    virtual void v59(s32);
    virtual void v60(s32);
    virtual void v61(s32);
    virtual void v62(s32);
    virtual void v63(s32);
    virtual void v64(s32);
    virtual void v65(s32);
    virtual void v66(s32);
    virtual void v67(s32);
    virtual void v68(s32);
    virtual void v69(s32);
    virtual void v70(s32);
    virtual void v71(s32);
    virtual void v72(s32);
    virtual void v73(s32);
    virtual void v74(s32);
    virtual void v75(s32);
    virtual void v76(s32);
    virtual void v77(s32);
    virtual void v78(s32);
    virtual void v79(s32);
    virtual void v80(s32);
    virtual void v81(s32);
    virtual void v82(s32);
    virtual void v83(s32);
    virtual void v84(s32);
    virtual void v85(s32);
    virtual void v86(s32);
    virtual void v87(s32);
    virtual void v88(s32);
    virtual void v89(s32);
    virtual void v90(s32);
    virtual void v91(s32);
    virtual void v92(s32);
    virtual void v93(s32);
    virtual void v94(s32);
    virtual void v95(s32);
    virtual void v96(s32);
    virtual void v97(s32);
    virtual void v98();
    virtual void v99(s32);
    virtual void v100(s32);
    virtual void v101(s32);
    virtual void v102(s32);
    virtual void v103(s32);
    virtual void v104(s32);
    virtual void v105(s32);
    virtual void v106(s32);
    virtual void v107(s32);
    virtual void v108(s32);
    virtual void v109(s32);
    virtual void v110(s32);
    virtual void v111(s32);
    u8 pad1c[0x3C0 - 0x1C];
    s32 f3C0;
};

extern "C" {
s32 initialize_enemy_state__9TObjEneDDFPv(void *, int);
s32 TObjEneMe3Stelth__sub_800F47D4(void *);
extern RecoveredGlobal_800F4758_lbl_8050110C lbl_8050110C;
extern u8 *TObjEneMe3Stelth__data_805D5300;
void TObjEneMe3Stelth__sub_800F4758(u8 *arg0);
s32 clamp_frame_index__9TObjEneDDFi(s32);
s32 create__9TTecRestaFPvPvPv(void *, void *, int);
extern Info_800F4700 *TObjEneMe3Stelth__data_80501104[];
void TObjEneMe3Stelth__sub_800F4700(Obj_800F4700 *self);
void TObjEneMe3Stelth__sub_800F42B8(void *, s32);
void TObjEneMe3Stelth__sub_800F3FE4(void *, s32);
void TObjEneMe3Stelth__sub_800F40C8(void *, s32);
void TObjEneMe3Stelth__sub_800F3E40(void *, s32);
void TObjEneMe3Stelth__sub_800F3BC8(void *, s32);
void TObjEneMe3Stelth__sub_800F39E4(void *, s32);
void TObjEneMe3Stelth__sub_800F348C(void *, s32);
void TObjEneMe3Stelth__sub_800F3214(void *, s32);
void TObjEneMe3Stelth__sub_800F2E74(void *, s32);
void handle_message__16TObjEneMe3StelthFPvi(void *, s32);
void action__16TObjEneMe3StelthFPvi(void *, s32);
void TObjEneMe3Stelth__sub_800F2C8C(void *, s32);
void TObjEneMe3Stelth__sub_800F290C(void *, s32);
void TObjEneMe3Stelth__sub_800F26A4(void *, s32);
void TObjEneMe3Stelth__sub_800F2270(void *, s32);
void TObjEneMe3Stelth__sub_800F1098(void *, s32);
void exec__16TObjEneMe3StelthFPvi(void *, s32);
void TObjEneMe3Stelth__sub_800F1440(void *, s32);
void TObjEneMe3Stelth__sub_800F4598(Obj_800F4598 *self, s32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_800F4758_lbl_8050110C_size[sizeof(RecoveredGlobal_800F4758_lbl_8050110C) == 0x14 ? 1 : -1];

void TObjEneMe3Stelth__sub_800F4598(Obj_800F4598 *self, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        self->v111(arg2);
        break;
    case 1:
        TObjEneMe3Stelth__sub_800F42B8(self, arg2);
        break;
    case 3:
        TObjEneMe3Stelth__sub_800F3FE4(self, arg2);
        break;
    case 2:
        TObjEneMe3Stelth__sub_800F40C8(self, arg2);
        break;
    case 4:
        TObjEneMe3Stelth__sub_800F3E40(self, arg2);
        break;
    case 5:
        TObjEneMe3Stelth__sub_800F3BC8(self, arg2);
        break;
    case 6:
        TObjEneMe3Stelth__sub_800F39E4(self, arg2);
        break;
    case 7:
        TObjEneMe3Stelth__sub_800F348C(self, arg2);
        break;
    case 8:
        TObjEneMe3Stelth__sub_800F3214(self, arg2);
        break;
    case 9:
        TObjEneMe3Stelth__sub_800F2E74(self, arg2);
        break;
    case 13:
        handle_message__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 10:
        action__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 11:
        TObjEneMe3Stelth__sub_800F2C8C(self, arg2);
        break;
    case 14:
        TObjEneMe3Stelth__sub_800F290C(self, arg2);
        break;
    case 15:
        TObjEneMe3Stelth__sub_800F26A4(self, arg2);
        break;
    case 12:
        TObjEneMe3Stelth__sub_800F2270(self, arg2);
        break;
    case 16:
        TObjEneMe3Stelth__sub_800F1098(self, arg2);
        break;
    case 17:
        exec__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 18:
        TObjEneMe3Stelth__sub_800F1440(self, arg2);
        break;
    }
    if (self->f3C0 != 1 || (arg1 != 1 && arg1 != 2)) {
        self->v98();
    }
}

void TObjEneMe3Stelth__sub_800F4700(Obj_800F4700 *self) {
    s32 f = clamp_frame_index__9TObjEneDDFi(TObjEneMe3Stelth__data_80501104[self->kind]->frame);
    create__9TTecRestaFPvPvPv(self, self->pos, f);
}

void TObjEneMe3Stelth__sub_800F4758(u8 *arg0) {
    if (TObjEneMe3Stelth__sub_800F47D4((void *) (arg0)) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &lbl_8050110C.value;
        initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x3F));
        M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(TObjEneMe3Stelth__data_805D5300, u8 **, 0x42C), M2C_UNK **, 0xC);
    initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x3E));
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
}

}
