/* golden */
/* 1/2/2018 */

// inspired by fail0verflow, of course
// 5.03

// ref 0xFFFFFFFF87464000

#define __Xfast_syscall             0x000001C0
#define __copyin                    0x001EA710
#define __copyout                   0x001EA630
#define __printf                    0x00436000
#define __malloc                    0x0010E250
#define __free                      0x0010E460
#define __memcpy                    0x001EA530
#define __memset                    0x00320580
#define __memcmp                    0x00050AC0
#define __kmem_alloc                0x000FCC80
#define __strlen                    0x003B7160

#define __disable_console_output    0x019ECEB0
#define __M_TEMP                    0x014B4110
#define __kernel_map                0x01AC60E0
#define __prison0                   0x010986A0
#define __rootvnode                 0x022C1A70
