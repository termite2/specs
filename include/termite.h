/* Common types and macros used in Termite drivers.  
 * TODO: replace with OS-specific includes. */

#ifndef _TERMITE_H
#define _TERMITE_H

#include <stddef.h>

#define container_of(ptr, type, member) ({                      \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
        (type *)( (char *)__mptr - offsetof(type,member) );})

typedef unsigned char      u8;
typedef char               s8;
typedef unsigned short     u16;
typedef short              s16;
typedef unsigned int       u32;
typedef int                s32;
typedef unsigned long long u64;
typedef long long          s64;

#endif /* _TERMITE_H */
