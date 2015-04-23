#include <exception.h>
#include <>
extern jmp_buf *g_env=NULL;

void init_exception(void){
		if(!g_env){
			g_env = calloc(1,sizeof(*g_env));
		}
	} 