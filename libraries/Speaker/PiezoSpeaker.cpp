#include "PiezoSpeaker.h"
#include <NewTone.h>

PiezoSpeaker::PiezoSpeaker()
{
	outputPin = -1;
}

PiezoSpeaker::PiezoSpeaker(int iPin)
{
	outputPin = iPin;
}

void PiezoSpeaker::playTone(float pitch, float duration)
{
	if (0 > outputPin)
	{
		return;
	}
	NewTone(outputPin, MIN_FREQUENCY + (pitch * (MAX_FREQUENCY - MIN_FREQUENCY)), duration * 1000);
}