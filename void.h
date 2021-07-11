#ifndef THE_COOL_VOID_LIB_H
#define THE_COOL_VOID_LIB_H

#include <malloc.h>

#define vinitas(__type, __ptr)          ( __ptr = (__type*)malloc(sizeof(__type)) )
#define  vgetas(__type, __ptr)          ( *( (__type*)__ptr ) )
#define  vsetas(__type, __ptr, __value) ( *( (__type*)__ptr ) = __value )

#define vainitas(__type, __ptr, __size)           ( __ptr = (__type*)malloc(sizeof(__type) * __size) )
#define  vagetas(__type, __ptr, __index)          ( ((__type*)__ptr)[__index] )
#define  vasetas(__type, __ptr, __index, __value) ( ((__type*)__ptr)[__index] = __value )

#define vgetptras(__type, __ptr) ( (__type*)__ptr )

/* ! Осторожно со значениями-указателями ! */
#define  vset(__ptr, __value)           vsetas( typeof(__value), __ptr, __value )
#define vaset(__ptr, __index, __value) vasetas( typeof(__value), __ptr, __index, __value )

/* ! Float working incorrect ! */
#define float double

#endif /*! THE_COOL_VOID_LIB_H */
