/*==============================================================

                     Projeto de P.O.O
                     Aluno: Miguel Corales
                     Data: 28/06/2024

==============================================================*/
/*============================================================
                    Relógio digital em C++
==============================================================*/
//=============================================================
// --- Libraries ---

#include "DigitalClock.h"
#include "Logger.h"
#include <iostream>
#include <thread> // Necessário para std::this_thread::sleep_for

//=============================================================
// --- Main Function ---
int main()
{
    DigitalClock clock;
    Logger logger;

    try
    {
//==============================================================
// Registra uma mensagem indicando que o relógio foi iniciado

        logger.log("Clock started.");

//===============================================================
// Loop principal do relógio
        while (true)
        {
            clock.update();                                               // Atualiza o tempo atual do relógio
            clock.display();                                              // Exibe o tempo atual no console
            std::this_thread::sleep_for(std::chrono::seconds(1)); // Aguarda 1 segundo
        }
    } catch (const std::exception& e)
    {

     // Captura e exibe qualquer exceção, registrando-a no log

        std::cerr << "Error: " << e.what() << std::endl;
        logger.log(std::string("Error: ") + e.what());
    }

    return 0;

}// End main


































