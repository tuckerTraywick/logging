#include "logging.h"

int main(void) {
	logDebugOutput = stdout;
	logInfoOutput = stdout;
	logWarningOutput = stdout;
	logErrorOutput = stderr;

	logInfo("some information");
	logfDebug("some debug info: %d, %d", 1, 2);
	logWarning("a warning");
	putsInfo("some unformated info\n");
	logError("an error");
	return 0;
}
