# Proyecto Parcial 2: Sistema de Registro y Boletas de un Grupo Escolar

> **Importante:** este README es del equipo y debe tener aportaciones de todos los integrantes. La guía completa está en [`PROYECTO.md`](PROYECTO.md).

## 1. Integrantes

| Bloque | Matrícula | Nombre | Usuario de GitHub | Opción elegida |
| --- | --- | --- | --- | --- |
| 1 | [26334] | [Manuel Mona Perez] | [manuelmona-star] | estadisticas.h |
| 2 | [26167] | [Daniel Miranda Ferreira] | [Dan-Byte0] | [Boleta individual] |
| 3 | [26221] | [Juan Antonio Rodriguez] | [Juanrodriguezz-beep] | [aprobados reprobados.h] |
| 4 | [26110] | [Lucia Anaid Tavares] | [Luciatavaresespinosa] | [captura.h] |
| 5 | [26080] | [Diego Alejandro Gonzales] | [DiegoAGC24] | [materias reprobadas.h] |
  6    26159     Alfredo Josue Coss Cardona   Coss360        MejorPeorDesempeno.h

<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

## 2. Opciones del menú

Escriban las opciones del menú en el orden en que aparecen en el programa.

1. Capturar alumno
2. Mostrar lista
3. Estadísticas por materia
4. Aprobados y reprobados
5. Boleta individual
6. Materias reprobadas por alumno
7. Mejor y peor desempeño
8. Salir

## 3. Cómo compilar y ejecutar

Desde la carpeta del proyecto:

```
g++ -Wall -Wextra -std=c++17 -Iinclude src/main.cpp -o boletas
./boletas
```

## 4. Reglas del programa

Escriban las reglas que su programa sigue y que el cálculo a mano necesita. Por ejemplo: qué pasa cuando hay un empate, cómo se busca un nombre, con cuántos decimales se imprime.

[La boleta individual busca el nombre exacto, diferencia mayúsculas de minúsculas, y se detiene en el primer alumno que coincide.
Una materia con calificación menor a 7.0 cuenta como reprobada.
El estado es Aprobado con 0 materias reprobadas y Reprobado con 1 a 3.
El promedio se imprime con un decimal.]

## 5. Datos del escenario

Los 6 alumnos que capturan en el escenario obligatorio.

| # | Nombre | Español | Matemáticas | Diseño de Programas |
| --- | --- | --- | --- | --- |
| 1 | [Manuel Mona] | [8] | [9] | [10] |
| 2 | Diego Alejandro | [8] | [4] | [9] |
| 3 | [Lucia Tavares] | [9] | [9] | [10] |
| 4 | [Juan Antonio] | [6] | [8] | [9] |
| 5 | [Daniel Miranda] | [9] | [6] | [8] |
| 6 | [Alfredo Coss] | [6] | [7] | [4] |

## 6. Cálculo a mano

Predigan la salida del escenario antes de ejecutarlo. Una fila por bloque individual. Lo que imprime el programa debe coincidir.

| Bloque | Valores elegidos | Resultado esperado |
| --- | --- | --- |
| 1 | Las calificaciones de los 6 alumnos en las 3 materias. | Español: promedio 7.67. Matemáticas: promedio 7.17. Diseño de Programas: promedio 8.33. Diseño de Programas tiene el promedio más alto y Matemáticas el más bajo. |
| 2 | Alumno: Diego Alejandro. | Mostrar su boleta: Español 8, Matemáticas 4 y Diseño de Programas 9. Reprobó Matemáticas porque obtuvo menos de 7. |
| 3 | Las calificaciones de los 6 alumnos. | Aprobados y reprobados según cada materia, considerando 7 como calificación mínima aprobatoria. |
| 4 | Intentar registrar un séptimo alumno. | Mostrar el mensaje de que no se pueden registrar más alumnos, porque el límite es de 6. |
| 5 | Los promedios de los 6 alumnos. | Mejor desempeño: Lucía Tavares, con promedio de 9.33. Peor desempeño: Alfredo Coss, con promedio de 5.67. |
| 6 | Revisar las calificaciones de cada alumno. | Mostrar las materias en las que cada alumno obtuvo menos de 7. |
<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

**¿La salida del programa coincidió con el cálculo a mano? Si no, ¿qué corrigieron?**

[Inserta aquí tu respuesta]

## 7. Receta del menú

Receta en pseudocódigo del programa principal: el menú y cómo se conecta con cada bloque.

```
[La salida del programa coincidió con los cálculos realizados a mano. Se verificaron los promedios por materia, las boletas individuales, los aprobados y reprobados, el límite de alumnos y el mejor y peor desempeño.]
```

## 8. Documentación individual

Enlace a la documentación y a la propuesta de mejora de cada integrante.

| Bloque | Documentación | Propuesta de mejora |
| --- | --- | --- |
1	docs/26221/bloque.md	docs/mejoras/26221/mejora.md
2	docs/26167/bloque.md	docs/mejoras/26167/mejora.md
3	docs/26221/bloque.md	docs/mejoras/26221/mejora.md
4	docs/26110/bloque.md	docs/mejoras/26110/mejora.md
5	docs/26080/bloque.md	docs/mejoras/26080/mejora.md
6	docs/26159/bloque.md	docs/mejoras/26159/mejora.md
<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

## 9. Cambios a la interfaz

Si cambiaron algo de la interfaz de `include/registro.h` (una constante, un parámetro, una función), expliquen qué cambiaron y por qué. Si no cambiaron nada, escriban "Sin cambios".

[Sin cambios. Se conservó la interfaz de include/registro.h; únicamente se integraron las funciones correspondientes a cada bloque y el menú principal para conectar las opciones del sistema.]
