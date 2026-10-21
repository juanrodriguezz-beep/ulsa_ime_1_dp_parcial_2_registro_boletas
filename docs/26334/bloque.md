# Documentación del bloque

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/<matrícula>/bloque.md (por ejemplo, docs/123456/bloque.md)
y llena tu copia.
-->

## 1. Autor

**Nombre:** Manuel
**Matrícula:** 26334
**Bloque y opción elegida:** estadisticas por materia
**Archivo de código:** include/estadisticas.h

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

El bloque calcula el promedio de Español, Matemàticas y Diseño en programas de los alumnos registrados. Despuès, muestra los promedios por materia e identifica cuàl tiene el promedio màs alto y el màs bajo. 

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

# Documentación del bloque

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/<matrícula>/bloque.md (por ejemplo, docs/123456/bloque.md)
y llena tu copia.
-->

## 1. Autor

**Nombre:** [Inserta aquí tu respuesta]
**Matrícula:** [Inserta aquí tu respuesta]
**Bloque y opción elegida:** [Inserta aquí tu respuesta]
**Archivo de código:** [Inserta aquí tu respuesta]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

[Inserta aquí tu respuesta]

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

*Entradas:*
- Arreglo de nombres de los alumnos.
- Calificaciones de Español.
- Calificaciones de Matemáticas.
- Calificaciones de Diseño de Programas.
- Total de alumnos registrados.

*Salidas:*
- Mensaje de rechazo si no hay alumnos registrados.
- Promedio de cada materia.
- Nombre de la materia con el promedio más alto y con el más bajo.

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

El bloque utiliza la función mostrarEstadisticas(), que recibe los arreglos de nombres y calificaciones, junto con el total de alumnos. Calcula los promedios de las tres materias e identifica cuál tiene el promedio más alto y cuál el más bajo.

**¿Qué ciclo usaste y por qué ese?**

Utilicé un ciclo for para recorrer las calificaciones de todos los alumnos registrados y sumar las notas de cada materia. También se utiliza para comparar los promedios de las materias.

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

Utilicé los acumuladores sumaEspanol, sumaMatematicas y sumaDiseno. Los tres comienzan en 0 y almacenan la suma de las calificaciones de cada materia.

**¿Dónde está tu decisión múltiple y qué casos cubre?**

Utilicé las estructuras switch para mostrar el nombre de la materia con el promedio más alto y el más bajo, según el índice correspondiente a cada materia.

**¿Qué constantes definiste y por qué son constantes?**

Definí la constante CANTIDAD_MATERIAS con valor 3, porque el programa trabaja con tres materias y ese valor no necesita cambiar.

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

Si el total de alumnos es menor o igual a 0, el programa rechaza mostrar las estadísticas e imprime el mensaje: "No hay alumnos registrados."

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
INICIO

1. Recibir los arreglos de nombres y calificaciones de los alumnos, y el total de alumnos registrados.

2. Si el total de alumnos es menor o igual a cero:
   Mostrar "No hay alumnos registrados."
   Terminar la función.

3. Inicializar en cero las sumas de Español, Matemáticas y Diseño de Programas.

4. Recorrer a todos los alumnos registrados:
   Sumar las calificaciones de cada materia en su acumulador correspondiente.

5. Calcular el promedio de cada materia dividiendo su suma entre el total de alumnos.

6. Comparar los promedios para identificar el más alto y el más bajo.

7. Utilizar las estructuras switch para mostrar el nombre de la materia con el promedio más alto y el más bajo.

FIN
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

Todavía no he probado la receta a mano con todos los datos del escenario. La revisaré con las calificaciones de prueba para comprobar que los promedios y las materias identificadas sean correctos.

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | No sabia còmo organizar la documentaciòn del bloque. | Revisè la plantilla y completè cada secciòn. |
| 2 | Tenìa dudas sobre còmo calcular los promedios. | Utilicè acumuladores para sumar las calificaciones y dividì entre el total de alumnos. |
| 3 | No sabia còmo identificar la materia con el promedio màs alto y mas bajo. | Comparè los promedios y utilicè switch para mostrar los nombres. |


