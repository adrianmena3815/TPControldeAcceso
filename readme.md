# Trabajo práctico: Control de acceso.

## Memoria descriptiva

  El sistema elegido para el trabajo práctico, se trata de un control de acceso
para un consorcio. El mismo se compone de un electroimán encargado de mantener físicamente 
cerrada la puerta de ingreso al edificio, y un lector RFID, controlado por un LPC845.
El microcontrolador traducirá la información del lector extrayendo un ID de la tag acercada, 
debe comparar con un registro de códigos cargados en la memoria. Si el ID leído se encuentra 
en los registros activará un relé que cortará la corriente del electroimán permitiendo la 
apertura de la puerta.

En la presentación está simulada la lectura del RFID con dos pulsadores y cuatro leds. El código se ingresará manualmente con el uso de dichos pulsadores, utilizando el primero para elegir el dígito deseado y el segundo para guardarlo, generando así una clave de 4 dígitos que se comparará con un único código precargado. Si es correcto se prenderán los cuatro leds en lugar de la activación del relé, y dos luces mostrando el error.

Ingresando al link del video se puede ver su funcionamiento:

https://www.youtube.com/watch?v=SlDW5IJN_5M

### Máquina de estado

![./fsmcontroldeacceso.png](https://github.com/adrianmena3815/TPControldeAcceso/blob/master/fsmcontroldeacceso.png)
 
