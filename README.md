# TAREA-2.2-PERSISTENCIA-CON-ARCHIVOS-DE-TEXTO 📝
Este sistema es una aplicación de consola desarrollada en C++ diseñada para la administración eficiente de registros académicos.
El objetivo principal es aplicar conceptos de persistencia de datos mediante el manejo de archivos planos (.txt). 
Funcionalidades Principales:Registro de Datos: Permite capturar información detallada de los alumnos, incluyendo nombre, carrera, edad y promedio académico. 
- **Persistencia Permanente:** Utiliza la librería fstream y el modo ios::app para asegurar que los datos se almacenen físicamente en el disco y no se pierdan al cerrar la aplicación.  Validación de Entradas: Implementa controles lógicos para garantizar la integridad de la información, verificando que la edad sea un valor positivo y el promedio se mantenga en el rango de 0.0 a 10.0. 
- **Reporte General:** Incluye una función de lectura de archivos que procesa y despliega en pantalla todos los registros almacenados, facilitando el seguimiento de los estudiantes inscritos.
- **Interfaz Interactiva:** El sistema se gestiona a través de un menú intuitivo que guía al usuario en cada operación, cumpliendo con los estándares de usabilidad requeridos. 
- **Tecnologías Utilizadas:** 
- Lenguaje: C++Librerías: <iostream>, <fstream> y <string>.  
Conceptos aplicados: Estructuras de control, validación de errores, flujos de entrada/salida y manejo de archivos de texto.
