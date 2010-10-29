/*
	This is just a cheezy, stripped-down version
	of pianobar's main.c.
	I promise, I'll be rewriting it :)
	
	P.S. Why couldn't libpiano be simple like
	pandora_connect(user, password);
*/

// XXX keepin most of the same includes for now
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/select.h>
#include <time.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// LibPiano woo
#include "piano.h"

int main ()
{
	PianoHandle_t ph;
	PianoRequestDataLogin_t reqData;

	PianoInit(&ph);

/*
	// Setup the PianoRequest
	reqData.user=0;
	reqData.password=0;
	reqData.step=0;
	printf("Logging in... ");

	// Complete the... something?
	do
	{
		reqData.data = data;

		*pRet = PianoRequest (ph, &req, type);
		if (*pRet != PIANO_RET_OK) {
			BarUiMsg (MSG_NONE, "Error: %s\n", PianoErrorToStr (*pRet));
			PianoDestroyRequest (&req);
			return 0;
		}

		*wRet = BarPianoHttpRequest (waith, &req);
		if (*wRet != WAITRESS_RET_OK) {
			BarUiMsg (MSG_NONE, "Network error: %s\n", WaitressErrorToStr (*wRet));
			PianoDestroyRequest (&req);
			if (req.responseData != NULL) {
				free (req.responseData);
			}
			return 0;
		}

		*pRet = PianoResponse (ph, &req);
		if (*pRet != PIANO_RET_CONTINUE_REQUEST) {
			if (*pRet != PIANO_RET_OK) {
				BarUiMsg (MSG_NONE, "Error: %s\n", PianoErrorToStr (*pRet));
				PianoDestroyRequest (&req);
				if (req.responseData != NULL) {
					free (req.responseData);
				}
				return 0;
			} else {
				BarUiMsg (MSG_NONE, "Ok.\n");
			}
		}
*/
		/* we can destroy the request at this point, even when this call needs
		 * more than one http request. persistend data (step counter, e.g.) is
		 * stored in req.data */
/*
		if (req.responseData != NULL) {
			free (req.responseData);
		}
		PianoDestroyRequest (&req);
	} while (*pRet == PIANO_RET_CONTINUE_REQUEST);
	return 1;
}

PianoReturn_t PianoRequest (PianoHandle_t *, PianoRequest_t *,
		PianoRequestType_t);

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
