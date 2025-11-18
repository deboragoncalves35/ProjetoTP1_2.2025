#ifndef IHOSPEDESERVICE_H
#define IHOSPEDESERVICE_H

#include "../entidade/Hospede.h"
#include <vector>

/**
<<<<<<< HEAD
 * @class IHospedeService
=======
>>>>>>> 3413608363aa6f19fd855a1da7f418812a411103
 * @brief Interface responsável pelos serviços de Hóspede.
 */
class IHospedeService {
public:
    /**
<<<<<<< HEAD
     * @brief Cadastra um novo hóspede no sistema.
     * @param hospede Instância de Hospede a ser cadastrada.
     */
    virtual void cadastrarHospede(const Hospede&) = 0;
=======
     * @brief Adiciona um novo hóspede ao sistema.
     * @param hospede Instância de Hospede a ser adicionada.
     */
    virtual void adicionarHospede(const Hospede&) = 0;
>>>>>>> 3413608363aa6f19fd855a1da7f418812a411103

    /**
     * @brief Retorna a lista de todos os hóspedes cadastrados.
     * @return Vetor contendo todos os hóspedes.
     */
    virtual std::vector<Hospede> listarHospedes() const = 0;

    /**
<<<<<<< HEAD
     * @brief Remove um hóspede com base no cartão.
     * @param cartao Instância de Cartao identificando o hóspede.
     */
    virtual void removerHospede(const Cartao&) = 0;
=======
     * @brief Remove um hóspede com base no e-mail.
     * @param email Instância de Email identificando o hóspede.
     */
    virtual void removerHospede(const Email&) = 0;
>>>>>>> 3413608363aa6f19fd855a1da7f418812a411103

    virtual ~IHospedeService() {}
};

#endif
