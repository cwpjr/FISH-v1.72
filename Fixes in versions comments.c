Fixes in versions comments:

This FISH v1.7.2 compiles and downloads.
It's uart rdy code is where it hangs.

That Fish v1.6 runs fine, so started comparing.
Comparing like files with Code Compare tool~!

C:\Users\Clyde W Phillips Jr\Desktop\FISH-v1.72\FISH_STM32F4_UART3_INIT.s
//UART3_INIT: should be renamed. It sets baud rates for the UART's BRR register
//and programs the BRR, determined by system vars DBAUD and UBAUD or a user
//supplied decimal baud rate value.

