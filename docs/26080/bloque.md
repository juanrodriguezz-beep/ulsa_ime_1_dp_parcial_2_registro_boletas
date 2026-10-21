# Documentación del bloque

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/<matrícula>/bloque.md (por ejemplo, docs/123456/bloque.md)
y llena tu copia.
-->

## 1. Autor

**Nombre:** [Diego Alejandro Gonzalez Cisneros]
**Matrícula:** [26080]
**Bloque y opción elegida:** [Bloque individual de reporte: Materias reprobadas por alumno.]
**Archivo de código:** [include/materias reprobadas.h]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

[El propósito de este bloque es identificar a los alumnos que tienen una o más materias reprobadas y mostrar cuántas materias reprobaron. El programa revisa las calificaciones de Español, Matemáticas y Diseño para determinar cuáles son menores a la calificación mínima aprobatoria. Esto permite conocer qué alumnos necesitan mejorar su desempeño académico y facilita la revisión de sus resultados.]

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

[Entradas: El bloque recibe los nombres de los alumnos, sus calificaciones de Español, Matemáticas y Diseño, y el total de alumnos registrados. Estos datos se reciben mediante parámetros desde el programa principal.

Salidas: El programa muestra el nombre de cada alumno que tiene materias reprobadas, la cantidad de materias que reprobó y el total de alumnos que tienen al menos una materia reprobada. Si no hay alumnos registrados, muestra el mensaje "No hay alumnos registrados".]

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

[El bloque utiliza una función principal llamada materiasReprobadasPorAlumno, que recibe los nombres, las calificaciones de las tres materias y la cantidad de alumnos registrados. Esta función revisa las calificaciones de cada alumno, cuenta las materias reprobadas y muestra los resultados en pantalla.]

**¿Qué ciclo usaste y por qué ese?**

[Se utiliza un ciclo for para recorrer a todos los alumnos registrados. Se eligió porque permite revisar las calificaciones de cada alumno de manera ordenada, desde el primero hasta el último.]

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

[Se utiliza un contador llamado materiasReprobadas, que inicia en 0 para cada alumno. Aumenta en uno cada vez que una de sus calificaciones es menor a la mínima aprobatoria.

También se utiliza el contador alumnosConReprobadas, que inicia en 0 y aumenta cada vez que se encuentra un alumno con al menos una materia reprobada. Este contador permite conocer el total de alumnos que tienen materias pendientes.]

**¿Dónde está tu decisión múltiple y qué casos cubre?**

[En la versión actual del bloque no se utiliza una estructura switch. En su lugar, se utilizan estructuras if para revisar individualmente las calificaciones de Español, Matemáticas y Diseño de Programas. Cada condición comprueba si la calificación es menor a la mínima aprobatoria y, si se cumple, aumenta el contador de materias reprobadas.]

**¿Qué constantes definiste y por qué son constantes?**

[Se utiliza la constante CANTIDAD_MATERIAS, con valor 3, para representar las tres materias que se revisan. Es una constante porque la cantidad de materias evaluadas no cambia durante la ejecución del bloque.

También se utiliza la constante CALIFICACION_APROBATORIA, definida en el archivo registro.h, para establecer la calificación mínima aprobatoria del proyecto.]

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

[Sin alumnos registrados: si la cantidad de alumnos es 0, el programa muestra No hay alumnos registrados. y termina la función para regresar al menú principal.

Alumnos sin materias reprobadas: si un alumno tiene aprobadas las tres materias, no aparece en la lista de alumnos con materias reprobadas.

Alumnos con materias reprobadas: si un alumno tiene al menos una calificación menor a la mínima aprobatoria, se muestra su nombre y la cantidad de materias reprobadas.]

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
[INICIO

Recibir los nombres, las calificaciones de las tres materias
y la cantidad de alumnos registrados.

SI la cantidad de alumnos es 0:
    Mostrar "No hay alumnos registrados."
    Regresar al menú principal.
SI NO:
    Inicializar el contador de alumnos con materias reprobadas en 0.

    PARA cada alumno:
        Inicializar su contador de materias reprobadas en 0.

        Revisar la calificación de Español.
        SI es menor a la mínima aprobatoria:
            Aumentar el contador de materias reprobadas.

        Revisar la calificación de Matemáticas.
        SI es menor a la mínima aprobatoria:
            Aumentar el contador de materias reprobadas.

        Revisar la calificación de Diseño de Programas.
        SI es menor a la mínima aprobatoria:
            Aumentar el contador de materias reprobadas.

        SI el alumno tiene al menos una materia reprobada:
            Mostrar su nombre y la cantidad de materias reprobadas.
            Aumentar el contador de alumnos con reprobadas.

    Mostrar el total de alumnos con materias reprobadas.

FIN]
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

[Se revisó manualmente la lógica del bloque con ejemplos de alumnos que tienen cero, una, dos y tres materias reprobadas. Se comprobó que el contador de materias reprobadas comenzara en cero para cada alumno y que aumentara únicamente cuando una calificación fuera menor a la mínima aprobatoria.

También se verificó que el contador general aumentara solamente cuando un alumno tuviera al menos una materia reprobada. Por último, se consideró el caso en el que no hay alumnos registrados, para evitar que el programa intente revisar información inexistente. Las pruebas finales deben realizarse cuando el proyecto compile correctamente.]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [Cómo identificar cuántas materias reprobó cada alumno.] | [Utilizando un contador que aumenta cuando una calificación es menor a la mínima aprobatoria.] |
| 2 | [Cómo obtener el total de alumnos que tienen materias reprobadas.] | [Utilizando el contador alumnosConReprobadas, que aumenta únicamente cuando un alumno tiene al menos una materia reprobada.] |
| 3 | [Errores de compilación al intentar ejecutar el proyecto.] | [Se identificó que era necesario revisar los errores reportados en otros archivos del proyecto antes de realizar las pruebas finales del bloque.] |
