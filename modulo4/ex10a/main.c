#include <stdio.h>

/*#define MASK(v,bit) (v & (1 << bit))*/

#include "count_bits_zero.h"

int main(){
	
	int x = 0x0f0f0f0f;
	int countX = count_bits_zero(x);
	
	printf("O numero %d tem %d bits a zero\n",x,countX);
	
	/*unsigned int x = 0x1;  0b1 */
	/*unsigned int y = 0x1;  0b1 */

	/*printf("%d %d\n",x,y);*/

	/*x = x << 1;  0b10 */
	/*y = y << 3;  0b1000 */
	/*y = y > 1;  0b100 */

	/*printf("%d %d\n",x,y);*/
	
	/*y = y & 0;  0b0 */
	/*printf("%d %d\n",x,y);*/
	
	/*y = y | 0;  0b100 */
	/*printf("%d %d\n",x,y);*/
	
	/*y = y | 1;  0b101 */
	/*printf("%d %d\n",x,y);*/
	
	/*y = y & 1;  0b1 */
	/*printf("%d %d\n",x,y);*/
	
	
	/*unsigned int valor_do_bit_2_de_y MASK(y,2);  y & 0b1000. */
	/*printf("%d %d %d\n",x,y, valor_do_bit_2_de_y);*/
	
	/* Mascara */
	/*   2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0 */
	/*   128  64 32   16  8   4   2   1  */
  return 0;
}


