# deflibft

> Esto realmente no lo publicare solo es la primera pruueba para poder trabajar las cosas de 42 desde mi puta casa. -Eloi Antoni Pascual Perez-Casaux, dias antes de cambiar de opinion

Basicamente sera un libft al que le ire anadiendo mas cositas para que sea mas util.

___

## Ejercicios grandes

- get_next_line: Lee la siguiente linea de un fd
- ft_printf: Imprime string y cualquier tipo de dato habitual.

## Comparadores de chars (devuelven booleanos)

- ft_isalnum: Comprueba alfanumericos
- ft_isalpha: Comprueba alfabeticos
- ft_isascii: Comprueba que sea ascii y no utf>8
- ft_isdigit: Comprueba que sea numero
- ft_is_negative: Comprueba que sea negativo (trata como long)
- ft_is_print: Comprueba que es imprimible

## Convertidores: Convierten un tipo de dato en otro tipo de dato

- ft_atoi: Convierte string a int
- ft_itoa: Convierte int a string

## Listas: Define y usa nuevo tipo de dato por struct

- ft_lstnew: Crea una lista
- ft_lstadd_back: Añade un nodo al final de la lista
- ft_lstadd_front: Añade un nodo a delante de la lista
- ft_lstiter: Itera por la lista
- ft_lstlast: 
- ft_lstmap: 
- ft_lstsize: Mide tamaño de la lista
- ft_lstdelone: Elimina un elemento de una lista
- ft_lstclear: Vacia toda la lista

## Memoria

- ft_calloc: Reserva espacio en memoria inicializado en 0
- ft_memset: cambia un numero de espacios en memoria
- ft_bzero: Cambia espacio en memoria a 0
- ft_memcmp: Compara espacios en memoria
- ft_memchr: 
- ft_memcpy:
- ft_memmove:

## File descriptors

- ft_putchar_fd: Mete char a fd
- ft_putendl_fd: Mete final de linea a fd
- ft_putnbr_fd: Mete un numero a un fd
- ft_putstr_fd: Mete un string a un fd

## Strings

- ft_tolower: Cambia string a minusculas
- ft_toupper: Cambia string a mayúsculas
- ft_Capitalize: Cambia a primera mayus, resto minus
> Faltan algunas

## Arrays

- ft_range: Crea un malloc array de un rango entre dos intis.
- ft_count_if: Cuenta cuantos valores siguen esta función comparadora.
- ft_foreach: Pasa una función que cambia los valores del array.
