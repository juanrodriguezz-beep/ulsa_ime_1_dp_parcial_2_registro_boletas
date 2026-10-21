# Propuesta de mejora

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/mejoras/<matrícula>/mejora.md (por ejemplo, docs/mejoras/123456/mejora.md)
y llena tu copia.

La propuesta es solo diseño: no se programa.
Puede tocar cualquier parte de la solución del equipo y se resuelve con los temas del parcial.
Dentro de un equipo no puede haber dos propuestas iguales.
-->

Propuesta de mejora elaborada por: [Daniel Miranda Ferreira]

**Matrícula:** [26167]
**Título de la propuesta:** [Manejo de nombres repetidos en la boleta individual]

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

[Sería una corrección, actualmente la boleta individual busca el nombre en la lista y se detiene en el primer alumno con ese nombre, en el caso de que haya dos nombres como por ejemplo Ana, solo se mostrara la boleta de la primer Ana y la otra no se podrá consultar,propongo que el programa encuentre todos los alumnos con ese nombre, que nos diga cuales y cuantos son, beneficia a quien este buscando boletas porque así solo tendra que comparar entre aquellos que se llamen igual y evitar buscar en otro lado. ]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

[Arreglo nuevo dentro de boletaIndividual: un arreglo para guardar las posiciones de todos los alumnos que coinciden, en lugar de la sola variable posicion, es necesario porque tener solo una variable  guarda solo un lugar.
Contador nuevo: un contador de coincidencias que inicia en 0 y suma 1 cada vez que el nombre coincide,sirve para saber si no hubo ninguna, hubo una o hubo varias.
Constante: el arreglo de posiciones necesita un tamaño fijo, así que se usa una constante con el máximo de alumnos, si el proyecto ya tiene una, se reutiliza, es constante porque el tamaño de un arreglo no debe de cambiar mientras se corre el programa.
Ciclo de búsqueda: el for sigue siendo el mismo, pero ya no se sale con break al primer alumno encontrado, ahora recorre toda la lista, porque puede haber más coincidencias.
Rechazo de "no encontrado": deja de revisar posicion == -1 y revisa que el contador sea 0, aun así el mensaje es el mismo.
Mostrar la boleta: el cálculo del promedio, las materias reprobadas, la boleta y el switch del estado se repiten por cada posición guardada para mostrar una boleta por cada alumno con ese nombre, se agrega un aviso cuando hay más de un alumno.
No cambio: los parámetros de la función, el rechazo de lista vacía, el switch y el resto del menú del programa.]

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
[Inserta aquí tu respuesta]
```
