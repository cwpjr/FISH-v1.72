// FISH_STM32F4_Peripheral_Register_ADDRS.h
// Valid in v1.7 and above
// FISH_STM32F4_Peripheral_Register_ADDRS in C:\Users\cwpjr\Dropbox\CWP\FISH IAR\FISH_RM_COMMON\FISH_RM_CONFIG_#DEFINES.h

// Conditional used in FISH_STM32F4_IAR.s to modify last dictionary link
// to include these constant definitions

//=============================== WORDCAT ====================================//
//NOEXEC HEADERFORWORDCATEGORIES
//	WC_FISH_SYS: = FISH System: CATEGORY

 SECTION .text : CONST (2)
WC_FISH_Peripheral_REG_ADDR_GPIO:
	DC8	0x80+4+13
        DC8     0x0D, 0x0A
	DC8	'GPIO Registers:'
        DC8     0x0D, 0x0A+0x80
 ALIGNROM 2,0xFFFFFFFF
	DC32	0	// 0 START OF DICTIONARY = Last word in search


