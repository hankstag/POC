#include <stdio.h>

typedef struct{
	unsigned int opcode : 16;
}Misc;

typedef struct{
	unsigned int offset : 8;
	unsigned int opcode : 8;
}Branch;

typedef struct{
	unsigned int dst_reg : 3;
	unsigned int dst_mode : 3;
	unsigned int opcode : 11;
}Sgl_op;

typedef struct{
	unsigned int dst_reg : 3;
	unsigned int dst_mode : 3;
	unsigned int src_reg : 3;
	unsigned int src_mode : 3;
	unsigned int opcode : 4;

}Dbl_op;

typedef struct{
	unsigned int dst_reg : 3;
	unsigned int dst_mode : 3;
	unsigned int src_reg : 3;
	unsigned int opcode : 7;
}Reg_src;

typedef union{

	unsigned int addr;
	Misc * mc;
	Branch *br;
	Sgl_op * sg;
	Dbl_op * db;
	Reg_src * rg;

}machine_inst;
int main(void){
	int x = sizeof(machine_inst);
	printf("%d\n",x);
	return 0;
}