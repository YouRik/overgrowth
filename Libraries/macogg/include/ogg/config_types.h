#ifndef __CONFIG_TYPES_H__
#define __CONFIG_TYPES_H__

#if PLATFORM_UNIX
#include <stdint.h>
#endif

/* these are filled in by configure */
typedef int16_t ogg_int16_t;
typedef int32_t ogg_int32_t;
typedef uint32_t ogg_uint32_t;
typedef int64_t ogg_int64_t;

#endif
