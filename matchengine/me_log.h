/*
 * Description: 
 *     History: yang@haipo.me, 2017/04/01, create
 */

# ifndef _ME_LOG_H_
# define _ME_LOG_H_

# include "me_config.h"

int init_oper_log(void);
int append_oper_log(const char *type, json_t *params);

# endif
