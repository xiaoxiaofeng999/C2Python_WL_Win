//#include "yei_threespace_basic_utils.h"
//Due to time I had to do it this way but if you understand the UNICODE this function isnt necessary 
HANDLE COMselect(int COM) {
	if (COM == 1) {
		return openAndSetupComPort(TEXT("\\\\.\\COM1"));
	}
	else if (COM == 2) {
		return openAndSetupComPort(TEXT("\\\\.\\COM2"));
	}
	else if (COM == 3) {
		return openAndSetupComPort(TEXT("\\\\.\\COM3"));
	}
	else if (COM == 4) {
		return openAndSetupComPort(TEXT("\\\\.\\COM4"));
	}
	else if (COM == 5) {
		return openAndSetupComPort(TEXT("\\\\.\\COM5"));
	}
	else if (COM == 6) {
		return openAndSetupComPort(TEXT("\\\\.\\COM6"));
	}
	else if (COM == 7) {
		return openAndSetupComPort(TEXT("\\\\.\\COM7"));
	}
	else if (COM == 8) {
		return openAndSetupComPort(TEXT("\\\\.\\COM8"));
	}
	else if (COM == 9) {
		return openAndSetupComPort(TEXT("\\\\.\\COM9"));
	}
	else if (COM == 10) {
		return openAndSetupComPort(TEXT("\\\\.\\COM10"));
	}
	else if (COM == 11) {
		return openAndSetupComPort(TEXT("\\\\.\\COM11"));
	}
	else if (COM == 12) {
		return openAndSetupComPort(TEXT("\\\\.\\COM12"));
	}
	else if (COM == 13) {
		return openAndSetupComPort(TEXT("\\\\.\\COM13"));
	}
	else if (COM == 14) {
		return openAndSetupComPort(TEXT("\\\\.\\COM14"));
	}
	else if (COM == 15) {
		return openAndSetupComPort(TEXT("\\\\.\\COM15"));
	}
	else if (COM == 16) {
		return openAndSetupComPort(TEXT("\\\\.\\COM16"));
	}
	else if (COM == 17) {
		return openAndSetupComPort(TEXT("\\\\.\\COM17"));
	}
	else if (COM == 18) {
		return openAndSetupComPort(TEXT("\\\\.\\COM18"));
	}
	else if (COM == 19) {
		return openAndSetupComPort(TEXT("\\\\.\\COM19"));
	}
	else if (COM == 20) {
		return openAndSetupComPort(TEXT("\\\\.\\COM20"));
	}


}




