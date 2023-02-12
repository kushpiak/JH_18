#include "message_handler_libs.h"

int main()
{
    // проверка кодеров и декодеров поотдельности
    coder();
    decodeblock();
    // тестирование как в message_handler_libs : проверка нарезки и всего в сборе в чсати декодера
    decodereal();

    return EXIT_SUCCESS;
}
