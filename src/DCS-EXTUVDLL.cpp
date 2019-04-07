#include <windows.h>
#include <stdio.h> 

#ifdef __cplusplus
extern "C" {							  
#endif  // __cplusplus

#include "lua.h"		  // the includes for the 64 bit LUA libray
#include "lualib.h"
#include "luaconf.h"
#include "lauxlib.h"
#ifdef __cplusplus
}
#endif  // __cplusplus

#define DllExport   __declspec( dllexport )





static int  EndOfApplication(lua_State *L)										  
{
	// do all clean up for your DLL here in
	return(0);
}

/***********************************************************************************

     COMMENT:  This is the 	standardized list of all functions in your DLL. The first
			   entry is the name that LUA understands, the second is the pointer to
			   the DLL function

	 GROUP:	   LUA DLL


	*/


/***********************************************************************************

     COMMENT:  This is the 	DLL entry point. The LUA loader searches for this function
			   to be called. Take special car to the name of the function. In this case
			   LUAext must be the name of the DLL

	 GROUP:	   LUA DLL

	 ENTRY:	   lua_State

	 EXIT:	   int loaded by luaL_register onto the stack

	*/


				 
DllExport int luaopen_LUAext( lua_State *L)
{ 
	luaL_register(L, );	   // register the list of function
	return 1;
} 





