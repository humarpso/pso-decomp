#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TBoss6Kakusan__sub_8032263C(void);
int TBoss6Type1__sub_80322AE0(void);
void *__dt__13TBoss6KakusanFv(void *arg0, s16 arg1);
void render__13TBoss6KakusanFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void render__15TAdLdQuestPrtGCFv(void);
void request_destroy__11TBoss4Type2FUi(void *);

int TBoss6Kakusan__sub_8032263C(void) { return 0; }

void render__13TBoss6KakusanFv(void) {  }

extern M2C_UNK __vt__13TBoss6Kakusan[];

void *__dt__13TBoss6KakusanFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TBoss6Kakusan;
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x54)); M2C_FIELD(arg0, M2C_UNK *, 0x54) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TBoss6Type1__sub_80322AE0(void) { return 0; }

}
