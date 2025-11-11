#ifndef IHOSPEDESERVICE_H
#define IHOSPEDESERVICE_H

#include "../entidade/Hospede.h"
#include <vector>

/**
 * @brief Interface responsável pelos serviços de Hóspede.
 */
class IHospedeService {
public:
    /**
     * @brief Adiciona um novo hóspede ao sistema.
     * @param hospede Instância de Hospede a ser adicionada.
     */
    virtual void adicionarHospede(const Hospede&) = 0;

    /**
     * @brief Retorna a lista de todos os hóspedes cadastrados.
     * @return Vetor contendo todos os hóspedes.
     */
    virtual std::vector<Hospede> listarHospedes() const = 0;

    /**
     * @brief Remove um hóspede com base no e-mail.
     * @param email Instância de Email identificando o hóspede.
     */
    virtual void removerHospede(const Email&) = 0;

    virtual ~IHospedeService() {}
};

#endif
