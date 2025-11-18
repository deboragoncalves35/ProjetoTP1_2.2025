#ifndef IHOSPEDESERVICE_H
#define IHOSPEDESERVICE_H

#include "../entidade/Hospede.h"
#include <vector>

/**
 * @class IHospedeService
 * @brief Interface responsável pelos serviços de Hóspede.
 */
class IHospedeService {
public:
    /**
     * @brief Cadastra um novo hóspede no sistema.
     * @param hospede Instância de Hospede a ser cadastrada.
     */
    virtual void cadastrarHospede(const Hospede&) = 0;

    /**
     * @brief Retorna a lista de todos os hóspedes cadastrados.
     * @return Vetor contendo todos os hóspedes.
     */
    virtual std::vector<Hospede> listarHospedes() const = 0;

    /**
     * @brief Remove um hóspede com base no cartão.
     * @param cartao Instância de Cartao identificando o hóspede.
     */
    virtual void removerHospede(const Cartao&) = 0;

    virtual ~IHospedeService() {}
};

#endif
