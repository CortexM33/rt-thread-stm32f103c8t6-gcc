/* RT-Thread config file */

#ifndef __RTTHREAD_CFG_H__
#define __RTTHREAD_CFG_H__

#define RT_USING_LIBC

// <<< Use Configuration Wizard in Context Menu >>>

// Basic Configuration
#define RT_THREAD_PRIORITY_MAX  32

// Default: 1000   (1ms)
#define RT_TICK_PER_SECOND  1000
// Alignment size for CPU architecture data access
#define RT_ALIGN_SIZE   4
// the max length of object name<2-16>
#define RT_NAME_MAX     8
// Using RT-Thread components initialization
#define RT_USING_COMPONENTS_INIT

#define RT_USING_USER_MAIN

// the stack size of main thread <1-4086>
#define RT_MAIN_THREAD_STACK_SIZE     512


// Debug Configuration
// enable kernel debug configuration
//#define RT_DEBUG

// enable components initialization debug configuration<0-1>
#define RT_DEBUG_INIT 0
// thread stack over flow detect, Diable Thread stack over flow detect
//#define RT_USING_OVERFLOW_CHECK

// Hook Configuration
//#define RT_USING_HOOK
//#define RT_USING_IDLE_HOOK

// Software timers Configuration
//  Enables user timers
#define RT_USING_TIMER_SOFT         0
#if RT_USING_TIMER_SOFT == 0
    #undef RT_USING_TIMER_SOFT
#endif
// The priority level of timer thread <0-31>
#define RT_TIMER_THREAD_PRIO        4
// The stack size of timer thread <0-8192>
// Default: 512
#define RT_TIMER_THREAD_STACK_SIZE  512

// IPC(Inter-process communication) Configuration
#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE

// Memory Management Configuration
//#define RT_USING_MEMPOOL

// Dynamic Heap Management(Algorithm: small memory )
#define RT_USING_HEAP
#define RT_USING_SMALL_MEM

//#define RT_USING_MEMHEAP
//#define RT_MEMHEAP_FAST_MODE
#define RT_USING_SMALL_MEM_AS_HEAP

//#define RT_USING_TINY_SIZE


// Console Configuration

#define RT_USING_CONSOLE

//  the buffer size of console <1-1024>
//  the buffer size of console
//  Default: 128  (128Byte)
#define RT_CONSOLEBUF_SIZE  128

// FinSH Configuration
//  include finsh config
//  Select this choice if you using FinSH 
//#include "finsh_config.h"


// Device Configuration
//#define RT_USING_DEVICE


#endif