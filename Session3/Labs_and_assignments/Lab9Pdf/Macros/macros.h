

#define SET_BIT(REG,Bit_Num)  ((REG) |=(1<<(Bit_Num)))
#define CLEAR_BIT(REG,Bit_Num) ((REG) &=(~(1<<Bit_Num)))
#define ToGGLE_BIT(REG,Bit_Num) ((REG) ^=(1<<(Bit_Num)))