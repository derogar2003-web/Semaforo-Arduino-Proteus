# Sistema de Control de Tráfico (Semáforo Vehicular y Peatonal)

Proyecto de automatización de una intersección vial desarrollado con **Arduino Uno** y simulado en **Proteus Design Suite**.

## Descripción del Proyecto
Este sistema controla de forma sincronizada:
* 🚦 **Dos vías vehiculares** (con luces Roja, Amarilla y Verde).
* 🚶 **Un cruce peatonal** seguro (con luces Roja y Verde).
* ⏱️ **Temporización optimizada:** Los tiempos de verde y rojo son iguales, mientras que el amarillo de transición es menor.

## Estructura de Pines
* **Semáforo Vehicular 1:** Pines 12 (Rojo), 11 (Amarillo), 10 (Verde)
* **Semáforo Vehicular 2:** Pines 9 (Rojo), 8 (Amarillo), 7 (Verde)
* **Semáforo Peatonal:** Pines 6 (Rojo), 5 (Verde)

## Archivos Incluidos
* `sketch_nov9a.ino`: Código fuente en C++ listo para compilar en el IDE de Arduino y generar el archivo `.hex` para Proteus.
