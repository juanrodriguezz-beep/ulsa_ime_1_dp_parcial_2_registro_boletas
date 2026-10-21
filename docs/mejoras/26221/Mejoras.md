# Propuesta de mejora

Propuesta de mejora elaborada por: Juan Antonio Rodriguez Zuñiga

**Matrícula:** 26221
**Título de la propuesta:** Rechazar nombres repetidos al capturar un alumno

## 1. Impacto

Es una **corrección**.

Hoy el programa deja capturar dos alumnos con el mismo nombre. El problema aparece en la boleta individual: busca por nombre y se detiene en el primero que encuentra, así que el segundo alumno con ese nombre nunca se puede consultar. Además, la boleta le muestra al usuario las calificaciones de otra persona sin avisarle.

Con la corrección, cada nombre queda único en la lista. Beneficia a quien consulta boletas, porque siempre ve al alumno que buscó, y al equipo, porque la búsqueda queda bien definida sin tener que cambiarla.

## 2. Qué implica en el diseño

- **`registro.h` (base común), función nueva `nombreRepetido`.** Recibe el arreglo de nombres, el total y el nombre a revisar, y regresa verdadero si ya existe. La pongo en la base común porque revisar los datos guardados es tarea de quien guarda, y así otros bloques pueden usarla. Cada función hace una sola tarea, igual que las demás.
- **`captura.h`, función `capturarAlumno`.** La condición del ciclo que pide el nombre cambia: además de repetir mientras esté vacío, repite mientras ya exista. Reutilizo el mismo ciclo y no agrego otro, para no complicar la captura.
- **Mensaje nuevo de rechazo:** `Ya existe un alumno con ese nombre.` Dice claro qué pasó y se pide el nombre otra vez, igual que los demás rechazos.
- **Comparación exacta.** "Ana" y "ana" cuentan como nombres distintos, igual que en la boleta individual, que ya compara exacto. Así las dos partes se comportan igual.
- **No cambian** los arreglos, las constantes, el menú ni los demás bloques. El escenario obligatorio usa 6 nombres distintos, así que el cálculo a mano del README sigue igual. Solo se agrega un rechazo más que se puede mostrar en la exposición.

## 3. Receta

```
FUNCIÓN nombreRepetido(nombres, total, nombre):                 [NUEVO]
    PARA i DESDE 0 HASTA total - 1:                             [NUEVO]
        SI nombres[i] = nombre ENTONCES                         [NUEVO]
            REGRESAR verdadero                                  [NUEVO]
    REGRESAR falso                                              [NUEVO]

FUNCIÓN capturarAlumno(nombres, esp, mat, dp, total):
    SI total >= MAX_ALUMNOS ENTONCES
        IMPRIMIR "La lista esta llena (6 alumnos)."
        REGRESAR total
    nombre ← leerCadena("Nombre: ")
    MIENTRAS nombre está vacío O nombreRepetido(nombres, total, nombre):   [CAMBIA]
        SI nombre está vacío ENTONCES
            IMPRIMIR "El nombre no puede quedar vacio."
        SI NO                                                   [NUEVO]
            IMPRIMIR "Ya existe un alumno con ese nombre."      [NUEVO]
        nombre ← leerCadena("Nombre: ")
    PARA i DESDE 0 HASTA 2:
        calif[i] ← pedirCalificacion(i)
    total ← agregarAlumno(nombres, esp, mat, dp, total, nombre, calif[0], calif[1], calif[2])
    IMPRIMIR "Alumno", total, "registrado."
    REGRESAR total
```