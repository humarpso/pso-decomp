#include "types.h"
extern "C" {
s32 DVDChangeDir(const char *dir);
s32 fn_803DEE48(const char *dir);
}

extern "C" {

#pragma push
#pragma scheduling off
s32 fn_803DEE48(const char *dir) {
    DVDChangeDir(dir);
    return 0;
}
#pragma pop

}
