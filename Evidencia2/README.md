## Descripción
El código se probó utulizando el editor de texto en línea Repl.it
Atividad integradora de Carlos Davalos. Aquí puedes encontar datos sobre las emisiones de cárbono que producen los países durante un año a lo largo de la historia. Tiene un tamaño de cuatro columnas (país, código del país, año y emisiones totales) y 20,853 entradas. El usuario puede imprimir en consola toda la tabla o una porción de ella ingresando un rango; puede ordenar la tabla o una porción de ella, en base a una de las cuatro variables disponibes (entidad, el código, año y emisiones totales); y buscar cualquier valor en la tabla.

## Complejidad del código
El programa usa dos estructuras fundamentales, lista doblemente ligada para almacenar los datos en forma de una matriz de cadenas, y árbol binario que se usa únicamente para buscar valores. Para ordenar la matriz, se utiliza el Bubble Sort. Este no es el más eficiente, sin embargo se decidió usar este porque la longitud de la tabla no es de tamaño considerado para que la eficiencia juegue un papel fundamental, y estos algoritmos son mucho más fácilesde implementar y de leer, por lo que se le dio prioridad a esto, en vez de algoritmos que resulvan la tarea un poco más rápido.

#### Bubble Sort
La complejidad temporal de este algoritmo es menor que cuadrática. Sin embargo, contemplamos que para el peor de los casos la complejidad se redondea a cuadrática, O(n^2). 

#### Sequential Search (Binary Search Tree)
La complejida temporal de la función es logarítmica para el promedio de los casos, porque por cada iteración, el algoritmo descarta la mitad de los valores. Sin embargo, se puede dar el caso de que el árbol se haya creado de forma degenerada, y eso aumentaría el tiempo de búsqueda a O(n).

#### Add Word (Trie Tree)
La función insert() recibe como parámetro un string que contenga una palabra y esta será añadida al Trie. Cada caracter de la palabra será almacenada en un nodo del árbol. Si el caracter en una posición i es igual al character de otra palabra entonces compartirán nodo y en cuanto el caracter difiera, se realizará una ramificación del árbol con el nuevo character. La complejidad temporal para hacer una inserción dependerá del tamaño de la palabra que será tomará un tiempo lieal o O(n). Para agregar una nueva palabra al Trie, lo que se hace es recorrer cada caracter de la palabra y en cada iteración guarda el primer caracter del string en el nodo y pasará el resto de la palara para que se añadan en los siguientes nodos. 

### Complejidad de otras funciones

#### Lectura de datos
Leer los datos tiene una complejidad temporal lineal en todos los casos, o O(n), porque tiene que recorrer todo los caracteres del archivo para guardarlos. Lo mismo para la complejidad espacial.

#### Desplegar datos
De igual manera, tiene una complejidad temporal lineal para el peor de los casos, O(n), porque recorre toda la tabla. 

## Casos de prueba
