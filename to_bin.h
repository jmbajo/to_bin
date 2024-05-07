#include <stdbool.h>

/**
 * @brief 
 * @param data Puntero al buffer de datos o estructura para mostrar.
 * @param length Longitud en bytes del dato a mostrar.
 * @param sep 1 si se desea mostrar un separador cada 8 bits, 0 caso contrario
 * @param rev 1 si se desea mostrar los bytes en orden inverso, para arquitecturas Little Endian se recomienda el valor 1.
 * @return Cadena de caracteres formada por 0s y 1s de acuerdo a la representación.
 */
char* to_binary_string(void* data, unsigned int length, bool sep, bool rev);

/**
 * @param n Valor de tipo entero para mostrar.
 * @return Cadena de caracteres formada por 0s y 1s de acuerdo a la representación.
 */
char* int_to_bin(int n);

/**
 * @param n Valor de tipo entero no signado para mostrar.
 * @return Cadena de caracteres formada por 0s y 1s de acuerdo a la representación.
 */ 
char* u_int_to_bin(unsigned int n);

/**
 * @param n Valor de tipo entero largo para mostrar.
 * @return Cadena de caracteres formada por 0s y 1s de acuerdo a la representación.
 */
char* long_to_bin(long n);

/**
 * @param n Valor de tipo entero largo no signado para mostrar.
 * @return Cadena de caracteres formada por 0s y 1s de acuerdo a la representación.
 */
char* u_long_to_bin(unsigned long n);

/**
 * @param n Valor de tipo entero largo.
 * @return Cadena de caracteres formada por 0s y 1s de acuerdo a la representación.
 */
char* long_long_to_bin(long long n);

/**
 * @param n Valor de tipo entero largo no signado para mostrar.
 * @return Cadena de caracteres formada por 0s y 1s de acuerdo a la representación.
 */
char* u_long_long_to_bin(unsigned long long n);

/**
 * @param n Valor de tipo punto flotante de precisión simple para mostrar.
 * @return Cadena de caracteres formada por 0s y 1s de acuerdo a la representación.
 */
char* float_to_bin(float n);

/**
 * @param n Valor de tipo punto flotante de precisión doble para mostrar.
 * @return Cadena de caracteres formada por 0s y 1s de acuerdo a la representación.
 */
char* double_to_bin(double n);




