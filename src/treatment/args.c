
#include "ft_printf.h"

const t_get	g_get[] =
{
	{'d', &get_int},
	{'D', &get_int},
	{'i', &get_int},
	{'u', &get_uint},
	{'U', &get_uint},
	{'o', &get_ouint},
	{'O', &get_ouint},
	{'x', &get_xuint},
	{'X', &get_xuint},
	{'c', &get_char},
	{'C', &get_char},
	{'s', &get_string},
	{'S', &get_string},
	{0, NULL}
};

void	get_arg(t_parse *e, va_list *ap)
{
	size_t	i;
	
	i = 0;
	while (g_get[i].spec != 0 && g_get[i].spec != e->spec[0])
		i++;
	g_get[i].f(e, ap);
}
