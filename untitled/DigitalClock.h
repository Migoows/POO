//===============================================================
// --- Classe ---

#ifndef DIGITALCLOCK_HPP
#define DIGITALCLOCK_HPP

//================================================================
// --- Bibliotecas ---

#include "Clock.h"
#include <chrono>
#include <iostream>
#include <iomanip>
#include <ctime>

//===============================================================
// Classe que implementa um relógio digital, derivada de Clock
class DigitalClock : public Clock
{
private:
    // Mantém o tempo atual
    std::chrono::time_point<std::chrono::system_clock> current_time;

public:
    // Construtor para inicializar o tempo atual
    DigitalClock();

    // Metodo para atualizar o tempo atual
    void update() override;

    // Metodo para exibir o tempo atual
    void display() const override;
};

#endif // DIGITALCLOCK_HPP
