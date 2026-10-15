#include "types.h"
#include "pso/misc/THunterGuildSeqOffline.h"

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

int TKeyBoardControl__sub_8000F950(void);
int set_enemy_mode_flag__6TLobbyFv(void);
s32 set_field_20__12TQuestListVMFl(void *, s32);

extern struct VObj_8021277C *THunterGuildSeqOffline__active_instance;

void THunterGuildSeqOffline::set_state_close2() {
    if (THunterGuildSeqOffline__active_instance != NULL) {
        THunterGuildSeqOffline__active_instance->m7(0xC, 1);
        *(s32 *)((s8 *)THunterGuildSeqOffline__active_instance + 0x38) = 0;
        set_field_20__12TQuestListVMFl(THunterGuildSeqOffline__active_instance, 5);
    }
}

    extern int evt2_random_enemies_mode;
void THunterGuildSeqOffline::set_enemy_mode_5() { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 5; TKeyBoardControl__sub_8000F950(); }

    extern int evt2_random_enemies_mode;
void THunterGuildSeqOffline::set_enemy_mode_1() { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 1; TKeyBoardControl__sub_8000F950(); }

}
