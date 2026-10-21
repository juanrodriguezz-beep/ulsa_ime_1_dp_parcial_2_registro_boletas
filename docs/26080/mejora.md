# Propuesta de mejora

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/mejoras/<matrícula>/mejora.md (por ejemplo, docs/mejoras/123456/mejora.md)
y llena tu copia.

La propuesta es solo diseño: no se programa.
Puede tocar cualquier parte de la solución del equipo y se resuelve con los temas del parcial.
Dentro de un equipo no puede haber dos propuestas iguales.
-->

Propuesta de mejora elaborada por: [Diego Alejandro Gonzalez Cisneros]

**Matrícula:** [26080]
**Título de la propuesta:** [Ordenamiento de alumnos por promedio]

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

[Esta propuesta es una mejora que agrega una nueva funcionalidad al programa. Consiste en ordenar a los alumnos de acuerdo con su promedio general, de mayor a menor, tomando en cuenta sus calificaciones de Español, Matemáticas y Diseño de Programas.

Actualmente, el programa permite consultar las calificaciones de los alumnos mediante diferentes reportes, pero contar con una lista ordenada por promedio facilitaría identificar rápidamente a los estudiantes con mejor desempeño académico.

Esta mejora beneficiaría a los maestros, ya que podrían consultar los resultados del grupo de una manera más organizada, comparar el rendimiento académico e identificar a los alumnos que destacan por sus calificaciones. También permitiría visualizar con mayor facilidad la posición de cada alumno dentro del grupo.]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

[Para implementar esta mejora, se proponen los siguientes cambios:

Nueva función: se agregaría una función llamada ordenarPromedios, encargada de calcular los promedios de los alumnos, ordenar la información de mayor a menor y mostrar los resultados.

Arreglos auxiliares: se utilizarían arreglos temporales para guardar los nombres, las calificaciones y los promedios de los alumnos. Esto permitiría ordenar los datos sin modificar los registros originales del programa.

Cálculo del promedio: se sumarían las calificaciones de Español, Matemáticas y Diseño de Programas de cada alumno y se dividiría el resultado entre tres.

Método de ordenamiento: se utilizarían ciclos for anidados para comparar los promedios de los alumnos e intercambiar sus posiciones cuando fuera necesario. Al realizar cada intercambio, también se moverían el nombre y las calificaciones correspondientes para mantener relacionados los datos de cada alumno.

Menú principal: se agregaría una nueva opción para consultar el reporte de alumnos ordenados por promedio y se realizaría la llamada correspondiente a la función ordenarPromedios.

Manejo de lista vacía: si no hay alumnos registrados, el programa mostraría el mensaje No hay alumnos registrados. y regresaría al menú principal.

Estos cambios permitirían agregar una nueva forma de consultar el rendimiento académico sin alterar el funcionamiento de los reportes existentes.]

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
[INICIO

Recibir los arreglos de nombres y calificaciones
y la cantidad de alumnos registrados.

[NUEVO] Agregar una opción al menú principal
para consultar los alumnos ordenados por promedio.

[NUEVO] Llamar a la función ordenarPromedios
cuando el usuario seleccione esa opción.

SI la cantidad de alumnos es 0:
    Mostrar "No hay alumnos registrados."
    Regresar al menú principal.
SI NO:
    [NUEVO] Copiar los nombres y las tres calificaciones
    a arreglos auxiliares.

    [NUEVO] PARA cada alumno:
        Sumar las calificaciones de Español,
        Matemáticas y Diseño de Programas.
        Calcular el promedio dividiendo la suma entre 3.
        Guardar el promedio en un arreglo auxiliar.

    [NUEVO] Comparar los promedios mediante ciclos
    para ordenar a los alumnos de mayor a menor.

    [NUEVO] Cuando un promedio sea menor que otro:
        Intercambiar los nombres correspondientes.
        Intercambiar las calificaciones de Español.
        Intercambiar las calificaciones de Matemáticas.
        Intercambiar las calificaciones de Diseño.
        Intercambiar los promedios.

    [NUEVO] Mostrar la lista ordenada con el nombre,
    las tres calificaciones y el promedio general
    de cada alumno.

FIN]
```
