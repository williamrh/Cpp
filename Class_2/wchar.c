#include <iostream>	//for wcout
#include <cstdlib>
using namespace std;

int main()
{
	for (wchar_t wc = 0; wc <= 256; ++wc) {
		wcout << wc;
	}
	wcout << L"\n";

	wcout << L"A char occupies " << sizeof (char) << L" byte(s).\n"
		<< L"On my platform, a wchar_t occupies " << sizeof (wchar_t)
		<< L" byte(s).\n";

	return EXIT_SUCCESS;
}
