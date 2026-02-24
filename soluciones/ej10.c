Puede fallar porque el arreglo es muy grande. Si está dentro de una función, ocupa mucho 
espacio y puede llenarse la memoria del programa. 
Si el arreglo está dentro de una función, se guarda en el stack. Si se declara fuera (global), 
se guarda en otra parte más grande de memoria. 
Poner el arreglo fuera de la función principal o usar el modificador static para que no se 
guarde en el stack y no cause error. 
El cambio de ubicación del arreglo de local a global permite que el programa soporte el 
tamaño solicitado sin interrumpir su ejecución.
