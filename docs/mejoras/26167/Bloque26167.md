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

[Mi bloque muestra la boleta de solamente un alumno, le pide al usuario el nombre del alumno, lo busca en la lista de alumnos registrados y si lo encuentra, muestra sus calificaciones de las materias de Español, Matemáticas y Diseño de Programas, su promedio, cuántas materias reprobó y si  aprobó o reprobó, le sirve a quien usa el programa para consultar rápido el resultado de un alumno sin tener que revisar toda la lista de estudiantes.]

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

[Parámetros: la función boletaIndividual recibe los arreglos de nombres, espanol, matematicas y diseno , que son los datos de todos los alumnos y la función totalAlumnos, que es cuántos alumnos hay registrados.

Teclado: el nombre del alumno a buscar, que se lee con leerCadena("Nombre a buscar: ").

Salidas: la función es void, así que no devolvera nada, imprime la boleta con el nombre, las tres calificaciones, el promedio (con un decimal), las materias reprobadas y si esta aprobado o reprobado, en caso de algun problema imprime un mensaje de rechazo.]

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

[boletaIndividual es la función de mi bloque, pide el nombre, busca el alumno, calcula el promedio y las materias reprobadas, imprime la boleta y decide el estado. también use leerCadena, que lo saque de utilerias.h, para leer el nombre desde el teclado.]

**¿Qué ciclo usaste y por qué ese?**

[Usé un ciclo for para buscar al alumno, porque ya sé cuántos alumnos hay con totalAlumnos y tengo que recorrer las posiciones de 0 a totalAlumnos - 1, cuando encuentro el nombre guardo la posición y salgo con break, para no seguir de más.]

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

[Use 3,
 posicion inicia en -1, guarda en qué lugar de los arreglos está el alumno; si al terminar el ciclo sigue en -1, significa que no se encontró.
reprobadas inicia en 0,es un contador: suma 1 por cada materia con calificación menor a 7.0.
promedio no es un acumulador, se calcula una sola vez sumando las tres calificaciones y dividiendo entre 3.0.]

**¿Dónde está tu decisión múltiple y qué casos cubre?**

[Es el switch (reprobadas) al final de la función, el caso 0 imprime "Estado: Aprobado", los casos 1, 2 y 3 tienen el mismo resultado e imprimen "Estado: Reprobado".]

**¿Qué constantes definiste y por qué son constantes?**

[En este archivo no definí constantes con nombre: la calificación mínima aprobatoria (7.0) y el número de materias (3.0) los escribí directamente en el código.]

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

[Lista vacía (totalAlumnos == 0): muestra "No hay alumnos registrados." y termina la función con return.
Alumno no encontrado (posicion == -1): muestra "No se encontro al alumno " luego el nombre que se buscó, y termina con return.]

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
[Inserta aquí tu respuesta]
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

[Inserta aquí tu respuesta]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [Duda de como tener todos los cambios de mis compañeros en mi VS code] | [El profe me explico que en caso de que no aparezca, ir a la sección de arriba y seleccionar pull para actualizarme y push para mandar mis cambios.] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
