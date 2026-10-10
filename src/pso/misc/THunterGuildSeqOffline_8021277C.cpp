#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_8021277C { char pad[0x18]; };
struct VObj_8021277C : Base_8021277C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};

void set_enemy_mode_1__22THunterGuildSeqOfflineFv(void);
void set_enemy_mode_5__22THunterGuildSeqOfflineFv(void);
void set_state_close2__22THunterGuildSeqOfflineFv(void);
int TKeyBoardControl__sub_8000F950(void);
int set_enemy_mode_flag__6TLobbyFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

extern struct VObj_8021277C *THunterGuildSeqOffline__active_instance;

void set_state_close2__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__active_instance != NULL) {
        THunterGuildSeqOffline__active_instance->m7(0xC, 1);
        M2C_FIELD(THunterGuildSeqOffline__active_instance, s32 *, 0x38) = 0;
        set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__active_instance, 5);
    }
}

    extern int evt2_random_enemies_mode;
void set_enemy_mode_5__22THunterGuildSeqOfflineFv(void) { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 5; TKeyBoardControl__sub_8000F950(); }

    extern int evt2_random_enemies_mode;
void set_enemy_mode_1__22THunterGuildSeqOfflineFv(void) { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 1; TKeyBoardControl__sub_8000F950(); }

}
