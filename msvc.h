#ifndef MSVC_H
#define MSVC_H
// int __cdecl __mingw_vsnprintf(
//      char *buffer,
//      size_t count,
//      const char *format,
//      va_list argptr
// );

int __cdecl __ms_vsnprintf(
     char *buffer,
     size_t count,
     const char *format,
     va_list argptr
);

// int __cdecl __mingw_vfprintf(
//      FILE *stream,
//      const char *format,
//      va_list argptr
// );

// int __cdecl __mingw_vsprintf (char * s, const char * format, va_list arg )
// {
// 	return vsprintf (s, format, arg );
// };

// struct timezone
// {
//     int  tz_minuteswest; /* minutes W of Greenwich */
//    int  tz_dsttime;     /* type of dst correction */
//};

// struct timeval {
//    long tv_sec;
//    long tv_usec;
//};
 
// int __cdecl gettimeofday(
//      struct timeval  *tv,
//      struct timezone *tz
// );

// int __cdecl usleep(
//      unsigned int useconds
// )

double __cdecl __strtod(
     const char *nptr,
     char **endptr
);

double __cdecl trunc(
     double n
);

// int __cdecl __mingw_vsscanf(
//      const char *s,
//      const char *fmt,
//      va_list ap
// );

unsigned __int64 __cdecl udivmodsi4(
     unsigned __int64 num,
     unsigned __int64 den,
     int modwanted
);

__int64 __cdecl __divdi3(
     __int64 a,
     __int64 b
);

__int64 __cdecl __moddi3(
     __int64 a,
     __int64 b
);

unsigned __int64 __cdecl __udivdi3(
     unsigned __int64 a,
     unsigned __int64 b
);

unsigned __int64 __cdecl __umoddi3(
     unsigned __int64 a,
     unsigned __int64 b
);
#endif
