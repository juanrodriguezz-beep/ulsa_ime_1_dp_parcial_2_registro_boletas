# Documentación del bloque

## 1. Autor

**Nombre:** Juan Antonio Rodriguez Zuñiga
**Matrícula:** 26221
**Bloque y opción elegida:** Aprobados y reprobados (opción 4 del menú)
**Archivo de código:** `include aprovados reprobados.h`

## 2. Propósito

Mi bloque cuenta, en cada una de las tres materias (Español, Matemáticas y Diseño de Programas), cuántos alumnos aprobaron y cuántos reprobaron. Una materia se aprueba con 7.0 o más.

Le sirve a quien usa el programa para ver de un vistazo cómo le fue al grupo en cada materia, sin revisar alumno por alumno.

## 3. Entradas y salidas

**Entradas:** mi bloque no pide nada por teclado. Recibe como parámetros:

- Los cuatro arreglos paralelos: `nombres`, `esp`, `mat` y `dp`.
- `total`, que es cuántos alumnos hay registrados.

La función auxiliar `contarAprobados` recibe solo el arreglo de una materia y `total`.

**Salidas:**

- `contarAprobados` **devuelve** un entero: cuántas calificaciones de ese arreglo son aprobatorias.
- `reporteAprobados` **imprime** una línea por materia. No devuelve nada.

Ejemplo con los datos del PDF:

```
--- APROBADOS Y REPROBADOS ---
Espanol: 4 aprobados, 2 reprobados
Matematicas: 4 aprobados, 2 reprobados
Diseno de Programas: 5 aprobados, 1 reprobado
```

Si la lista está vacía, imprime `No hay alumnos registrados.` y termina.

## 4. Decisiones de diseño

**¿Qué funciones tiene tu bloque y qué hace cada una?**

- `contarAprobados(calif, total)`: recorre el arreglo de **una** materia y cuenta cuántas calificaciones son mayores o iguales a 7.0. Regresa ese número. No imprime nada.
- `reporteAprobados(nombres, esp, mat, dp, total)`: es la función que imprime el reporte. Revisa si la lista está vacía, repite el proceso para cada materia, calcula los reprobados e imprime una línea por materia.

Separé las dos funciones para que cada una haga una sola tarea: una cuenta y la otra imprime. Así no repito el ciclo de conteo tres veces.

El arreglo `nombres` se recibe pero no se usa. Lo dejé porque el contrato pide que la función reciba los cuatro arreglos. Su nombre va entre comentarios (`/*nombres*/`) para que el compilador no marque advertencia por un parámetro sin usar.

**¿Qué ciclo usaste y por qué ese?**

Usé `for` en los dos casos, porque en ambos ya sé cuántas vueltas voy a dar:

- En `contarAprobados`, `for (int i = 0; i < total; i++)` recorre a cada alumno, del 0 al `total - 1`.
- En `reporteAprobados`, `for (int m = 0; m < MATERIAS_REPORTE; m++)` da una vuelta por materia (0, 1 y 2).

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

- `aprobados` en `contarAprobados`: es un **contador** que inicia en `0` y suma 1 cada vez que una calificación es 7.0 o más.
- `reprobados` no es contador. Lo calculo como `total - aprobados`, porque quien no aprobó reprobó. Así me ahorro un segundo ciclo.
- `i` y `m` son solo índices de los ciclos.

**¿Dónde está tu decisión múltiple y qué casos cubre?**

Está en `reporteAprobados`, con un `switch (m)`:

- `case 0`: usa el arreglo `esp` y la etiqueta "Espanol".
- `case 1`: usa el arreglo `mat` y la etiqueta "Matematicas".
- `default`: usa el arreglo `dp` y la etiqueta "Diseno de Programas".

Usé `switch` porque las tres opciones dependen de un solo número (`m`). Es más claro que escribir tres `if` seguidos.

**¿Qué constantes definiste y por qué son constantes?**

- `MATERIAS_REPORTE = 3` es mi constante propia: cuántas materias recorre el reporte. Es constante porque el número de materias no cambia mientras corre el programa, y así no escribo un 3 suelto en el ciclo.
- `CALIFICACION_APROBATORIA` (7.0) viene de `registro.h` y es compartida por todo el equipo. La uso para decidir si una calificación aprueba.

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

- **Lista vacía** (`total == 0`): muestra `No hay alumnos registrados.` y sale de la función con `return`, sin imprimir nada más.

Mi bloque no pide datos por teclado, así que no tiene otros rechazos.

## 5. Receta

```
FUNCIÓN contarAprobados(calif, total):
    aprobados ← 0
    PARA i DESDE 0 HASTA total - 1:
        SI calif[i] >= 7.0 ENTONCES
            aprobados ← aprobados + 1
    REGRESAR aprobados

FUNCIÓN reporteAprobados(nombres, esp, mat, dp, total):
    SI total = 0 ENTONCES
        IMPRIMIR "No hay alumnos registrados."
        TERMINAR
    IMPRIMIR encabezado del reporte
    PARA m DESDE 0 HASTA 2:
        SEGÚN m:
            0:    aprobados ← contarAprobados(esp, total)
                  materia ← "Espanol"
            1:    aprobados ← contarAprobados(mat, total)
                  materia ← "Matematicas"
            otro: aprobados ← contarAprobados(dp, total)
                  materia ← "Diseno de Programas"
        reprobados ← total - aprobados
        IMPRIMIR materia, aprobados, reprobados
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

Sí, con los datos del ejemplo del PDF (6 alumnos), contando las calificaciones de 7.0 o más:

| Materia | Calificaciones | Aprobados | Reprobados |
| --- | --- | --- | --- |
| Español | 9, 7, 6, 8, 10, 5 | 4 (9, 7, 8, 10) | 6 - 4 = 2 |
| Matemáticas | 8, 6, 5, 7, 9, 7 | 4 (8, 7, 9, 7) | 6 - 4 = 2 |
| Diseño de Programas | 10, 8, 7, 9, 8, 6 | 5 (10, 8, 7, 9, 8) | 6 - 5 = 1 |

Con la lista vacía, la receta imprime el aviso y termina, sin hacer ninguna cuenta.

Lo que corregí: al comparar mi salida con el ejemplo del PDF vi que con un solo reprobado imprimía "1 reprobados", y el PDF dice "1 reprobado". Agregué un `if` para escribir en singular cuando el número es 1.

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | Mi primera versión usaba un apuntador (`const double* calif`) para elegir el arreglo de cada materia, y no lo habíamos visto en clase. | Lo quité. Ahora el `switch` llama a `contarAprobados` directamente con `esp`, `mat` o `dp`, y no se necesita apuntador. |
| 2 | La salida decía "1 reprobados" cuando solo había un reprobado, y no coincidía con el ejemplo del PDF. | Cambié a un `if` que escribe "reprobado" o "reprobados" según el número. También quité `.c_str()`, porque `cout` imprime un `string` directo. |
| 3 | Error al compilar: `undefined reference to calificacionValida`, `agregarAlumno` y `mostrarLista`. | `registro.h` solo tenía las declaraciones. Escribí el código de las tres funciones debajo de las declaraciones, en el mismo archivo. |
| 4 | Al hacer pull en GitHub Desktop salió "unresolved conflicts" en `main.cpp`: yo y un compañero editamos el mismo archivo. | Abrí el archivo, conservé las dos partes, borré las marcas `<<<<<<<`, `=======` y `>>>>>>>`, compilé y hice commit. |