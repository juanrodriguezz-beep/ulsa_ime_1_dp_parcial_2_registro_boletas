# Documentación del bloque

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/<matrícula>/bloque.md (por ejemplo, docs/123456/bloque.md)
y llena tu copia.
-->

## 1. Autor

**Nombre:** [Daniel Miranda Ferreira] 
**Matrícula:** [26167]
**Bloque y opción elegida:** [Boleta individual]
**Archivo de código:** [include/boleta individual.h]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

[Mi bloque muestra la boleta de solamente un alumno, le pide al usuario el nombre del alumno, lo busca en la lista de alumnos registrados y, si lo encuentra, muestra sus calificaciones de las materias de Español, Matemáticas y Diseño de Programas, su promedio, cuántas materias reprobó y si aprobó o reprobó, le sirve a quien usa el programa para consultar rápido el resultado de un alumno sin tener que revisar toda la lista.]

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

[Parámetros: la función boletaIndividual recibe los arreglos nombres, espanol, matematicas y diseno, que son los datos de todos los alumnos y totalAlumnos, que es el numero de alumnos que hay registrados.

Teclado: el nombre del alumno que se busca, se lee con leerCadena("Nombre a buscar: ").

Salidas: la función en este caso es void, así que no devuelve nada, imprime la boleta con el nombre, las tres calificaciones, el promedio, con un decimal, las materias reprobadas y el estado que es si esta aprobado o reprobado, si hay un problema imprime un mensaje de rechazo.]

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

[ boletaIndividual es la función de mi bloque, pide el nombre, busca al alumno, calcula el promedio y las materias reprobadas, imprime la boleta y decide el estado, también use leerCadena, que viene de utilerias.h, para leer el nombre desde el teclado.]

**¿Qué ciclo usaste y por qué ese?**

[Usé un for para buscar al alumno, porque ya sé cuántos alumnos hay gracias a totalAlumnos, tengo que recorrer las posiciones de 0 a totalAlumnos - 1, cuando encuentro el nombre guardo la posición y salgo con break, para no seguir recorriendo de más.]

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

[En este caso fueron 3, 
posicion: inicia en -1, este guarda en qué lugar de los arreglos está el alumno; si al terminar el ciclo sigue en -1, significa que no se encontró.
reprobadas: inicia en 0, es un contador, suma 1 por cada materia con una calificación menor a 7.0.
promedio: no es un acumulador, se calcula solo una vez sumando las tres calificaciones y dividiendo entre la constante TOTAL_MATERIAS_BOLETA.]

**¿Dónde está tu decisión múltiple y qué casos cubre?**

[Es el switch (reprobadas) al final de la función, el caso 0 imprime "Estado: Aprobado", los casos 1, 2 y 3 tienen el mismo resultado e imprimen "Estado: Reprobado".]

**¿Qué constantes definiste y por qué son constantes?**

[Definí TOTAL_MATERIAS_BOLETA = 3, que es el número de materias entre las que se divide para sacar el promedio, e constante porque la cantidad de materias no cambia mientras corre el programa, y al tener nombre se entiende qué significa ese 3 y, si algún día cambia, solo se modifica en un lugar, la calificación mínima que es 7.0 sigue escrita directamente en las comparaciones de las materias reprobadas.]

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

[Lista vacía (totalAlumnos == 0): muestra "No hay alumnos registrados." y termina la función con return.
Alumno no encontrado (posicion == -1): muestra "No se encontro al alumno " seguido del nombre que se buscó, y termina con return.]

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
1. Recibir los arreglos de nombres, Español, Matemáticas y Diseño de Programas, y el total de alumnos registrados.
2. Definir la constante con el número de materias (3).
3. Si el total de alumnos es 0, mostrar "No hay alumnos registrados." y terminar.
4. Pedir el nombre del alumno a buscar.
5. Iniciar la posición en -1 (significa "todavía no lo encuentro").
6. Recorrer la lista desde el primer alumno hasta el último:
       Si el nombre del alumno es igual al buscado,
           guardar su posición y dejar de buscar.
7. Si la posición sigue en -1, mostrar "No se encontro al alumno" y el nombre buscado, y terminar.
8. Calcular el promedio: sumar las tres calificaciones del alumno y dividir entre el número de materias.
9. Iniciar en 0 el contador de materias reprobadas.
10. Por cada materia con calificación menor a 7.0, sumar 1 al contador.
11. Mostrar la boleta: nombre, las tres calificaciones, el promedio (con un decimal) y las materias reprobadas.
12. Según el contador de materias reprobadas:
       si es 0, mostrar "Estado: Aprobado";
       si es 1, 2 o 3, mostrar "Estado: Reprobado".
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

[Sí, la probé a mano con los datos del ejemplo de la guía, con Marta (6, 5 y 7) me dio promedio 6.0, 2 materias reprobadas y que esta reprobado, y con Hugo, que no existe, el programa muestra que no se encontró al alumno,vi que la búsqueda solo funciona con nombres que ya estén registrados y escritos exactamente igual, lo que corregí fue agregar una constante propia (TOTAL_MATERIAS_BOLETA), porque en mi código el número de materias estaba escrito de una forma directa.]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [Duda de como tener todos los cambios de mis compañeros en mi VS code] | [El profe me explico que en caso de que no aparezca, ir a la sección de arriba y seleccionar pull para actualizarme y push para mandar mis cambios.] |
| 2 | [Mi código no tenía constante propia, y el contrato del bloque la pedía.] | [Definí TOTAL_MATERIAS_BOLETA = 3 y la usé para calcular el promedio.] |
| 3 | [Tuve un problrma con los apartados y donde deberian de ir] | [Los revise con calma y ya los acomode]
