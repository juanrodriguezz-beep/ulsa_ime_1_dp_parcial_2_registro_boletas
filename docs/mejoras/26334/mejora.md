# Propuesta de mejora

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/mejoras/<matrícula>/mejora.md (por ejemplo, docs/mejoras/123456/mejora.md)
y llena tu copia.

La propuesta es solo diseño: no se programa.
Puede tocar cualquier parte de la solución del equipo y se resuelve con los temas del parcial.
Dentro de un equipo no puede haber dos propuestas iguales.
-->

Propuesta de mejora elaborada por: Manuel Mona Pèrez

**Matrícula:** 26334
**Título de la propuesta:** Estadisticas de alumnos aprobados y reprobados por materia.


## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

Es una mejora que permite conocer cuántos alumnos aprobaron y reprobaron cada materia. Ayuda a identificar las materias con más dificultades y beneficia a los maestros y al equipo escolar.

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

Se agregarían contadores para los alumnos aprobados y reprobados en cada materia. También se usaría una constante para definir la calificación mínima aprobatoria y una función para calcular y mostrar los resultados. No sería necesario modificar los arreglos de alumnos ni sus calificaciones.

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
CONSTANTE CALIFICACION_MINIMA = 7.0

[NUEVO] Crear contadores de aprobados y reprobados para cada materia.

Recorrer a todos los alumnos registrados.

[CAMBIA] Para cada materia, revisar la calificación del alumno.

[NUEVO] Si la calificación es mayor o igual a CALIFICACION_MINIMA, aumentar el contador de aprobados; de lo contrario, aumentar el contador de reprobados.

Mostrar la cantidad de aprobados y reprobados de cada materia.
```
