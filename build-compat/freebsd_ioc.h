/* Host-build shim: Linux _IOC_* decoders over FreeBSD's <sys/ioccom.h>. */
#if defined(__FreeBSD__) && !defined(__ASSEMBLER__)
#include <sys/ioccom.h>
#ifndef _IOC_DIR
#define _IOC_DIR(x)  ((x) & IOC_DIRMASK)
#define _IOC_TYPE(x) (((x) >> 8) & 0xff)
#define _IOC_NR(x)   ((x) & 0xff)
#define _IOC_SIZE(x) IOCPARM_LEN(x)
#endif
#endif
