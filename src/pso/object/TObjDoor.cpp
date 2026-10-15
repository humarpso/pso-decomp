#include "types.h"
#include "pso/object/TObjDoor.h"

extern "C" {

extern s32 TObjDoor__data_805D5BC8;

void TObjDoor::reset_instance() {
    TObjDoor__data_805D5BC8 = 0;
}

}
