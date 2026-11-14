# artemis-leo-simulador-orbital-C
Simulador en lenguaje C de inserción y estabilidad orbital de la nave Orion (Problema 2 - Trabajo Final AED).

# ARTEMIS LEO – Simulador Orbital Orion

## 1. Descripción del proyecto

ARTEMIS LEO es un simulador orbital desarrollado en lenguaje C para representar y analizar el comportamiento de la nave Orion durante su permanencia en una órbita terrestre baja (LEO).

El programa permite configurar parámetros físicos, realizar cálculos orbitales, simular un impulso lateral mediante un propulsor auxiliar y consultar los resultados e historial de eventos de la misión.

El proyecto corresponde al **Problema 2: Inserción y Estabilidad en Órbita Terrestre Baja (LEO)** del Trabajo Final Integrador de Laboratorio de C.

## 2. Integrantes

- Elias Brunaga
- Lucas Capra
- Guido Gomez

## 3. Objetivos

- Calcular las magnitudes físicas asociadas a una órbita circular terrestre.
- Comprobar la relación entre la fuerza gravitatoria y la fuerza centrípeta.
- Determinar la velocidad y el período orbital de la nave Orion.
- Simular la acción de un propulsor auxiliar lateral.
- Calcular la desviación lateral y la velocidad adquirida.
- Registrar y consultar los eventos de la misión.

## 4. Funcionalidades del programa

El simulador cuenta con un menú interactivo de seis opciones:

| Opción | Funcionalidad                   |
| ------ | ------------------------------- |
| 1      | Configurar parámetros orbitales |
| 2      | Calcular órbita (A, B y C)      |
| 3      | Simular propulsor lateral (D)   |
| 4      | Mostrar resultados              |
| 5      | Consultar historial de misión   |
| 0      | Salir del programa              |

### Apartados físicos implementados

**A. Fuerza gravitatoria y velocidad orbital**

Se calcula la fuerza de atracción gravitatoria, se comprueba su equivalencia con la fuerza centrípeta y se determina la velocidad orbital necesaria para mantener la órbita circular.

**B. Período orbital**

Se calcula el tiempo necesario para completar una vuelta alrededor de la Tierra, expresado en segundos y minutos.

**C. Aceleración centrípeta**

Se determina la aceleración centrípeta experimentada por la nave durante el movimiento circular uniforme.

**D. Propulsor lateral**

Se simula un pulso de aceleración constante perpendicular a la velocidad orbital. Se calcula la desviación lateral instantánea y la velocidad lateral final, y se describe cualitativamente el cambio de trayectoria.

## 5. Parámetros iniciales de la simulación

El programa utiliza los siguientes valores predeterminados:

| Parámetro                   |                  Valor |
| --------------------------- | ---------------------: |
| Masa de la Tierra           |        5,972 × 10²⁴ kg |
| Radio terrestre             |            6.371.000 m |
| Altitud orbital             |              192.000 m |
| Radio orbital total         |            6.563.000 m |
| Masa de Orion               |              33.000 kg |
| Constante gravitacional (G) | 6,674 × 10⁻¹¹ N·m²/kg² |
| Aceleración lateral         |              0,50 m/s² |
| Duración del pulso          |                 10,0 s |

La opción 1 permite modificar los parámetros de la simulación mediante el ingreso de nuevos valores.

## 6. Resultados esperados con los valores iniciales

Al ejecutar los cálculos con los parámetros predeterminados, se obtienen aproximadamente los siguientes resultados:

| Magnitud                |    Resultado |
| ----------------------- | -----------: |
| Radio orbital           |  6.563.000 m |
| Velocidad orbital       | 7.792,95 m/s |
| Fuerza gravitatoria     | 305.362,10 N |
| Fuerza centrípeta       | 305.362,10 N |
| Período orbital         |   5.291,52 s |
| Período orbital         |    88,19 min |
| Aceleración centrípeta  |    9,25 m/s² |
| Desviación lateral      |      25,00 m |
| Velocidad lateral final |     5,00 m/s |

Los resultados pueden variar cuando se modifican los parámetros iniciales.

## 7. Estructura del proyecto

El proyecto está organizado mediante modularización, separando el menú principal, los cálculos físicos y las validaciones de entrada.

| Archivo          | Descripción                                                                                                        |
| ---------------- | ------------------------------------------------------------------------------------------------------------------ |
| `main.c`         | Contiene el menú principal y controla el flujo de ejecución.                                                       |
| `artemis.h`      | Contiene las estructuras, constantes y prototipos de funciones.                                                    |
| `artemis.c`      | Implementa los cálculos orbitales, la simulación lateral, la configuración de parámetros y el historial de misión. |
| `validaciones.h` | Contiene los prototipos de las funciones de validación.                                                            |
| `validaciones.c` | Implementa la lectura y validación de datos ingresados por el usuario.                                             |
| `.gitignore`     | Evita incluir archivos generados durante la compilación.                                                           |

## 8. Requisitos técnicos implementados

El programa incorpora los siguientes recursos del lenguaje C:

- Estructuras condicionales (`if`, `else` y `switch`).
- Estructuras repetitivas (`do-while` y `for`).
- Modularización mediante funciones y archivos de cabecera.
- Estructuras de datos (`struct`).
- Uso de arreglos para almacenar el historial de eventos.
- Uso de punteros para trabajar con estructuras y parámetros.
- Validaciones de entrada numérica.
- Control de punteros nulos y valores físicos inválidos.
- Manejo de errores y mensajes informativos para el usuario.

## 9. Compilación y ejecución

### Requisitos

- Compilador GCC.
- Lenguaje C estándar C11.
- Terminal de comandos.

### Compilar el proyecto

Ubicarse en la carpeta principal del repositorio y ejecutar:

```bash
gcc -std=c11 -Wall -Wextra -pedantic main.c artemis.c validaciones.c -o artemis -lm
```

### Ejecutar el simulador

En Linux o GitHub Codespaces:

```bash
./artemis
```

## 10. Guía de verificación

Para comprobar el funcionamiento integral del programa, se recomienda seguir este orden:

1. Ejecutar el simulador.
2. Seleccionar la opción 1 e ingresar los parámetros iniciales.
3. Seleccionar la opción 2 para calcular la órbita.
4. Seleccionar la opción 3 para simular el propulsor lateral.
5. Seleccionar la opción 4 para visualizar los resultados.
6. Seleccionar la opción 5 para consultar el historial de misión.
7. Seleccionar la opción 0 para finalizar.

**Importante:** después de modificar los parámetros mediante la opción 1, es necesario volver a realizar los cálculos orbitales y del propulsor antes de consultar los resultados.

También se recomienda probar entradas incorrectas, como texto en campos numéricos o valores fuera de los rangos permitidos, para comprobar las validaciones.

## 11. Control de versiones

El proyecto utiliza Git y GitHub para administrar el código fuente, registrar modificaciones y facilitar el trabajo colaborativo entre los integrantes.

Se utilizan commits para identificar los cambios realizados durante las distintas etapas de desarrollo.

## 12. Consideraciones finales

ARTEMIS LEO permite representar mediante un simulador por consola los principales fenómenos físicos involucrados en la inserción y estabilidad de una nave espacial en órbita terrestre baja.

La solución integra cálculos físicos, estructuras de datos, modularización, validaciones y gestión de eventos, aplicando los contenidos desarrollados durante la asignatura Laboratorio de C.

## 13. Uso de Inteligencia Artificial (IA)

Se utilizó ChatGPT como herramienta de apoyo para:

1. Corrección de sintaxis y estructura del código.
2. Integración y conexión entre archivos y módulos.
3. Detección y resolución de errores.
4. Organización visual del menú interactivo.
5. Revisión y verificación de fórmulas y cálculos físicos.

Las sugerencias fueron revisadas y adaptadas por los integrantes del equipo.
