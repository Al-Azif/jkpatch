/* golden */
/* 6/11/2018 */

 // inspired by fail0verflow, of course
 // 5.03

 // ref 0xFFFFFFFF87464000

#define __Xfast_syscall             0x000001C0
#define __copyin                    0x001EA710
#define __copyout                   0x001EA630
#define __printf                    0x00436000
#define __vprintf                   0x00436070
#define __malloc                    0x0010E250
#define __free                      0x0010E460
#define __memcpy                    0x001EA530
#define __memset                    0x00320580
#define __memcmp                    0x00050AC0
#define __kmem_alloc                0x000FCC80
#define __strlen                    0x003B7160
#define __pause                     0x003FB8E0
#define __kthread_add               0x00138360
#define __kthread_exit              0x00138640
#define __sched_prio                0x0031EDC0
#define __sched_add                 0x0031F110
#define __kern_yield                0x003FBC00
#define __fill_regs                 0x00234BA0
#define __set_regs                  0x00234CD0
#define __create_thread             0x001BE1F0
#define __kproc_create              0x00137DF0
#define __kthread_set_affinity      0x00138CC0
#define __kthread_suspend_check     0x00138A60
#define __kproc_kthread_add         0x00138B70
#define __sx_init_flags             0x000F5BB0
#define __sx_xlock                  0x000F5E10
#define __sx_xunlock                0x000F5FD0
#define __mtx_init                  0x00402740
#define __mtx_lock_spin_flags       0x004020C0
#define __mtx_unlock_spin_flags     0x00402280
#define __mtx_lock_sleep            0x00401C90
#define __mtx_unlock_sleep          0x00401F60
#define __fpu_kern_enter            0x001BFF90
#define __fpu_kern_leave            0x001C0090
#define __kern_reboot               0x0010D390
#define __vm_map_lock_read          0x0019F140
#define __vm_map_lookup_entry       0x0019F760
#define __vm_map_unlock_read        0x0019F190
#define __vmspace_free              0x0019EDC0
#define __vm_map_delete             0x001A19D0
#define __vm_map_protect            0x001A3A50
#define __vmspace_acquire_ref       0x0019EF90
#define __vm_map_findspace          0x001A1F60
#define __vm_map_insert             0x001A0280
#define __vm_map_lock               0x0019EFF0
#define __vm_map_unlock             0x0019F060
#define __proc_rwmem                0x0030D150

//net.c
#define __sys_socket                0x00318EA0
#define __sys_bind                  0x003197E0
#define __sys_listen                0x00319A20
#define __sys_accept                0x0031A130
#define __sys_read                  0x00152AB0
#define __sys_write                 0x00152FC0
#define __sys_setsockopt            0x0031B710
#define __sys_close                 0x000C0EB0


#define __disable_console_output    0x019ECEB0
#define __M_TEMP                    0x014B4110
#define __kernel_map                0x01AC60E0
#define __prison0                   0x010986A0
#define __rootvnode                 0x022C1A70
#define __allproc                   0x02382FF8
