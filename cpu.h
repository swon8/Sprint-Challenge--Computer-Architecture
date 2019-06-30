#ifndef _CPU_H_
#define _CPU_H_

// setup basic cpu struct
struct cpu
{
    // PC
    unsigned int PC;
    // FL 
    unsigned int FL;
    // registers
    unsigned char reg[8];
    // ram
    unsigned char ram[256];
};

// ALU operations
enum alu_op
{
    ALU_CMP,
};

// Instructions
#define LDI 0b10000010
#define PRN 0b01000111
#define HLT 0b00000001

#define JMP 0b01010100
#define CMP 0b10100111 
#define JEQ 0b01010101
#define JNE 0b01010110

// Function declarations

extern void cpu_load(struct cpu *cpu, char *filename);
extern void cpu_init(struct cpu *cpu);
extern void cpu_run(struct cpu *cpu);

#endif 