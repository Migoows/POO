//=============================================================
// --- Libraries ---

#include "Logger.h"
#include <fstream>
#include <iostream>
#include <filesystem>
//=============================================================
// --- Libraries ---

void Logger::log(const std::string& message)
{
    ensureLogDirectory();

    std::ofstream logfile("logs/clock.log", std::ios_base::app);
    if (!logfile.is_open())
    {
        throw std::runtime_error("Unable to open log file");
    }
    logfile << message << std::endl;
}

void Logger::ensureLogDirectory()
{
    std::filesystem::path log_dir("logs");
    if (!std::filesystem::exists(log_dir))
    {
        std::filesystem::create_directory(log_dir);
    }
}
