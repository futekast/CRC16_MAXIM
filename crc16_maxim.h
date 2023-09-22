
//------------------------------------------------------------------------------ 
// 	Function Name:		CRC16 Maxim Table
// 	Description: 		This subroutine contains the crc table required
//						for the crc16 Maxim calculation.
// 	Parameters:	 		None
// 	Returns: 			None
//------------------------------------------------------------------------------
extern uint16_t const crcTable[256];

//------------------------------------------------------------------------------ 
// 	Function Name:		CRC16 Maxim Function
// 	Description: 		This subroutine computes the CRC16 Maxim for the data buffer.
// 	Parameters:	 		initialVal:		0x0000
// 						buffer:			Data pointer
//						length:			Number of bytes in the buffer 	
// 	Returns: 			The updated CRC value
//------------------------------------------------------------------------------
uint16_t crc16Maxim(uint16_t initialVal, const uint8_t *buffer, size_t length);

static inline uint16_t crc16Byte(uint16_t crc, const uint8_t data) {
    return (crc >> 8) ^ crcTable[(crc^data) & 0xFF];
}