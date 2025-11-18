#ifndef APRESENTACAO_HOSPEDE_H
#define APRESENTACAO_HOSPEDE_H

#include "../interfaces/IHospedeService.h"
#include "../entidade/Hospede.h"
#include <iostream>
#include <vector>
#include <stdexcept>

class ApresentacaoHospede {
private:
    IHospedeService* hospedeService;

public:
    explicit ApresentacaoHospede(IHospedeService* service) {
        this->hospedeService = service;
    }

    void cadastrarHospede();
    void listarHospedes();
    void removerHospede();
    void executar();
};

#endif
