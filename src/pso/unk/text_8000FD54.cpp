#include "types.h"
extern "C" {
typedef void (*SceneFn_8000FD54)(void);
typedef struct SceneEntry_8000FD54 {
    SceneFn_8000FD54 init;
    SceneFn_8000FD54 update;
    SceneFn_8000FD54 exit;
} SceneEntry_8000FD54;
typedef struct SceneState_8000FD54 {
    s32 cur;
    s32 next;
    s32 unk8;
    s32 unkC;
    s32 result;
    s32 prev;
} SceneState_8000FD54;

void shutdown_and_reset_system(void);
void TKeyBoardControl__sub_8000FAE4(void);
extern SceneEntry_8000FD54 lbl_804805E0[];
extern SceneState_8000FD54 lbl_804FE120;
extern s32 lbl_805D53A4;

void main(void) {
    SceneFn_8000FD54 fn;
    SceneFn_8000FD54 update;

    TKeyBoardControl__sub_8000FAE4();
    while (lbl_804FE120.cur != 0) {
        lbl_804FE120.result = 0;
        fn = lbl_804805E0[lbl_804FE120.cur].init;
        if (fn != NULL) {
            fn();
        }
        update = lbl_804805E0[lbl_804FE120.cur].update;
        while (lbl_804FE120.result == 0 && update != NULL) {
            update();
            lbl_805D53A4++;
        }
        fn = lbl_804805E0[lbl_804FE120.cur].exit;
        if (fn != NULL) {
            fn();
        }
        switch (lbl_804FE120.result) {
        case 1:
        case 2:
        case 3:
            lbl_804FE120.prev = lbl_804FE120.cur;
            lbl_804FE120.cur = lbl_804FE120.next;
            break;
        }
    }
    shutdown_and_reset_system();
}
}
