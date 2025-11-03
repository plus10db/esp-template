#include <esp_console.h>

#include <lt-now.h>

esp_console_repl_t* init_repl();

extern "C" void app_main(void)
{
    init_repl();

    lt_init_espnow();
}
