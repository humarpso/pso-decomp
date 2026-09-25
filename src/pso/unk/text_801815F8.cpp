#include "types.h"
typedef s32 M2C_UNK;
extern "C" {
M2C_UNK destroy_buffer_pair(void *, M2C_UNK);
extern void *lbl_8050DC08[];
void fn_80181750(void);
}

extern "C" {

void fn_80181750(void) {
    s32 i;
    for (i = 4; i >= 0; i--) {
        if (lbl_8050DC08[i] != 0) {
            destroy_buffer_pair(lbl_8050DC08[i], 1);
            lbl_8050DC08[i] = 0;
        }
    }
}

}
