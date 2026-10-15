#include "types.h"

extern "C" {

void clear_if_current__26TWindowSubInformationBoardFUi(u32 arg0);

extern u32 information_board_response_buffer;

void clear_if_current__26TWindowSubInformationBoardFUi(u32 arg0) {
    if ((u32) information_board_response_buffer == arg0) {
        information_board_response_buffer = 0U;
    }
}

}
