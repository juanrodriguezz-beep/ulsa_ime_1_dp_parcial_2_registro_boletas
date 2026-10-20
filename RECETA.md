# Receta del bloque: Captura de alumnos

## Objetivo
Registrar los datos de un alumno, incluyendo su nombre y sus calificaciones en las materias Español, Matemáticas y Diseño de Programas, verificando que los datos sean válidos antes de guardarlos.

## Pseudocódigo

**Inicio**

1. Definir la cantidad máxima de alumnos permitidos, que es 6.
2. Recibir los cuatro arreglos: nombres, calificaciones de Español, calificaciones de Matemáticas y calificaciones de Diseño de Programas.
3. Recibir la cantidad actual de alumnos registrados.
4. Verificar si la lista ya está llena.
   - Si hay 6 alumnos registrados, mostrar un mensaje que diga que la lista está llena y terminar.
5. Solicitar el nombre del nuevo alumno.
6. Mientras el nombre esté vacío:
   - Mostrar un mensaje de error.
   - Volver a solicitar el nombre.
7. Solicitar la calificación de Español.
8. Mientras la calificación sea menor que 0 o mayor que 10:
   - Mostrar un mensaje de calificación inválida.
   - Volver a solicitar la calificación.
9. Repetir el mismo procedimiento para Matemáticas y Diseño de Programas.
10. Guardar el nombre y las tres calificaciones en la posición correspondiente de los cuatro arreglos.
11. Aumentar en uno la cantidad de alumnos registrados.
12. Mostrar un mensaje de confirmación del registro.
13. Devolver la nueva cantidad de alumnos registrados.

**Fin**

## Resultado esperado

El alumno queda registrado únicamente cuando su nombre y sus tres calificaciones son válidos. Si la lista está llena, no se registra ningún alumno adicional.

## Casos de rechazo

- Lista llena: se informa que ya existen 6 alumnos registrados.
- Nombre vacío: se vuelve a solicitar el nombre.
- Calificación fuera del rango de 0 a 10: se vuelve a solicitar la calificación.
