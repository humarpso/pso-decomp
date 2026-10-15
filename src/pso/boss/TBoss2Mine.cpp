#include "types.h"

extern "C" {

void *TBoss2Mine__ct(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4);
void TBoss2Mine__sub_80038D84(void);
int TBoss2Mine__sub_80038D88(void* p);
void TBoss2Mine__vt42(void);
void TBoss2Mine__vt43(void);
void TBoss2Mine__vt44(void);
void TBoss2Mine__vt45(void);
void TBoss2Mine__vt46(void);
void TBoss2Mine__vt47(void);
void TBoss2Mine__vt48(void);
void TBoss2Mine__vt49(void);
void TBoss2Mine__vt50(void);
s32 init__10TBoss2MineFPvi(void *, s32);
s32 TObjEneDD__ct(void *, s32);
int TObjPlayer__sub_800F0928(void*);
s32 get_instance__13TBoss2DeRolLeFv(void);
s32 init_common_from__9TObjEneDDFPvPv(void *, s32);

extern void *__vt__10TBoss2Mine[];
extern s32 TBoss2Mine__name;

void *TBoss2Mine__ct(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4) {
    s32 temp_r3;

    TObjEneDD__ct(arg0, arg1);
    *(void **)((s8 *)arg0 + 0x18) = (void *) __vt__10TBoss2Mine;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss2Mine__name;
    temp_r3 = get_instance__13TBoss2DeRolLeFv();
    if (temp_r3 != 0) {
        init_common_from__9TObjEneDDFPvPv(arg0, temp_r3);
    }
    *(s16 *)((s8 *)arg0 + 0x1C) = arg2;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg3;
    init__10TBoss2MineFPvi(arg0, arg4);
    return arg0;
}

void TBoss2Mine__sub_80038D84(void) {  }
int TBoss2Mine__sub_80038D88(void* p) { return TObjPlayer__sub_800F0928(p); }
void TBoss2Mine__vt42(void) {  }
void TBoss2Mine__vt43(void) {  }
void TBoss2Mine__vt44(void) {  }
void TBoss2Mine__vt45(void) {  }
void TBoss2Mine__vt46(void) {  }
void TBoss2Mine__vt47(void) {  }
void TBoss2Mine__vt48(void) {  }
void TBoss2Mine__vt49(void) {  }
void TBoss2Mine__vt50(void) {  }

}
