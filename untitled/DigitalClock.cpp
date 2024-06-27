//=================================================================
// --- Class ---

#include "DigitalClock.h"

//=================================================================
// Construtor que inicializa o tempo atual com o tempo do sistema
DigitalClock::DigitalClock()
{
    current_time = std::chrono::system_clock::now();
}

//==================================================================
// Atualiza o tempo atual com o tempo atual do sistema
void DigitalClock::update()
{
    current_time = std::chrono::system_clock::now();
}

//==================================================================
// Exibe o tempo atual no formato HH:MM:SS
void DigitalClock::display() const
{
    std::time_t now_c = std::chrono::system_clock::to_time_t(current_time);
    std::tm now_tm = *std::localtime(&now_c);
    std::cout << std::put_time(&now_tm, "%H:%M:%S") << std::endl;
}
