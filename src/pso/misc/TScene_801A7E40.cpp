#include "types.h"

extern "C" {

    extern unsigned char TScene__data_805D5FD4;
void set_ready__6TSceneFv(void) { TScene__data_805D5FD4 = 1; }

    extern unsigned char TScene__data_805D5FD4;
void reset_counter__6TSceneFv(void) { TScene__data_805D5FD4 = 0; }

}
