#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_80213E64_80213E38 { char pad[0x18]; };
struct VObj_80213E64_80213E38 : Base_80213E64_80213E38 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};

void THunterGuildSeqOffline__sub_80213E64(void);
void set_random_enemies_mode(void);
int TKeyBoardControl__sub_8000F950(void);
int set_enemy_mode_flag__6TLobbyFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

    extern int evt2_random_enemies_mode;
void set_random_enemies_mode(void) { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 2; TKeyBoardControl__sub_8000F950(); }

extern struct VObj_80213E64_80213E38 *lbl_805D61B8;

void THunterGuildSeqOffline__sub_80213E64(void) {
    if (lbl_805D61B8 != NULL) {
        lbl_805D61B8->m7(6, 1);
        set_field_20__12TQuestListVMFPvi(lbl_805D61B8, 0xC);
        M2C_FIELD(lbl_805D61B8, s32 *, 0x34) = 2;
    }
}

}
