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