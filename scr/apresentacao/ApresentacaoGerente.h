#ifndef APRESENTACAO_GERENTE_H
#define APRESENTACAO_GERENTE_H

#include "../interfaces/IGerenteService.h"
#include "../entidade/Gerente.h"
#include <iostream>
#include <vector>
#include <stdexcept>

class ApresentacaoGerente {
private:
    IGerenteService* gerenteService;

public:
    explicit ApresentacaoGerente(IGerenteService* service) {
        this->gerenteService = service;
    }

    void cadastrarGerente();
    void listarGerentes();
    void removerGerente();
    void executar();
};

#endif
