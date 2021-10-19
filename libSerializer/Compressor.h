#pragma once
/* Il faut compresser :
 *		Integer
 *		Float
 *		Vector3
 *		Quaternion
 */

/* 
 * uint8_t		0 -> 255					1 byte		8  bits 
 * uint16_t		0 -> 65 535					2 bytes		16 bits
 *
 * int			-2147483648 -> 2147483647	4 bytes		32 bits
 */
#include <iostream>
#include <bitset>




class Compressor
{

public : 

	void showFloatToBinary(float f);

	uint16_t compressFloat(float value);
	float decompressFloat(uint16_t value);


	uint16_t compressInt(int value, int minInt, int maxInt);
	int decompressInt(uint16_t value, int minInt, int maxInt);

};

