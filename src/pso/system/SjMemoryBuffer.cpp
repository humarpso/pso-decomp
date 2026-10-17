#include "pso/system/MiddlewareInterruptLock.h"
#include "pso/system/SjMemoryBuffer.h"
extern "C" {
s32 memset(void*, int, int);
extern SjMemoryBuffer sj_memory_buffer_pool[32];
extern s32 sj_memory_buffer_init_count;
extern SjMemoryBufferInterface sj_memory_buffer_interface;
__declspec(section ".rodata") extern const u8 sj_memory_buffer_uuid[16];
void sj_memory_buffer_set_error_callback(SjMemoryBuffer* arg0, SjErrorCallback arg1, void* arg2);

s32 sj_memory_buffer_is_chunk_available(SjMemoryBuffer* arg0, s32 arg1, s32 arg2, s32* arg3) {
    s32 n;
    middleware_interrupt_lock_enter();
    if (arg1 == 0) {
        n = 0;
    } else if (arg1 == 1) {
        n = arg0->readable_bytes < arg2 ? arg0->readable_bytes : arg2;
    } else {
        n = 0;
        if (arg0->error_callback != 0) {
            arg0->error_callback(arg0->error_context, -3);
        }
    }
    *arg3 = n;
    middleware_interrupt_lock_leave();
    { u32 r = (u32)__cntlzw(arg2 - n) >> 5; return r; }
}

void sj_memory_buffer_unget_chunk(SjMemoryBuffer* arg0, s32 arg1, SjChunk* arg2) {
  s32 d;
  s32 len;
  s32 n;
  s32 lim;
  s32 p;
  if ((arg2->size <= 0) || (arg2->data == 0))
  {
    return;
  }
  middleware_interrupt_lock_enter();
  if (arg1 == 0)
  {
    if (arg0->error_callback != 0)
    {
      arg0->error_callback(arg0->error_context, -3);
    }
  }
  else
    if (arg1 == 1)
  {
 dummy_label_788039: ;
    len = arg2->size;
    d = arg0->read_position;
    if (((!arg2) && (!arg2)) && (!arg2))
    {
    }
    d -= len;
    n = d & (((s32) ((-d) & (~d))) >> 31);
    arg0->read_position = n;
    p = arg0->readable_bytes + arg2->size;
    lim = arg0->buffer_size;
    if (lim < p)
    {
      p = lim;
    }
    arg0->readable_bytes = p;
    if (n != ((s32) (arg2->data - arg0->buffer)))
    {
      if (arg0->error_callback != 0)
      {
        arg0->error_callback(arg0->error_context, -3);
      }
    }
  }
  else
  {
    arg2->size = 0;
    arg2->data = 0;
    if (arg0->error_callback != 0)
    {
      arg0->error_callback(arg0->error_context, -3);
    }
  }
  middleware_interrupt_lock_leave();
}

void sj_memory_buffer_put_chunk(SjMemoryBuffer* arg0, u32 arg1, SjChunk* arg2) {
    if (arg2->size <= 0 || arg2->data == 0) {
        return;
    }
    middleware_interrupt_lock_enter();
    if (arg1 > 1) {
        arg2->size = 0;
        arg2->data = 0;
        if (arg0->error_callback != 0) {
            arg0->error_callback(arg0->error_context, -3);
        }
    }
    middleware_interrupt_lock_leave();
}

void sj_memory_buffer_get_chunk(SjMemoryBuffer* arg0, s32 arg1, s32 arg2, SjChunk* arg3) {
    middleware_interrupt_lock_enter();
    if (arg1 == 0) {
        arg3->size = 0;
        arg3->data = 0;
    } else if (arg1 == 1) {
        arg3->size = arg0->readable_bytes < arg2 ? arg0->readable_bytes : arg2;
        arg3->data = arg0->buffer + arg0->read_position;
        arg0->read_position += arg3->size;
        arg0->readable_bytes -= arg3->size;
    } else {
        arg3->size = 0;
        arg3->data = 0;
        if (arg0->error_callback != 0) {
            arg0->error_callback(arg0->error_context, -3);
        }
    }
    middleware_interrupt_lock_leave();
}

#pragma optimize_for_size on

s32 sj_memory_buffer_get_available(SjMemoryBuffer* arg0, s32 arg1) {
    SjErrorCallback temp_r12;

    if (arg1 == 1) {
        return arg0->readable_bytes;
    }
    if (arg1 == 0) {
        return 0;
    }
    temp_r12 = arg0->error_callback;
    if (temp_r12 != NULL) {
        temp_r12(arg0->error_context, -3);
    }
    return 0;
}

void sj_memory_buffer_reset(SjMemoryBuffer* arg0) {
    arg0->readable_bytes = (s32) arg0->buffer_size;
    arg0->read_position = 0;
}

void sj_memory_buffer_set_error_callback(SjMemoryBuffer* arg0, SjErrorCallback arg1, void* arg2) {
    arg0->error_callback = arg1;
    arg0->error_context = arg2;
}

const u8* sj_memory_buffer_get_uuid(SjMemoryBuffer* arg0) {
    return arg0->type_uuid;
}

void sj_memory_buffer_destroy(SjMemoryBuffer* arg0) {
    if (arg0 != NULL) {
        memset(arg0, 0, 0x24);
        arg0->in_use = 0;
    }
}

#pragma push
#pragma optimize_for_size off
SjMemoryBuffer* sj_memory_buffer_create(void* arg0, s32 arg1) {
    s32 i;
    SjMemoryBuffer *s;
    for (i = 0; i < 32; i++) {
        if (((SjMemoryBuffer *)&sj_memory_buffer_pool)[i].in_use == 0) {
            break;
        }
    }
    if (i == 32) {
        return NULL;
    }
    s = &((SjMemoryBuffer *)&sj_memory_buffer_pool)[i];
    s->in_use = 1;
    s->interface = &sj_memory_buffer_interface;
    s->buffer = (u8*)arg0;
    s->buffer_size = arg1;
    s->type_uuid = sj_memory_buffer_uuid;
    s->error_callback = sj_memory_buffer_error_halt;
    s->error_context = s;
    s->readable_bytes = s->buffer_size;
    s->read_position = 0;
    return s;
}
#pragma pop

void sj_memory_buffer_shutdown(void) {
    s32 temp_r0;
    temp_r0 = sj_memory_buffer_init_count - 1;
    sj_memory_buffer_init_count = temp_r0;
    if (temp_r0 == 0) {
        memset((void *) (&sj_memory_buffer_pool), 0, 0x480);
    }
}

void sj_memory_buffer_init(void) {
    if ((s32) sj_memory_buffer_init_count == 0) {
        memset(sj_memory_buffer_pool, 0, 0x480);
    }
    sj_memory_buffer_init_count += 1;
}

void sj_memory_buffer_error_halt(void*, s32) {
    while (1) {
    }
}

SjMemoryBuffer sj_memory_buffer_pool[32];
s32 sj_memory_buffer_init_count;
__declspec(section ".rodata") extern const u8 sj_memory_buffer_uuid[16] = {0xDD, 0x9E, 0xEE, 0x41, 0x16, 0x79, 0x11, 0xD2, 0x93, 0x6C, 0x00, 0x60, 0x08, 0x94, 0x48, 0xBC};
SjMemoryBufferInterface sj_memory_buffer_interface = {
    0,
    0,
    0,
    sj_memory_buffer_destroy,
    sj_memory_buffer_get_uuid,
    sj_memory_buffer_reset,
    sj_memory_buffer_get_chunk,
    sj_memory_buffer_unget_chunk,
    sj_memory_buffer_put_chunk,
    sj_memory_buffer_get_available,
    sj_memory_buffer_is_chunk_available,
    sj_memory_buffer_set_error_callback
};
}
