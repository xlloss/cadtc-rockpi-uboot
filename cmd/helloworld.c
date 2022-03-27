/*
 * slash.linux.c@gmail.com
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <command.h>
#include <version.h>
#include <linux/compiler.h>
#ifdef CONFIG_SYS_COREBOOT
#include <asm/arch/sysinfo.h>
#endif


static int do_helloworld(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	printf("This is uboot HelloWorld Command Sample\r\n");

	/* add your code start in here */

	return 0;
}

U_BOOT_CMD(
	hellowold,	1,		1,	do_helloworld,
	"show helloworld, command HelloWorld sample",
	""
);
