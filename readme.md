# Trabajo práctico: Control de acceso.

## Memoria descriptiva

	El sistema elegido para el trabajo práctico, se trata de un control de acceso
para un consorcio. El mismo se compone de un electroimán encargado de mantener físicamente 
cerrada la puerta de ingreso al edificio, y un lector RFID, controlado por un LPC845.
El microcontrolador traducirá la información del lector extrayendo un ID de la tag acercada, 
debe comparar con un registro de códigos cargados en la memoria. Si el ID leído se encuentra 
en los registros activará un relé que cortará la corriente del electroimán permitiendo la 
apertura de la puerta.

### Máquina de estado

![fsmcontroldeacceso.pdf](https://github.com/adrianmena3815/TPControldeAcceso/blob/master/fsmcontroldeacceso.pdf)
 
