#if defined(ESP32)
#include "TimerField.h"
TF_Handler* TimerField::handler;
portMUX_TYPE TimerField::timerMux = portMUX_INITIALIZER_UNLOCKED;
#endif
