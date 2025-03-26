
![image](https://github.com/user-attachments/assets/d7d8ae12-1c29-48d2-b37f-5ec37a7c6c02)

# Sistema de Monitoreo de Gas con Arduino e IoT

## Descripción
Este proyecto implementa un sistema de detección de gas utilizando un sensor analógico conectado a un microcontrolador Arduino. El sistema genera alertas visuales y sonoras cuando se detecta una concentración peligrosa de gas, activando LEDs, un buzzer y mostrando mensajes en una pantalla LCD. Además, se ha integrado un motor para la activación de un mecanismo de ventilación en caso de emergencia.

Este sistema representa un ejemplo básico del uso de **Internet de las Cosas (IoT)** en seguridad, permitiendo la interconexión de sensores y actuadores para responder automáticamente a eventos críticos.
En este link podrás encontrar un ejemplo funcional del sensor
https://www.tinkercad.com/things/bzyEhnVSkkY-iot-project-of-detector-de-fugas-de-gas-con-pantalla?sharecode=v1VPt68j8D3N9Fc7CbQMshgZ8MX0ZZxazzVMXvqad7c
## Características
- **Sensor de gas**: Detecta niveles peligrosos de gases inflamables.
- **Alerta visual y sonora**:
  - LED rojo para indicar peligro.
  - LED verde para estado normal.
  - Buzzer para generar alarma sonora.
- **Pantalla LCD**:
  - Muestra mensajes de alerta o estado normal.
- **Motor CC**:
  - Activación de ventilación en caso de emergencia.

## Requisitos de Hardware
- **Microcontrolador**: Arduino Uno o compatible.
- **Sensor de gas**: MQ-2 o similar.
- **Pantalla LCD**: 16x2 con interfaz paralela.
- **Buzzer**: Piezoeléctrico para alertas.
- **LEDs**: Indicadores rojo y verde.
- **Motor DC**: Para accionar ventilación.

## Instalación y Configuración
### Conexión de Hardware
1. **Conectar los componentes** según el siguiente esquema:
   - Sensor de gas a entrada analógica **A0**.
   - LEDs a los pines **2 (verde)** y **3 (rojo)**.
   - Buzzer al pin **4**.
   - Motor CC a los pines **12 y 13**.
   - Pantalla LCD conectada a los pines **5, 6, 8, 9, 10, 11**.

### Carga del Código
1. **Clonar este repositorio**:
   ```bash
   git clone https://github.com/LeoSanchezH/sensor-gas-arduino.git
   cd sensor-gas-arduino
   ```
2. **Abrir el código en el IDE de Arduino**.
3. **Seleccionar la placa Arduino Uno** y el puerto correcto.
4. **Compilar y subir el código al Arduino**.
5. **Abrir el monitor serie** para visualizar los valores del sensor.

## Funcionamiento
1. **Monitoreo constante**:
   - Se obtiene la lectura del sensor de gas y se compara con un umbral predefinido (**400**).
2. **Estado normal**:
   - Se enciende el LED verde.
   - Se muestra "ESTADO: NORMAL" en la pantalla LCD.
3. **Alerta de gas**:
   - Se activa el LED rojo y el buzzer.
   - Se muestra "ALERTA" y "EVACUAR" en la LCD.
   - Se enciende el motor para ventilar la zona.

## Importancia del IoT en Sensores de Gas
La integración de sensores con IoT permite recopilar datos en tiempo real y enviar alertas automáticas a sistemas de monitoreo remoto. Este tipo de soluciones:
- **Mejoran la seguridad** en entornos industriales y domésticos.
- **Reducen el tiempo de respuesta** ante fugas de gas.
- **Facilitan el análisis de datos** para prevenir futuras emergencias.

## Posibilidades de Expansión
- **Enlace con plataformas IoT** para monitoreo remoto (Ej: MQTT, Firebase).
- **Registro de datos** para análisis y predicción de patrones de fuga de gas.
- **Integración con sistemas domóticos** para cierre automático de válvulas.

Este proyecto es una base sólida para el desarrollo de sistemas inteligentes de monitoreo de gases utilizando Arduino y IoT.

## Licencia
Este proyecto está bajo la licencia GNU . Para más información, revisa el archivo `LICENSE`.

## Contribuciones
Si deseas mejorar este proyecto, siéntete libre de hacer un fork y enviar un pull request. ¡Toda ayuda es bienvenida!

---

