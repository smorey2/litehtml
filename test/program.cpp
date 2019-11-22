#include "litehtml.h"

extern const litehtml::tchar_t master_css[] =
{
#include "master.css.inc"
,0
};

void contextTest();
void cssTest();
void documentTest();
void media_queryTest();
void web_colorTest();
void nodeTest();
void api_ConsoleTest();
void api_DocumentFragmentTest();
void api_DocumentImplementationTest();
void api_DocumentTest();
void api_DocumentTypeTest();
void api_ElementTest();
void api_GeolocationTest();
void api_HistoryTest();
void api_HTMLCollectionTest();
void api_LocationTest();
void api_MediaQueryTest();
void api_NavigationTest();
void api_RectTest();
void api_ScreenTest();
void api_StorageTest();
void api_StyleTest();
void api_WindowTest();

#if _HASPAUSE
#define mainPause(fmt) { printf(fmt"\n"); char c; scanf("%c", &c); }
#else
#define mainPause(fmt) { printf(fmt"\n"); }
#endif

int main(int argc, char **argv) {
	int testId = argv[1] ? atoi(argv[1]) : 6;
	// Launch test
	switch (testId) {
	case 0: mainPause("Press any key to continue."); break;

	case 1: contextTest(); break;
	case 2: cssTest(); break;
	case 3: documentTest(); break;
	case 4: media_queryTest(); break;
	case 5: web_colorTest(); break;
	case 6: nodeTest(); break;

	case 11: api_ConsoleTest(); break;
	case 12: api_DocumentFragmentTest(); break;
	case 13: api_DocumentImplementationTest(); break;
	case 14: api_DocumentTest(); break;
	case 15: api_DocumentTypeTest(); break;
	case 16: api_ElementTest(); break;
	case 17: api_GeolocationTest(); break;
	case 18: api_HistoryTest(); break;
	case 19: api_HTMLCollectionTest(); break;
	case 20: api_LocationTest(); break;
	case 21: api_MediaQueryTest(); break;
	case 22: api_NavigationTest(); break;
	case 23: api_RectTest(); break;
	case 24: api_ScreenTest(); break;
	case 25: api_StorageTest(); break;
	case 26: api_StyleTest(); break;
	case 27: api_WindowTest(); break;
	
	default: mainPause("Unknown test."); break;
	}
	return 0;
}