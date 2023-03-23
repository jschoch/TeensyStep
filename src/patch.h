#pragma once

#if defined(ESP32)

void digitalToggle(int i){
    digitalWrite(i, !digitalRead(i));
}

static inline uint32_t dwt_getCycles(void)
{
  //;;return (DWT->CYCCNT);
  return 0;
};
#endif
