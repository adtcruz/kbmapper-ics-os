/*
	AUTHOR: Anton Dominique Cruz

	PROGRAMME DESCRIPTION:

	KEYBOARD MAPPER UTILITY FOR ICS-OS
	This utility maps each keystroke, or a combination of keystrokes,
	captured by getch() to their integer values. Students or developers
	on the ICS-OS may find this utility nifty if they're working with
	applications that uses getch() or requires intermediate-advanced
	keyboard/keypress handling.

*/

#include "../../sdk/dexsdk.h"

int chr=0, i=6;

int main(int argc, char** argv) {
	clrscr();
	printf("\t\t\t\t\t\tWelcome to the Keyboard mapper utility!\n\n");
	printf("\tInteger code of Ctrl-Q is 16 whilst Ctrl-C does not have any.\n");
	printf("\tPress Ctrl-Q to Quit\n\n");	
	while(1){
		if(i>22){
			clrscr();
			printf("\n\t\t\t\t\t\tWelcome to the Keyboard mapper utility!\n\n");
			printf("\tInteger code of Ctrl-Q is 16 whilst Ctrl-C does not have any.\n");
			printf("\tPress Ctrl-Q to Quit\n\n");
			i=6;
		}
		printf("\tPress any key or a combination of keys (i.e. Ctrl-X) to show\n\ttheir integer value...\n");
		chr = getchar();
		if(chr==16){
			break;
		}
		printf("\tYour keypress has an integer value of %d!\n", chr);
		i=i+4;
	}
	clrscr();
  	return 0;
}