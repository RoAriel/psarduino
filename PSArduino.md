# PSArduino

### Integrantes

|Prieto Estefania| Belleil Ivan | Gonzalez Rodrigo |
| :--------: | :--------: | :--------: |
| [![](https://avatars0.githubusercontent.com/u/44297919?s=64&v=4)](https://github.com/EstefiCamba)     | [![](https://avatars2.githubusercontent.com/u/12256875?s=64&v=4)](https://github.com/ivigbe)     | [![](https://avatars2.githubusercontent.com/u/8609216?s=64&v=4)](https://github.com/RoAriel)     |

### Objetivo:
 Generar la automatización del flujo del agua que nace de una fuente (botella) corre por una manguera hasta la electroválvula y luego sigue al filtro.


### El filtro

Este tipo de filtro utiliza la acción mecánica del paso por la arena y la grava para remover así los elementos que enturbian el agua y en combinación con el carbón y bacterias benignas también reducen la carga bacteriológica de patógenos que podrían causar daños a nuestra salud. Para contruir el filtro se debe cortar la base de la botella, colocarla boca abajo e introducir las fases del filtro en el siguiente orden:
- algodón
- grava gruesa
- grava fina
- arena gruesa
- arena fina
- carbón activavo
Dejando el algodón en el pico de la botella, la parte que queda abajo y el carbón activado en la parte de arriba de todo.

##### Materiales para hacer el filtro
Estos materiales se pueden conseguir en una casa de artículos para peceras.

- Una botella plástica de 3 litros.
- Grava fina  `$20/kg`.
- Grava gruesa  `$17/kg`.
- Arena fina y limpia  `$80/5kg`.
- Carbón activado  `$420/kg`.
- Agodón  `$60`.

#### Materiales para entubado y soporte

- Manguera.
- Abrazadera.
- Recipientes contenedores para agua (filtrada y sin filtrar).
- Madera.
- Tornillos.
- Planchuelas de hierro.

### Materiales electrónicos

La mayor parte de los materiales fueron dados por las UNQ para este proyecto, dónanos o eran propios.
- [Aruino Mega 2560.](https://articulo.mercadolibre.com.ar/MLA-619909192-arduino-mega-2560-r3-16au-cable-usb-domotica-y-robotica-_JM?quantity=1)
- [Módulo Relé.](https://articulo.mercadolibre.com.ar/MLA-706340414-modulo-relay-rele-de-1-canal-5v-10a-arduino-pic-avr-robotica-_JM?quantity=1) 
- [Módulo Bluetooth HC-06.](https://articulo.mercadolibre.com.ar/MLA-711763012-modulo-bluetooth-hc-06-maestro-serial-uart-ttl-at-arduino-_JM?quantity=1)
- [Electrovalvula de 12v.](https://articulo.mercadolibre.com.ar/MLA-613370087-electrovalvula-universal-paso-de-nafta-gnc-gas-_JM?matt_tool=96769418&matt_word&gclid=CjwKCAjwmZbpBRAGEiwADrmVXiEppShmII6bAp1gW7ySQpPJI8nOvq71xQxDBqMlDRnGWlNvtrGKHRoCubcQAvD_BwE&quantity=1)
- [Protoboard](https://articulo.mercadolibre.com.ar/MLA-596406863-protoboard-breadboard-400-puntos-experimentador-arduino-ptec-_JM?quantity=1)
- Fuente de 12v.
- 7 cables hembra-macho
- 2 cables mcho-macho
 
### Conexión con arduino de forma inalámbrica
Un celular con Bluetooth que tenga instalada una Bluetooth Terminal, hay dos formas una libre y otra usando Google:
- Instalando primero en el celular [F-Droid](https://f-droid.org/en/) e instalando la app [__Bluetooth Terminal__](https://f-droid.org/en/packages/ru.sash0k.bluetooth_terminal/)
- Instalando desde [Play Store de Google](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal&hl=en_US)


### Links a proyectos con partes importantes para el nuestro:

- [Electrovalvula](https://forum.arduino.cc/index.php?topic=537292.0)
- [Stepper](https://www.instructables.com/id/BYJ48-Stepper-Motor/)
- [Desafios tecnologicos: servo](https://educacion.camba.coop/course/view.php?id=2)
- [Filtros de agua](https://www.postubo.com/foro/t/comunidad/discusiones-generales/filtros-de-agua-nos-estan-timando/?page=2)

Durante el proceso de investigación que tuvimos como equipo fuimos probando distintas formas de abrir/cerrar una llave de agua, se probaron motores servo y paso a paso por eso integramos en el informe información,  pudimos integrar a ambos con el módulo Bluetooth. Finalmente se resolvió realizar el proyecto con una electroválvula.

### Código

#### ___Circuitos simples___

-  [Módulo Bluetooth](https://etherpad.net/p/modulo-bluetooth)
![](https://i.imgur.com/wGtpWMs.png)

- [Módulo Relé](https://etherpad.net/p/rele-electro)![](https://i.imgur.com/4K36lyM.png)

### Código final

- [Control Electrovalvula](https://etherpad.net/p/control_electrovalvula)![](https://i.imgur.com/IMZSCwX.png)
### Imagenes del proyecto finalizado


| ![Estructura final](https://i.imgur.com/eZqt7GG.jpg) |![Arduino y módulos](https://i.imgur.com/L6ktwSm.jpg)|
| -------- | -------- |
| ![Electrovalvula](https://i.imgur.com/kwFY64l.jpg)   |  ![Filtro Natural](https://i.imgur.com/PevXa64.jpg) |
|![Contenedor](https://i.imgur.com/opYY0rL.jpg)

### TO-DO
- Realizar conexión con un módulo de proximidad para medir que el agua no sobrepase la capacidad del filtro o del contenedor de agua filtrada y así enviar una señal para cerrar la electroválvula.
- Enviar notificación por protocolos según los distintos estados de los contenedores.
