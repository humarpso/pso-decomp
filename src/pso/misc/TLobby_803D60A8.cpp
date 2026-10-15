#include "types.h"

extern "C" {

void gcrna_set_error_callback(void);
s32 gcrna_error_set_callback();

void gcrna_set_error_callback(void) {
    gcrna_error_set_callback();
}

}
