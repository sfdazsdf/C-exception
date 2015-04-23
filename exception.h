#include <setjmp.h>

#define try if(setjmp(g_env)==0){
#define catch }else{
#define endcatch	}
#define throw longjmp(g_env,1);

/*initialize the exception*/
void init_exception(void);
 