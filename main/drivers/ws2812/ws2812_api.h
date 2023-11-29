#ifndef WS2812_API_H
#define WS2812_API_H

#define COLOR_RED       0
#define COLOR_GREEN     1
#define COLOR_BLUE      2
#define COLOR_NONE      3

void led_init();
void led_indicate(uint8_t color, uint32_t pulse_time, uint8_t repetitions);

#endif //WS2812_API_H