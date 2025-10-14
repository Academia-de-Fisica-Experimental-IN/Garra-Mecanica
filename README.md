# Garra Mecánica con Arduino

> Un brazo robótico simple controlado por un joystick para manipular objetos pequeños, ideal para iniciarse en la robótica y la programación con Arduino.

Este proyecto fue desarrollado como una herramienta educativa y práctica para aprender sobre el control de servomotores y la lectura de entradas analógicas y digitales, utilizando componentes comunes y accesibles.

## ✨ Características Principales

*   **Control Intuitivo**: Maneja el movimiento de la garra en dos ejes utilizando un módulo de joystick.
*   **Movimiento Preciso**: Utiliza servomotores para un control posicional exacto.
*   **Modo de Inversión**: Incluye una función para invertir el control del eje X con solo presionar el botón del joystick.
*   **Plataforma Abierta**: Basado en Arduino, una plataforma fácil de usar y modificar.
*   **Fácil de Replicar**: Diseñado con componentes electrónicos estándar y de bajo costo.

-----

## 🛠️ Componentes Necesarios

| Componente | Cantidad | Descripción |
| :--- | :---: | :--- |
| Arduino Uno | 1 | Placa microcontroladora principal. |
| Servomotor (SG90 o similar) | 2 | Actuadores para el movimiento de la garra. |
| Módulo Joystick KY-023 | 1 | Para controlar el movimiento de los servos. |
| Estructura de Garra Mecánica | 1 | El chasis y las pinzas de la garra. |
| Protoboard (Placa de Pruebas) | 1 | Para montar el circuito sin soldar. |
| Cables Jumper (Macho-Hembra) | Varios | Para realizar las conexiones. |

-----

## 🔌 Conexiones

Para ensamblar el proyecto, realiza las siguientes conexiones con cuidado.

### Conexión del Módulo Joystick

| Pin del Joystick | Pin del Arduino Uno |
| :---: | :---: |
| GND | GND |
| +5V | 5V |
| VRx | A1 |
| VRy | A0 |
| SW | 7 |

### Conexión de los Servomotores

**Servo 1 (Control del eje X)**

| Pin del Servo | Pin del Arduino Uno |
| :---: | :---: |
| Señal (Naranja/Amarillo) | **5** |
| VCC (Rojo) | 5V |
| GND (Marrón/Negro) | GND |

**Servo 2 (Control del eje Y)**

| Pin del Servo | Pin del Arduino Uno |
| :---: | :---: |
| Señal (Naranja/Amarillo) | **3** |
| VCC (Rojo) | 5V |
| GND (Marrón/Negro) | GND |

## 👥 Autores y Agradecimientos

Este proyecto fue creado con fines educativos y de aprendizaje por:

*   Lucas Espinoza
*   [Pablo Cruzat](https://github.com/PabloCruzval)
*   [Felipe Colli](https://github.com/F-Patata2008)

Siéntete libre de usar y modificar este proyecto para tus propios fines. ¡La mejor manera de aprender es experimentar!

## 📜 Licencia

Este proyecto es de dominio público o se puede licenciar bajo la **Licencia MIT**, que permite su libre uso, modificación y distribución.
