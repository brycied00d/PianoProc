#define _POSIX_C_SOURCE 1 /* fileno() */
#define _BSD_SOURCE /* strdup() */

/* system includes */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/select.h>
#include <time.h>
#include <ctype.h>
/* open () */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/* tcset/getattr () */
#include <termios.h>
#include <pthread.h>
#include <assert.h>

/* pandora.com library */
#include <piano.h>

//#include "list_stations.h"
//#include "terminal.h"
#include "config.h"
//#include "ui.h"
//#include "ui_act.h"
//#include "ui_readline.h"

int main (int argc, char **argv) {
	PianoHandle_t ph;
	PianoInit (&ph);

/*
	WaitressInit (&app.waith);
	strncpy (app.waith.host, PIANO_RPC_HOST, sizeof (app.waith.host)-1);
	strncpy (app.waith.port, PIANO_RPC_PORT, sizeof (app.waith.port)-1);

	BarSettingsInit (&app.settings);
	BarSettingsRead (&app.settings);

	printf("Welcome to " PACKAGE " (" VERSION ")! "
			"Press %c for a list of commands.\n",
			app.settings.keys[BAR_KS_HELP]);

	if (app.settings.username == NULL) {
		printf("No username set.\n");
		exit(1);
	}
	if (app.settings.password == NULL) {
		printf("No password set.\n");
		return 1;
	}

	{
		PianoReturn_t pRet;
		WaitressReturn_t wRet;
		PianoRequestDataLogin_t reqData;
		reqData.user = app.settings.username;
		reqData.password = app.settings.password;
		reqData.step = 0;
		printf("Logging in... ");
		if (!BarUiPianoCall (&app.ph, PIANO_REQUEST_LOGIN, &app.waith,
				&reqData, &pRet, &wRet)) {
			printf("ERROR!\n");
			return 1;
		}
	}

	{
		PianoReturn_t pRet;
		WaitressReturn_t wRet;

		printf("Get stations... ");
		if (!BarUiPianoCall (&app.ph, PIANO_REQUEST_GET_STATIONS, &app.waith,
				NULL, &pRet, &wRet)) {
			printf("ERROR!\n");
			return 1;
		}
	}

*/
	/* no autostart? ask the user */
	// app.curStation = BarUiSelectStation (&app.ph, "Select station: ", app.settings.sortOrder, stdin);
	// BarUiPrintStation (app.curStation);

	PianoDestroy (&ph);

	return 0;
}
