# Laboratorio 3
## Autores
- Josue Valenzuela

## Ejercicio 1
```c
probe timer.profile {
	printf("Proceso: %s\n", execname())
	printf("ID del proceso: %d\n", pid())
}
```

### Ejecucion
```bash
$ sudo stap profiler.stp
```

![stap-profiler](./images/stap-profiler.png)

- ¿Qué puede ver en el output cuando realiza estas acciones?

    Muestra el nombre y el ID del proceso que se esta ejecutando.

- ¿Para qué sirve SystemTap?

    Es una herramienta que incluye una interfaz de comandos y un lenguage de *scripting* para la instrumentacion dinamica de sistemas operativos basados en el kernel de `linux`

- ¿Qué es una probe?

    Son *scripts* exploratorios, que definen los puntos que se van a analizar on systemtap. Estos asocian eventos abstractos a los bloques de declaracion.

- ¿Cómo funciona SystemTap?

    [Articulo redhat](https://access.redhat.com/documentation/en-us/red_hat_enterprise_linux/5/html/systemtap_beginners_guide/understanding-how-systemtap-works)

- ¿Qué es hacer profiling y qué tipo de profiling se hace en este ejercicio?

    *Profiling* es el analisis dinamico de un programa basado en distintas mediciones como puede ser consumo de memoria, tiempo de ejecucion *etc*.

    Desde el punto de vista de la salida del profiler, es un profiling *flat*, tambien funciona como un profiler basado en eventos.

## Ejercicio 2

- ¿Cuál es la diferencia en C entre un método que no recibe parámetros y uno que recibe void?

    Cuando una funcion esta definida como `func()` no tienen parametros, ni prototipo. Esto quiere decir que al momento de llamarla se pasan parametros, la ejecucion sera normal.

    Si una funcion e definida `func(void)` no tienen parametros pero tienen prototipo, es decir, cuando si se llama la funcion enviandole parametros esto dara una excepción.

- ¿Qué diferencia hay entre printky printf?

    `printk` es una funciona nivel de kernel, que sirve para los logs en distintos niveles definidos en `<linux/kernel.h>`. `printf`escribe a un *file descriptor* o a `STD_OUT`

- ¿Qué es y para qué sirve `KERN_INFO`?

    Es el nivel de log en el que se escribe. El nivel define el tipo de log quese esta escribiendo.

- ¿Qué es una goal definition o definición de meta en un Makefile,y qué se está haciendo con ladefinición de meta obj-m?

    La meta es el target que make va a actualizar, o tratar de actualizar. Este actualiza todos los modulos que sea requisistos de una meta.

    En la definicion de `obj-m` es la meta a la que se debe de llegar, y el valor que se le asigna es el como se van a escribir los resultados. Esta especifica los archivos `object` 

- ¿Qué función tienen las líneas all:y clean:?

    Estos son *Phony Targets* son funciones que se ejecutan solamente si se llaman explicitamente. `all` compila todos los archivos que sean necesarios para llegar al *goal* y `clean` limpia luego de compilacion.

- ¿Qué hace la opción `–C` en este Makefile?

    Segun la paggina del manual de make
    >Change to DIRECTORY before doing anything.
    
    Esto quiere decir que se cambiara el directorio de trabajo como primer paso/

- ¿Qué hace la opción Men este Makefile?

    Segun la paggina del manual de make
    > The M= option causes that makefile to move back into your module source directory before trying to build the modules target.

    Esto guarda un valor en la variable M, que es al directorio donde se mueve make.

![dmesg](./images/dmesg-1.png)

- ¿Para qué sirve dmesg?

    Comando es utilizado para examinar o controlar el buffer del kernel, por defecto se usa para leer los mensajes (como los logs) del kernel.

- ¿Qué hace la función simple_init en su programa simple.c?
    
    Es la funcion que esta encargada de cargar el modulo al kernel de linux.
    
![dmesg](./images/dmesg-2.png)

- ¿Qué hace la función simple_exiten su programa simple.c?

    Se encargar de descargar el mudlo del kernel.

- Usted  ha  logrado  crear,  cargar  y  descargar  un  módulo  de  Linux.  ¿Qué poder  otorga  el ejecutar código de esta forma?

    Concede permisos en el espacio del kernel, es decir se tiene las funciones que el kernel puede ejecutar. Cabe mencionar la facilidad de cargar los modulos al sistema para reducir el tiempo de desarrollo/deploy.
