Algoritmo GestionEstudiantesUTA
    Definir nombre, carrera Como Cadena
    Definir edad, opcion Como Entero
    Definir promedio Como Real
    
    Repetir
        Escribir "--- SISTEMA DE PERSISTENCIA UTA ---"
        Escribir "1. Registrar Estudiante"
        Escribir "2. Salir"
        Leer opcion
        
        Segun opcion Hacer
            1:
                Escribir "Ingrese nombre:"
                Leer nombre
                Escribir "Ingrese carrera:"
                Leer carrera
                
                // Validación de Edad
                Repetir
                    Escribir "Ingrese edad:"
                    Leer edad
                    Si edad <= 0 Entonces
                        Escribir "Error: Edad no válida."
                    FinSi
                Hasta Que edad > 0
                
                // Validación de Promedio
                Repetir
                    Escribir "Ingrese promedio (0-10):"
                    Leer promedio
                    Si promedio < 0 O promedio > 10 Entonces
                        Escribir "Error: Promedio fuera de rango."
                    FinSi
                Hasta Que promedio >= 0 Y promedio <= 10
                
                // Simulación de persistencia
                Escribir "Guardando en archivo..."
                Escribir nombre, " | ", edad, " | ", carrera, " | ", promedio, " -> GUARDADO."
                
            2:
                Escribir "Saliendo del sistema..."
            De Otro Modo:
                Escribir "Opción inválida."
        Fin Segun
    Hasta Que opcion = 2
FinAlgoritmo