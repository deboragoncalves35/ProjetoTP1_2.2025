#ifndef APRESENTACAO_RESERVA_H
#define APRESENTACAO_RESERVA_H

#include "../interfaces/IReservaService.h"
#include "../entidade/Reserva.h"
#include <iostream>
#include <vector>
#include <stdexcept>

class ApresentacaoReserva {
private:
    IReservaService* reservaService;

public:
    explicit ApresentacaoReserva(IReservaService* service) {
        this->reservaService = service;
    }

    void cadastrarReserva();
    void listarReservas();
    void removerReserva();
    void executar();
};

#endif
