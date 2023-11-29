#include <windows.h>
#include <tchar.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>


using namespace std;

int main() {
	system("netsh interface ip set address \"Ethernet\" static 10.0.0.1 255.255.255.0 192.168.11.250 1");
	system("netsh interface ip add dns \"Ethernet\" 8.8.8.8");
	system("netsh interface ip add dns \"Ethernet\" 8.8.4.4 index=2");
	return 0;
}




