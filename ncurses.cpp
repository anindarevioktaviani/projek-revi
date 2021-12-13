#include <ncurses/ncurses.h>
using namespace std;

int main() {
	initscr();
	
	printw("Hello world \n");
	
	getch();
	endwin();
}
