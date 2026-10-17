#include "types.h"
#include "pso/system/main_loop.h"
#include "pso/TObject.h"

struct RecoveredGlobal_802A1154_main_task {
    s32 value;
    u8 remaining[0x30];
};

extern "C" {
s32 delete_all_task_children__9TMainTaskFv(void *);
void fn_802A1154(void);
typedef char RecoveredGlobal_802A1154_main_task_size[sizeof(RecoveredGlobal_802A1154_main_task) == 0x34 ? 1 : -1];
void fn_802A1154(void) {
    delete_all_task_children__9TMainTaskFv((void *) (&(*(RecoveredGlobal_802A1154_main_task *)&main_task).value));
    render_tick();
}

}
