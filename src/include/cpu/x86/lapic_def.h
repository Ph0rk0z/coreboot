#ifndef CPU_X86_LAPIC_DEF_H
#define CPU_X86_LAPIC_DEF_H

#define LAPIC_BASE_MSR 0x1B
#define LAPIC_BASE_MSR_BOOTSTRAP_PROCESSOR (1 << 8)
#define LAPIC_BASE_MSR_ENABLE (1 << 11)
#define LAPIC_BASE_MSR_ADDR_MASK 0xFFFFF000

#define LAPIC_DEFAULT_BASE 0xfee00000

#define LAPIC_ID		0x020
#define LAPIC_LVR	0x030
#define	LAPIC_TASKPRI	0x80
#define		LAPIC_TPRI_MASK		0xFF
#define LAPIC_ARBID	0x090
#define	LAPIC_RRR	0x0C0
#define LAPIC_SVR	0x0f0
#define LAPIC_SPIV	0x0f0
#define 	LAPIC_SPIV_ENABLE  0x100
#define LAPIC_ESR	0x280
#define		LAPIC_ESR_SEND_CS	0x00001
#define		LAPIC_ESR_RECV_CS	0x00002
#define		LAPIC_ESR_SEND_ACC	0x00004
#define		LAPIC_ESR_RECV_ACC	0x00008
#define		LAPIC_ESR_SENDILL	0x00020
#define		LAPIC_ESR_RECVILL	0x00040
#define		LAPIC_ESR_ILLREGA	0x00080
#define LAPIC_ICR 	0x300
#define		LAPIC_DEST_SELF		0x40000
#define		LAPIC_DEST_ALLINC	0x80000
#define		LAPIC_DEST_ALLBUT	0xC0000
#define		LAPIC_ICR_RR_MASK	0x30000
#define		LAPIC_ICR_RR_INVALID	0x00000
#define		LAPIC_ICR_RR_INPROG	0x10000
#define		LAPIC_ICR_RR_VALID	0x20000
#define		LAPIC_INT_LEVELTRIG	0x08000
#define		LAPIC_INT_ASSERT		0x04000
#define		LAPIC_ICR_BUSY		0x01000
#define		LAPIC_DEST_LOGICAL	0x00800
#define		LAPIC_DM_FIXED		0x00000
#define		LAPIC_DM_LOWEST		0x00100
#define		LAPIC_DM_SMI		0x00200
#define		LAPIC_DM_REMRD		0x00300
#define		LAPIC_DM_NMI		0x00400
#define		LAPIC_DM_INIT		0x00500
#define		LAPIC_DM_STARTUP		0x00600
#define		LAPIC_DM_EXTINT		0x00700
#define		LAPIC_VECTOR_MASK	0x000FF
#define LAPIC_ICR2	0x310
#define		GET_LAPIC_DEST_FIELD(x)	(((x)>>24)&0xFF)
#define		SET_LAPIC_DEST_FIELD(x)	((x)<<24)
#define LAPIC_LVTT	0x320
#define LAPIC_LVTPC	0x340
#define LAPIC_LVT0	0x350
#define		LAPIC_LVT_TIMER_BASE_MASK	(0x3<<18)
#define		GET_LAPIC_TIMER_BASE(x)		(((x)>>18)&0x3)
#define		SET_LAPIC_TIMER_BASE(x)		(((x)<<18))
#define		LAPIC_TIMER_BASE_CLKIN		0x0
#define		LAPIC_TIMER_BASE_TMBASE		0x1
#define		LAPIC_TIMER_BASE_DIV		0x2
#define		LAPIC_LVT_TIMER_PERIODIC		(1<<17)
#define		LAPIC_LVT_MASKED			(1<<16)
#define		LAPIC_LVT_LEVEL_TRIGGER		(1<<15)
#define		LAPIC_LVT_REMOTE_IRR		(1<<14)
#define		LAPIC_INPUT_POLARITY		(1<<13)
#define		LAPIC_SEND_PENDING		(1<<12)
#define		LAPIC_LVT_RESERVED_1		(1<<11)
#define		LAPIC_DELIVERY_MODE_MASK		(7<<8)
#define		LAPIC_DELIVERY_MODE_FIXED	(0<<8)
#define		LAPIC_DELIVERY_MODE_NMI		(4<<8)
#define		LAPIC_DELIVERY_MODE_EXTINT	(7<<8)
#define		GET_LAPIC_DELIVERY_MODE(x)	(((x)>>8)&0x7)
#define		SET_LAPIC_DELIVERY_MODE(x,y)	(((x)&~0x700)|((y)<<8))
#define			LAPIC_MODE_FIXED		0x0
#define			LAPIC_MODE_NMI		0x4
#define			LAPIC_MODE_EXINT		0x7
#define LAPIC_LVT1	0x360
#define LAPIC_LVTERR	0x370
#define	LAPIC_TMICT	0x380
#define	LAPIC_TMCCT	0x390
#define	LAPIC_TDCR	0x3E0
#define		LAPIC_TDR_DIV_TMBASE	(1<<2)
#define		LAPIC_TDR_DIV_1		0xB
#define		LAPIC_TDR_DIV_2		0x0
#define		LAPIC_TDR_DIV_4		0x1
#define		LAPIC_TDR_DIV_8		0x2
#define		LAPIC_TDR_DIV_16		0x3
#define		LAPIC_TDR_DIV_32		0x8
#define		LAPIC_TDR_DIV_64		0x9
#define		LAPIC_TDR_DIV_128	0xA

#endif /* CPU_X86_LAPIC_DEF_H */
