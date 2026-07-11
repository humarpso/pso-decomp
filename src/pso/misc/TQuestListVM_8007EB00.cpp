#include "types.h"

extern "C" {

int TQuestListVM__sub_8007EB00(void);
void TQuestListVM__sub_8007EB08(void);

    extern int TQuestListVM__data_805D6200;
int TQuestListVM__sub_8007EB00(void) {  return TQuestListVM__data_805D6200; }

    extern int TQuestListVM__data_805D6200;
void TQuestListVM__sub_8007EB08(void) { TQuestListVM__data_805D6200 = 0; }

}
