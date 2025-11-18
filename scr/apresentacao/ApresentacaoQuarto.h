#ifndef APRESENTACAO_QUARTO_H
#define APRESENTACAO_QUARTO_H

#include "../interfaces/IQuartoService.h"
#include "../entidade/Quarto.h"
#include <iostream>
#include <vector>
#include <stdexcept>

/**
 * @class ApresentacaoQuarto
 * @brief Interface com o usuário para gerenciamento de quartos.
 */
class ApresentacaoQuarto {
private:
    IQuartoService* quartoService; ///< Ponteiro para o serviço de quarto.

public:
    /// @brief Construtor com injeção de dependência.
    explicit ApresentacaoQuarto(IQuartoService* service) {
        this->quartoService = service;
    }

    void cadastrarQuarto();
    void listarQuartos();
    void removerQuarto();
    void executar();
};

#endif
