#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {

	setlocale(LC_ALL, "pt_BR.UTF-8");
    wchar_t c;
    wprintf (L"Tabela ASCII (pt_BR.UTC-8)\n");
    for (c = 32; c < 256; c++){
    	if (c == 128)
    		wprintf(L"Tabela ASCII extendida\n");
        wprintf(L"%03d | %lc\n", c, c);
    }
    return 0;
}
