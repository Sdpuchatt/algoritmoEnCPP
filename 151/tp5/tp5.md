Trabajo Práctico Nº 5 Sergio Daniel Puchatt
Marco Teórico:
1. Escribir y explicar la secuencia de codigo de recorrido de Arrays con Centinela.
El recorrido de un array lo haces con un bucle si pones un centinela cuando en el bucle llegue al centinela saldra del bucle.

string nombres [10];
nombre [0] = “Sergio”
nombre [1] = “Juan”
nombre [...] = “...”
nombre[9] = “x”
int i = 0;
while (nombre[i] != “x”){
	cout << nombre[i] << endl;
}

2. Escribir y explicar la secuencia de codigo de Búsqueda un Arrays.
La busqueda es muy parecida al centinela. Debe tener mas condiciones, que cuando llegue al centinela corte el bucle o cuando encuentre el elemento buscado. Lo que consiga primero. Pero se debe preguntar while(array[i] != centinela && elementoBuscado != array[i])

3. ¿Que entiende por Arrays Multidimensionales?
array multidimensionales se refiere a un array de mas de una dimension, puede ser un ejemplo inr array [x][y] o int array [x][y][z] a mas dimensiones.

4. Dar un ejemplo de Arrays multimensional en Código (definición e inicializacion)
char sillasDeCine [10][10];
for(int i = 0; i< 10; i++){
for(int j = 0; j< 10; j++){
 	sillasDeCine [ i ][ j ] = ‘_’	
}	
}
void ocuparButaca(fila, columna){
	sillaDeCine[fila][columna] = ‘x’
}

5. Como se recorre un Arrays multimensonal, dar un ejemplo de Código.
Para recorrer un array multidimensional primero hay que saber de cuantas dimensiones es. Por cada dimension se genera un bucle, por ejemplo si el array es de dos dimensiones el codigo seria:

for(int i = 0; i< 10; i++){
for(int j = 0; j< 10; j++){
 	cout << otroArray[ i ][ j ] ;
}	
}
